#pragma once
#ifndef EXTRAS_KCOLORPICKER_LIBKCOLORPICKER_H
#define EXTRAS_KCOLORPICKER_LIBKCOLORPICKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)

/// k_colorpicker__kcolorpicker_new constructs a new kColorPicker::KColorPicker object.
///
kColorPicker__KColorPicker* k_colorpicker__kcolorpicker_new();

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)

/// k_colorpicker__kcolorpicker_new2 constructs a new kColorPicker::KColorPicker object.
///
/// @param showAlphaChannel bool
///
kColorPicker__KColorPicker* k_colorpicker__kcolorpicker_new2(bool showAlphaChannel);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)

/// k_colorpicker__kcolorpicker_new3 constructs a new kColorPicker::KColorPicker object.
///
/// @param showAlphaChannel bool
/// @param parent QWidget*
///
kColorPicker__KColorPicker* k_colorpicker__kcolorpicker_new3(bool showAlphaChannel, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const kColorPicker__KColorPicker*
///
const QMetaObject* k_colorpicker__kcolorpicker_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback const QMetaObject* func(const kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const kColorPicker__KColorPicker*
///
const QMetaObject* k_colorpicker__kcolorpicker_super_meta_object(const void* self);

/// @param self kColorPicker__KColorPicker*
/// @param param1 const char*
///
void* k_colorpicker__kcolorpicker_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void* func(kColorPicker__KColorPicker* self, const char* param1)
///
void k_colorpicker__kcolorpicker_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 const char*
///
void* k_colorpicker__kcolorpicker_super_metacast(void* self, const char* param1);

/// @param self kColorPicker__KColorPicker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorpicker__kcolorpicker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback int32_t func(kColorPicker__KColorPicker* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_colorpicker__kcolorpicker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorpicker__kcolorpicker_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_colorpicker__kcolorpicker_tr(const char* s);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self kColorPicker__KColorPicker*
/// @param size QSize*
///
void k_colorpicker__kcolorpicker_set_fixed_size(void* self, const void* size);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self kColorPicker__KColorPicker*
/// @param width int
/// @param height int
///
void k_colorpicker__kcolorpicker_set_fixed_size2(void* self, int width, int height);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self const kColorPicker__KColorPicker*
///
QColor* k_colorpicker__kcolorpicker_color(const void* self);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_reset_colors(void* self);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self kColorPicker__KColorPicker*
/// @param color QColor*
///
void k_colorpicker__kcolorpicker_set_color(void* self, const void* color);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self const kColorPicker__KColorPicker*
/// @param color QColor*
///
void k_colorpicker__kcolorpicker_color_changed(const void* self, const void* color);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(const kColorPicker__KColorPicker* self, QColor* color)
///
void k_colorpicker__kcolorpicker_on_color_changed(void* self, void (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_colorpicker__kcolorpicker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_colorpicker__kcolorpicker_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// @param self kColorPicker__KColorPicker*
/// @param showAlphaChannel bool
///
void k_colorpicker__kcolorpicker_reset_colors1(void* self, bool showAlphaChannel);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#toolButtonStyle)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum Qt__ToolButtonStyle
///
int32_t k_colorpicker__kcolorpicker_tool_button_style(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#arrowType)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum Qt__ArrowType
///
int32_t k_colorpicker__kcolorpicker_arrow_type(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setArrowType)
///
/// @param self kColorPicker__KColorPicker*
/// @param type enum Qt__ArrowType
///
void k_colorpicker__kcolorpicker_set_arrow_type(void* self, int32_t type);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setMenu)
///
/// @param self kColorPicker__KColorPicker*
/// @param menu QMenu*
///
void k_colorpicker__kcolorpicker_set_menu(void* self, void* menu);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#menu)
///
/// @param self const kColorPicker__KColorPicker*
///
QMenu* k_colorpicker__kcolorpicker_menu(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setPopupMode)
///
/// @param self kColorPicker__KColorPicker*
/// @param mode enum QToolButton__ToolButtonPopupMode
///
void k_colorpicker__kcolorpicker_set_popup_mode(void* self, int32_t mode);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#popupMode)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_colorpicker__kcolorpicker_popup_mode(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#defaultAction)
///
/// @param self const kColorPicker__KColorPicker*
///
QAction* k_colorpicker__kcolorpicker_default_action(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setAutoRaise)
///
/// @param self kColorPicker__KColorPicker*
/// @param enable bool
///
void k_colorpicker__kcolorpicker_set_auto_raise(void* self, bool enable);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#autoRaise)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_auto_raise(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#showMenu)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_show_menu(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setToolButtonStyle)
///
/// @param self kColorPicker__KColorPicker*
/// @param style enum Qt__ToolButtonStyle
///
void k_colorpicker__kcolorpicker_set_tool_button_style(void* self, int32_t style);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setDefaultAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param defaultAction QAction*
///
void k_colorpicker__kcolorpicker_set_default_action(void* self, void* defaultAction);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QAction*
///
void k_colorpicker__kcolorpicker_triggered(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QAction* param1)
///
void k_colorpicker__kcolorpicker_on_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// @param self kColorPicker__KColorPicker*
/// @param text const char*
///
void k_colorpicker__kcolorpicker_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_text(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// @param self kColorPicker__KColorPicker*
/// @param icon QIcon*
///
void k_colorpicker__kcolorpicker_set_icon(void* self, const void* icon);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// @param self const kColorPicker__KColorPicker*
///
QIcon* k_colorpicker__kcolorpicker_icon(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_icon_size(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// @param self kColorPicker__KColorPicker*
/// @param key QKeySequence*
///
void k_colorpicker__kcolorpicker_set_shortcut(void* self, const void* key);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// @param self const kColorPicker__KColorPicker*
///
QKeySequence* k_colorpicker__kcolorpicker_shortcut(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// @param self kColorPicker__KColorPicker*
/// @param checkable bool
///
void k_colorpicker__kcolorpicker_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_checkable(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_checked(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// @param self kColorPicker__KColorPicker*
/// @param down bool
///
void k_colorpicker__kcolorpicker_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_down(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// @param self kColorPicker__KColorPicker*
/// @param autoRepeat bool
///
void k_colorpicker__kcolorpicker_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_auto_repeat(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// @param self kColorPicker__KColorPicker*
/// @param autoRepeatDelay int
///
void k_colorpicker__kcolorpicker_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_auto_repeat_delay(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// @param self kColorPicker__KColorPicker*
/// @param autoRepeatInterval int
///
void k_colorpicker__kcolorpicker_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_auto_repeat_interval(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// @param self kColorPicker__KColorPicker*
/// @param autoExclusive bool
///
void k_colorpicker__kcolorpicker_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_auto_exclusive(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// @param self const kColorPicker__KColorPicker*
///
QButtonGroup* k_colorpicker__kcolorpicker_group(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// @param self kColorPicker__KColorPicker*
/// @param size QSize*
///
void k_colorpicker__kcolorpicker_set_icon_size(void* self, const void* size);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// @param self kColorPicker__KColorPicker*
/// @param checked bool
///
void k_colorpicker__kcolorpicker_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_released(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self kColorPicker__KColorPicker*
/// @param checked bool
///
void k_colorpicker__kcolorpicker_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, bool checked)
///
void k_colorpicker__kcolorpicker_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self kColorPicker__KColorPicker*
/// @param checked bool
///
void k_colorpicker__kcolorpicker_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, bool checked)
///
void k_colorpicker__kcolorpicker_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const kColorPicker__KColorPicker*
///
QPaintDevice* k_colorpicker__kcolorpicker_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a kColorPicker__KColorPicker object
///
/// @param _qpaintdevice QPaintDevice*
///
kColorPicker__KColorPicker* k_colorpicker__kcolorpicker_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const kColorPicker__KColorPicker*
///
uintptr_t k_colorpicker__kcolorpicker_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const kColorPicker__KColorPicker*
///
uintptr_t k_colorpicker__kcolorpicker_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const kColorPicker__KColorPicker*
///
uintptr_t k_colorpicker__kcolorpicker_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const kColorPicker__KColorPicker*
///
QStyle* k_colorpicker__kcolorpicker_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self kColorPicker__KColorPicker*
/// @param style QStyle*
///
void k_colorpicker__kcolorpicker_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum Qt__WindowModality
///
int32_t k_colorpicker__kcolorpicker_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self kColorPicker__KColorPicker*
/// @param windowModality enum Qt__WindowModality
///
void k_colorpicker__kcolorpicker_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QWidget*
///
bool k_colorpicker__kcolorpicker_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self kColorPicker__KColorPicker*
/// @param enabled bool
///
void k_colorpicker__kcolorpicker_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self kColorPicker__KColorPicker*
/// @param disabled bool
///
void k_colorpicker__kcolorpicker_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self kColorPicker__KColorPicker*
/// @param windowModified bool
///
void k_colorpicker__kcolorpicker_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const kColorPicker__KColorPicker*
///
QRect* k_colorpicker__kcolorpicker_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const kColorPicker__KColorPicker*
///
const QRect* k_colorpicker__kcolorpicker_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const kColorPicker__KColorPicker*
///
QRect* k_colorpicker__kcolorpicker_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const kColorPicker__KColorPicker*
///
QPoint* k_colorpicker__kcolorpicker_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const kColorPicker__KColorPicker*
///
QRect* k_colorpicker__kcolorpicker_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const kColorPicker__KColorPicker*
///
QRect* k_colorpicker__kcolorpicker_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const kColorPicker__KColorPicker*
///
QRegion* k_colorpicker__kcolorpicker_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self kColorPicker__KColorPicker*
/// @param minimumSize QSize*
///
void k_colorpicker__kcolorpicker_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self kColorPicker__KColorPicker*
/// @param minw int
/// @param minh int
///
void k_colorpicker__kcolorpicker_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self kColorPicker__KColorPicker*
/// @param maximumSize QSize*
///
void k_colorpicker__kcolorpicker_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self kColorPicker__KColorPicker*
/// @param maxw int
/// @param maxh int
///
void k_colorpicker__kcolorpicker_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self kColorPicker__KColorPicker*
/// @param minw int
///
void k_colorpicker__kcolorpicker_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self kColorPicker__KColorPicker*
/// @param minh int
///
void k_colorpicker__kcolorpicker_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self kColorPicker__KColorPicker*
/// @param maxw int
///
void k_colorpicker__kcolorpicker_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self kColorPicker__KColorPicker*
/// @param maxh int
///
void k_colorpicker__kcolorpicker_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self kColorPicker__KColorPicker*
/// @param sizeIncrement QSize*
///
void k_colorpicker__kcolorpicker_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self kColorPicker__KColorPicker*
/// @param w int
/// @param h int
///
void k_colorpicker__kcolorpicker_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self kColorPicker__KColorPicker*
/// @param baseSize QSize*
///
void k_colorpicker__kcolorpicker_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self kColorPicker__KColorPicker*
/// @param basew int
/// @param baseh int
///
void k_colorpicker__kcolorpicker_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self kColorPicker__KColorPicker*
/// @param w int
///
void k_colorpicker__kcolorpicker_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self kColorPicker__KColorPicker*
/// @param h int
///
void k_colorpicker__kcolorpicker_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPointF*
///
QPointF* k_colorpicker__kcolorpicker_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPoint*
///
QPoint* k_colorpicker__kcolorpicker_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPointF*
///
QPointF* k_colorpicker__kcolorpicker_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPoint*
///
QPoint* k_colorpicker__kcolorpicker_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPointF*
///
QPointF* k_colorpicker__kcolorpicker_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPoint*
///
QPoint* k_colorpicker__kcolorpicker_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPointF*
///
QPointF* k_colorpicker__kcolorpicker_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QPoint*
///
QPoint* k_colorpicker__kcolorpicker_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_colorpicker__kcolorpicker_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_colorpicker__kcolorpicker_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_colorpicker__kcolorpicker_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_colorpicker__kcolorpicker_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const kColorPicker__KColorPicker*
///
const QPalette* k_colorpicker__kcolorpicker_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self kColorPicker__KColorPicker*
/// @param palette QPalette*
///
void k_colorpicker__kcolorpicker_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self kColorPicker__KColorPicker*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_colorpicker__kcolorpicker_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum QPalette__ColorRole
///
int32_t k_colorpicker__kcolorpicker_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self kColorPicker__KColorPicker*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_colorpicker__kcolorpicker_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum QPalette__ColorRole
///
int32_t k_colorpicker__kcolorpicker_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const kColorPicker__KColorPicker*
///
const QFont* k_colorpicker__kcolorpicker_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self kColorPicker__KColorPicker*
/// @param font QFont*
///
void k_colorpicker__kcolorpicker_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const kColorPicker__KColorPicker*
///
QFontMetrics* k_colorpicker__kcolorpicker_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const kColorPicker__KColorPicker*
///
QFontInfo* k_colorpicker__kcolorpicker_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const kColorPicker__KColorPicker*
///
QCursor* k_colorpicker__kcolorpicker_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self kColorPicker__KColorPicker*
/// @param cursor QCursor*
///
void k_colorpicker__kcolorpicker_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self kColorPicker__KColorPicker*
/// @param enable bool
///
void k_colorpicker__kcolorpicker_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self kColorPicker__KColorPicker*
/// @param enable bool
///
void k_colorpicker__kcolorpicker_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self kColorPicker__KColorPicker*
/// @param mask QBitmap*
///
void k_colorpicker__kcolorpicker_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self kColorPicker__KColorPicker*
/// @param mask QRegion*
///
void k_colorpicker__kcolorpicker_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const kColorPicker__KColorPicker*
///
QRegion* k_colorpicker__kcolorpicker_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param target QPaintDevice*
///
void k_colorpicker__kcolorpicker_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param painter QPainter*
///
void k_colorpicker__kcolorpicker_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self kColorPicker__KColorPicker*
///
QPixmap* k_colorpicker__kcolorpicker_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const kColorPicker__KColorPicker*
///
QGraphicsEffect* k_colorpicker__kcolorpicker_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self kColorPicker__KColorPicker*
/// @param effect QGraphicsEffect*
///
void k_colorpicker__kcolorpicker_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self kColorPicker__KColorPicker*
/// @param type enum Qt__GestureType
///
void k_colorpicker__kcolorpicker_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self kColorPicker__KColorPicker*
/// @param type enum Qt__GestureType
///
void k_colorpicker__kcolorpicker_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self kColorPicker__KColorPicker*
/// @param windowTitle const char*
///
void k_colorpicker__kcolorpicker_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self kColorPicker__KColorPicker*
/// @param styleSheet const char*
///
void k_colorpicker__kcolorpicker_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self kColorPicker__KColorPicker*
/// @param icon QIcon*
///
void k_colorpicker__kcolorpicker_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const kColorPicker__KColorPicker*
///
QIcon* k_colorpicker__kcolorpicker_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self kColorPicker__KColorPicker*
/// @param windowIconText const char*
///
void k_colorpicker__kcolorpicker_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self kColorPicker__KColorPicker*
/// @param windowRole const char*
///
void k_colorpicker__kcolorpicker_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self kColorPicker__KColorPicker*
/// @param filePath const char*
///
void k_colorpicker__kcolorpicker_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self kColorPicker__KColorPicker*
/// @param level double
///
void k_colorpicker__kcolorpicker_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const kColorPicker__KColorPicker*
///
double k_colorpicker__kcolorpicker_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self kColorPicker__KColorPicker*
/// @param toolTip const char*
///
void k_colorpicker__kcolorpicker_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self kColorPicker__KColorPicker*
/// @param msec int
///
void k_colorpicker__kcolorpicker_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self kColorPicker__KColorPicker*
/// @param statusTip const char*
///
void k_colorpicker__kcolorpicker_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self kColorPicker__KColorPicker*
/// @param whatsThis const char*
///
void k_colorpicker__kcolorpicker_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self kColorPicker__KColorPicker*
/// @param name const char*
///
void k_colorpicker__kcolorpicker_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self kColorPicker__KColorPicker*
/// @param description const char*
///
void k_colorpicker__kcolorpicker_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self kColorPicker__KColorPicker*
/// @param direction enum Qt__LayoutDirection
///
void k_colorpicker__kcolorpicker_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_colorpicker__kcolorpicker_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self kColorPicker__KColorPicker*
/// @param locale QLocale*
///
void k_colorpicker__kcolorpicker_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const kColorPicker__KColorPicker*
///
QLocale* k_colorpicker__kcolorpicker_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self kColorPicker__KColorPicker*
/// @param reason enum Qt__FocusReason
///
void k_colorpicker__kcolorpicker_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_colorpicker__kcolorpicker_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self kColorPicker__KColorPicker*
/// @param policy enum Qt__FocusPolicy
///
void k_colorpicker__kcolorpicker_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_colorpicker__kcolorpicker_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self kColorPicker__KColorPicker*
/// @param focusProxy QWidget*
///
void k_colorpicker__kcolorpicker_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_colorpicker__kcolorpicker_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self kColorPicker__KColorPicker*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_colorpicker__kcolorpicker_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QCursor*
///
void k_colorpicker__kcolorpicker_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self kColorPicker__KColorPicker*
/// @param key QKeySequence*
///
int32_t k_colorpicker__kcolorpicker_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self kColorPicker__KColorPicker*
/// @param id int
///
void k_colorpicker__kcolorpicker_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self kColorPicker__KColorPicker*
/// @param id int
///
void k_colorpicker__kcolorpicker_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self kColorPicker__KColorPicker*
/// @param id int
///
void k_colorpicker__kcolorpicker_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_colorpicker__kcolorpicker_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_colorpicker__kcolorpicker_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self kColorPicker__KColorPicker*
/// @param enable bool
///
void k_colorpicker__kcolorpicker_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const kColorPicker__KColorPicker*
///
QGraphicsProxyWidget* k_colorpicker__kcolorpicker_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kColorPicker__KColorPicker*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_colorpicker__kcolorpicker_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QRect*
///
void k_colorpicker__kcolorpicker_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QRegion*
///
void k_colorpicker__kcolorpicker_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kColorPicker__KColorPicker*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_colorpicker__kcolorpicker_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QRect*
///
void k_colorpicker__kcolorpicker_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QRegion*
///
void k_colorpicker__kcolorpicker_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self kColorPicker__KColorPicker*
/// @param hidden bool
///
void k_colorpicker__kcolorpicker_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QWidget*
///
void k_colorpicker__kcolorpicker_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self kColorPicker__KColorPicker*
/// @param x int
/// @param y int
///
void k_colorpicker__kcolorpicker_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QPoint*
///
void k_colorpicker__kcolorpicker_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self kColorPicker__KColorPicker*
/// @param w int
/// @param h int
///
void k_colorpicker__kcolorpicker_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QSize*
///
void k_colorpicker__kcolorpicker_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self kColorPicker__KColorPicker*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_colorpicker__kcolorpicker_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self kColorPicker__KColorPicker*
/// @param geometry QRect*
///
void k_colorpicker__kcolorpicker_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const kColorPicker__KColorPicker*
///
char* k_colorpicker__kcolorpicker_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self kColorPicker__KColorPicker*
/// @param geometry char*
///
bool k_colorpicker__kcolorpicker_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 QWidget*
///
bool k_colorpicker__kcolorpicker_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_colorpicker__kcolorpicker_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self kColorPicker__KColorPicker*
/// @param state flag of enum Qt__WindowState
///
void k_colorpicker__kcolorpicker_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self kColorPicker__KColorPicker*
/// @param state flag of enum Qt__WindowState
///
void k_colorpicker__kcolorpicker_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const kColorPicker__KColorPicker*
///
QSizePolicy* k_colorpicker__kcolorpicker_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self kColorPicker__KColorPicker*
/// @param sizePolicy QSizePolicy*
///
void k_colorpicker__kcolorpicker_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self kColorPicker__KColorPicker*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_colorpicker__kcolorpicker_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const kColorPicker__KColorPicker*
///
QRegion* k_colorpicker__kcolorpicker_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self kColorPicker__KColorPicker*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_colorpicker__kcolorpicker_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self kColorPicker__KColorPicker*
/// @param margins QMargins*
///
void k_colorpicker__kcolorpicker_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const kColorPicker__KColorPicker*
///
QMargins* k_colorpicker__kcolorpicker_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const kColorPicker__KColorPicker*
///
QRect* k_colorpicker__kcolorpicker_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const kColorPicker__KColorPicker*
///
QLayout* k_colorpicker__kcolorpicker_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self kColorPicker__KColorPicker*
/// @param layout QLayout*
///
void k_colorpicker__kcolorpicker_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self kColorPicker__KColorPicker*
/// @param parent QWidget*
///
void k_colorpicker__kcolorpicker_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self kColorPicker__KColorPicker*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_colorpicker__kcolorpicker_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self kColorPicker__KColorPicker*
/// @param dx int
/// @param dy int
///
void k_colorpicker__kcolorpicker_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self kColorPicker__KColorPicker*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_colorpicker__kcolorpicker_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self kColorPicker__KColorPicker*
/// @param on bool
///
void k_colorpicker__kcolorpicker_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param action QAction*
///
void k_colorpicker__kcolorpicker_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self kColorPicker__KColorPicker*
/// @param actions libqt_list of QAction*
///
void k_colorpicker__kcolorpicker_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self kColorPicker__KColorPicker*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_colorpicker__kcolorpicker_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param before QAction*
/// @param action QAction*
///
void k_colorpicker__kcolorpicker_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param action QAction*
///
void k_colorpicker__kcolorpicker_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return libqt_list of QAction*
///
libqt_list k_colorpicker__kcolorpicker_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param text const char*
///
QAction* k_colorpicker__kcolorpicker_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_colorpicker__kcolorpicker_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_colorpicker__kcolorpicker_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kColorPicker__KColorPicker*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_colorpicker__kcolorpicker_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const kColorPicker__KColorPicker*
///
QWidget* k_colorpicker__kcolorpicker_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self kColorPicker__KColorPicker*
/// @param type flag of enum Qt__WindowType
///
void k_colorpicker__kcolorpicker_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_colorpicker__kcolorpicker_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 enum Qt__WindowType
///
void k_colorpicker__kcolorpicker_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self kColorPicker__KColorPicker*
/// @param type flag of enum Qt__WindowType
///
void k_colorpicker__kcolorpicker_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return enum Qt__WindowType
///
int32_t k_colorpicker__kcolorpicker_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_colorpicker__kcolorpicker_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const kColorPicker__KColorPicker*
/// @param x int
/// @param y int
///
QWidget* k_colorpicker__kcolorpicker_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const kColorPicker__KColorPicker*
/// @param p QPoint*
///
QWidget* k_colorpicker__kcolorpicker_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const kColorPicker__KColorPicker*
/// @param p QPointF*
///
QWidget* k_colorpicker__kcolorpicker_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 enum Qt__WidgetAttribute
///
void k_colorpicker__kcolorpicker_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_colorpicker__kcolorpicker_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const kColorPicker__KColorPicker*
/// @param child QWidget*
///
bool k_colorpicker__kcolorpicker_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self kColorPicker__KColorPicker*
/// @param enabled bool
///
void k_colorpicker__kcolorpicker_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const kColorPicker__KColorPicker*
///
QBackingStore* k_colorpicker__kcolorpicker_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const kColorPicker__KColorPicker*
///
QWindow* k_colorpicker__kcolorpicker_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const kColorPicker__KColorPicker*
///
QScreen* k_colorpicker__kcolorpicker_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self kColorPicker__KColorPicker*
/// @param screen QScreen*
///
void k_colorpicker__kcolorpicker_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_colorpicker__kcolorpicker_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self kColorPicker__KColorPicker*
/// @param title const char*
///
void k_colorpicker__kcolorpicker_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, const char* title)
///
void k_colorpicker__kcolorpicker_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self kColorPicker__KColorPicker*
/// @param icon QIcon*
///
void k_colorpicker__kcolorpicker_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QIcon* icon)
///
void k_colorpicker__kcolorpicker_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self kColorPicker__KColorPicker*
/// @param iconText const char*
///
void k_colorpicker__kcolorpicker_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, const char* iconText)
///
void k_colorpicker__kcolorpicker_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self kColorPicker__KColorPicker*
/// @param pos QPoint*
///
void k_colorpicker__kcolorpicker_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QPoint* pos)
///
void k_colorpicker__kcolorpicker_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_colorpicker__kcolorpicker_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self kColorPicker__KColorPicker*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_colorpicker__kcolorpicker_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_colorpicker__kcolorpicker_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_colorpicker__kcolorpicker_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_colorpicker__kcolorpicker_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_colorpicker__kcolorpicker_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_colorpicker__kcolorpicker_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kColorPicker__KColorPicker*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_colorpicker__kcolorpicker_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self kColorPicker__KColorPicker*
/// @param rectangle QRect*
///
QPixmap* k_colorpicker__kcolorpicker_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self kColorPicker__KColorPicker*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_colorpicker__kcolorpicker_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self kColorPicker__KColorPicker*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_colorpicker__kcolorpicker_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self kColorPicker__KColorPicker*
/// @param id int
/// @param enable bool
///
void k_colorpicker__kcolorpicker_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self kColorPicker__KColorPicker*
/// @param id int
/// @param enable bool
///
void k_colorpicker__kcolorpicker_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_colorpicker__kcolorpicker_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_colorpicker__kcolorpicker_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_colorpicker__kcolorpicker_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_colorpicker__kcolorpicker_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char* k_colorpicker__kcolorpicker_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self kColorPicker__KColorPicker*
/// @param name const char*
///
void k_colorpicker__kcolorpicker_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self kColorPicker__KColorPicker*
/// @param b bool
///
bool k_colorpicker__kcolorpicker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const kColorPicker__KColorPicker*
///
QThread* k_colorpicker__kcolorpicker_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self kColorPicker__KColorPicker*
/// @param thread QThread*
///
bool k_colorpicker__kcolorpicker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self kColorPicker__KColorPicker*
/// @param interval int
///
int32_t k_colorpicker__kcolorpicker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self kColorPicker__KColorPicker*
/// @param time int64_t of nanoseconds
///
int32_t k_colorpicker__kcolorpicker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self kColorPicker__KColorPicker*
/// @param id int
///
void k_colorpicker__kcolorpicker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self kColorPicker__KColorPicker*
/// @param id enum Qt__TimerId
///
void k_colorpicker__kcolorpicker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const kColorPicker__KColorPicker*
///
/// @return libqt_list of QObject*
///
libqt_list k_colorpicker__kcolorpicker_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self kColorPicker__KColorPicker*
/// @param filterObj QObject*
///
void k_colorpicker__kcolorpicker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self kColorPicker__KColorPicker*
/// @param obj QObject*
///
void k_colorpicker__kcolorpicker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_colorpicker__kcolorpicker_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_colorpicker__kcolorpicker_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const kColorPicker__KColorPicker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_colorpicker__kcolorpicker_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorpicker__kcolorpicker_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_colorpicker__kcolorpicker_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const kColorPicker__KColorPicker*
/// @param receiver QObject*
///
bool k_colorpicker__kcolorpicker_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_colorpicker__kcolorpicker_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self kColorPicker__KColorPicker*
/// @param name const char*
/// @param value QVariant*
///
bool k_colorpicker__kcolorpicker_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const kColorPicker__KColorPicker*
/// @param name const char*
///
QVariant* k_colorpicker__kcolorpicker_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const kColorPicker__KColorPicker*
///
const char** k_colorpicker__kcolorpicker_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self kColorPicker__KColorPicker*
///
QBindingStorage* k_colorpicker__kcolorpicker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const kColorPicker__KColorPicker*
///
const QBindingStorage* k_colorpicker__kcolorpicker_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const kColorPicker__KColorPicker*
///
QObject* k_colorpicker__kcolorpicker_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const kColorPicker__KColorPicker*
/// @param classname const char*
///
bool k_colorpicker__kcolorpicker_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self kColorPicker__KColorPicker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_colorpicker__kcolorpicker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self kColorPicker__KColorPicker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_colorpicker__kcolorpicker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_colorpicker__kcolorpicker_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_colorpicker__kcolorpicker_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const kColorPicker__KColorPicker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_colorpicker__kcolorpicker_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const kColorPicker__KColorPicker*
/// @param signal const char*
///
bool k_colorpicker__kcolorpicker_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const kColorPicker__KColorPicker*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_colorpicker__kcolorpicker_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const kColorPicker__KColorPicker*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorpicker__kcolorpicker_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const kColorPicker__KColorPicker*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorpicker__kcolorpicker_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QObject*
///
void k_colorpicker__kcolorpicker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QObject* param1)
///
void k_colorpicker__kcolorpicker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const kColorPicker__KColorPicker*
///
double k_colorpicker__kcolorpicker_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const kColorPicker__KColorPicker*
///
double k_colorpicker__kcolorpicker_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_colorpicker__kcolorpicker_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_colorpicker__kcolorpicker_encode_metric_f(int32_t metric, double value);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_size_hint(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_super_size_hint(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback QSize* func(kColorPicker__KColorPicker* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorpicker__kcolorpicker_on_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_minimum_size_hint(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QSize* k_colorpicker__kcolorpicker_super_minimum_size_hint(const void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback QSize* func(kColorPicker__KColorPicker* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorpicker__kcolorpicker_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QEvent*
///
bool k_colorpicker__kcolorpicker_event(void* self, void* e);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QEvent*
///
bool k_colorpicker__kcolorpicker_super_event(void* self, void* e);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self, QEvent* e)
///
void k_colorpicker__kcolorpicker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QMouseEvent*
///
void k_colorpicker__kcolorpicker_mouse_press_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QMouseEvent*
///
void k_colorpicker__kcolorpicker_super_mouse_press_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QMouseEvent* param1)
///
void k_colorpicker__kcolorpicker_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QMouseEvent*
///
void k_colorpicker__kcolorpicker_mouse_release_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QMouseEvent*
///
void k_colorpicker__kcolorpicker_super_mouse_release_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QMouseEvent* param1)
///
void k_colorpicker__kcolorpicker_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QPaintEvent*
///
void k_colorpicker__kcolorpicker_paint_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QPaintEvent*
///
void k_colorpicker__kcolorpicker_super_paint_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QPaintEvent* param1)
///
void k_colorpicker__kcolorpicker_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QActionEvent*
///
void k_colorpicker__kcolorpicker_action_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QActionEvent*
///
void k_colorpicker__kcolorpicker_super_action_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QActionEvent* param1)
///
void k_colorpicker__kcolorpicker_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QEnterEvent*
///
void k_colorpicker__kcolorpicker_enter_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QEnterEvent*
///
void k_colorpicker__kcolorpicker_super_enter_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QEnterEvent* param1)
///
void k_colorpicker__kcolorpicker_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QEvent*
///
void k_colorpicker__kcolorpicker_leave_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QEvent*
///
void k_colorpicker__kcolorpicker_super_leave_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QEvent* param1)
///
void k_colorpicker__kcolorpicker_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QTimerEvent*
///
void k_colorpicker__kcolorpicker_timer_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QTimerEvent*
///
void k_colorpicker__kcolorpicker_super_timer_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QTimerEvent* param1)
///
void k_colorpicker__kcolorpicker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QEvent*
///
void k_colorpicker__kcolorpicker_change_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QEvent*
///
void k_colorpicker__kcolorpicker_super_change_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QEvent* param1)
///
void k_colorpicker__kcolorpicker_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param pos QPoint*
///
bool k_colorpicker__kcolorpicker_hit_button(const void* self, const void* pos);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param pos QPoint*
///
bool k_colorpicker__kcolorpicker_super_hit_button(const void* self, const void* pos);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self, QPoint* pos)
///
void k_colorpicker__kcolorpicker_on_hit_button(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_check_state_set(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_super_check_state_set(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_check_state_set(void* self, void (*callback)(void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_next_check_state(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_super_next_check_state(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_next_check_state(void* self, void (*callback)(void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param option QStyleOptionToolButton*
///
void k_colorpicker__kcolorpicker_init_style_option(const void* self, void* option);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param option QStyleOptionToolButton*
///
void k_colorpicker__kcolorpicker_super_init_style_option(const void* self, void* option);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QStyleOptionToolButton* option)
///
void k_colorpicker__kcolorpicker_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QKeyEvent*
///
void k_colorpicker__kcolorpicker_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QKeyEvent*
///
void k_colorpicker__kcolorpicker_super_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QKeyEvent* e)
///
void k_colorpicker__kcolorpicker_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QKeyEvent*
///
void k_colorpicker__kcolorpicker_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QKeyEvent*
///
void k_colorpicker__kcolorpicker_super_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QKeyEvent* e)
///
void k_colorpicker__kcolorpicker_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QMouseEvent*
///
void k_colorpicker__kcolorpicker_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QMouseEvent*
///
void k_colorpicker__kcolorpicker_super_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QMouseEvent* e)
///
void k_colorpicker__kcolorpicker_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QFocusEvent*
///
void k_colorpicker__kcolorpicker_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QFocusEvent*
///
void k_colorpicker__kcolorpicker_super_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QFocusEvent* e)
///
void k_colorpicker__kcolorpicker_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QFocusEvent*
///
void k_colorpicker__kcolorpicker_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param e QFocusEvent*
///
void k_colorpicker__kcolorpicker_super_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QFocusEvent* e)
///
void k_colorpicker__kcolorpicker_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback int32_t func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param visible bool
///
void k_colorpicker__kcolorpicker_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param visible bool
///
void k_colorpicker__kcolorpicker_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, bool visible)
///
void k_colorpicker__kcolorpicker_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 int
///
int32_t k_colorpicker__kcolorpicker_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 int
///
int32_t k_colorpicker__kcolorpicker_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback int32_t func(kColorPicker__KColorPicker* self, int param1)
///
void k_colorpicker__kcolorpicker_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QPaintEngine* k_colorpicker__kcolorpicker_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QPaintEngine* k_colorpicker__kcolorpicker_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback QPaintEngine* func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QMouseEvent*
///
void k_colorpicker__kcolorpicker_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QMouseEvent*
///
void k_colorpicker__kcolorpicker_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QMouseEvent* event)
///
void k_colorpicker__kcolorpicker_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QWheelEvent*
///
void k_colorpicker__kcolorpicker_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QWheelEvent*
///
void k_colorpicker__kcolorpicker_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QWheelEvent* event)
///
void k_colorpicker__kcolorpicker_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QMoveEvent*
///
void k_colorpicker__kcolorpicker_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QMoveEvent*
///
void k_colorpicker__kcolorpicker_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QMoveEvent* event)
///
void k_colorpicker__kcolorpicker_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QResizeEvent*
///
void k_colorpicker__kcolorpicker_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QResizeEvent*
///
void k_colorpicker__kcolorpicker_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QResizeEvent* event)
///
void k_colorpicker__kcolorpicker_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QCloseEvent*
///
void k_colorpicker__kcolorpicker_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QCloseEvent*
///
void k_colorpicker__kcolorpicker_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QCloseEvent* event)
///
void k_colorpicker__kcolorpicker_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QContextMenuEvent*
///
void k_colorpicker__kcolorpicker_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QContextMenuEvent*
///
void k_colorpicker__kcolorpicker_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QContextMenuEvent* event)
///
void k_colorpicker__kcolorpicker_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QTabletEvent*
///
void k_colorpicker__kcolorpicker_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QTabletEvent*
///
void k_colorpicker__kcolorpicker_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QTabletEvent* event)
///
void k_colorpicker__kcolorpicker_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDragEnterEvent*
///
void k_colorpicker__kcolorpicker_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDragEnterEvent*
///
void k_colorpicker__kcolorpicker_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QDragEnterEvent* event)
///
void k_colorpicker__kcolorpicker_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDragMoveEvent*
///
void k_colorpicker__kcolorpicker_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDragMoveEvent*
///
void k_colorpicker__kcolorpicker_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QDragMoveEvent* event)
///
void k_colorpicker__kcolorpicker_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDragLeaveEvent*
///
void k_colorpicker__kcolorpicker_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDragLeaveEvent*
///
void k_colorpicker__kcolorpicker_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QDragLeaveEvent* event)
///
void k_colorpicker__kcolorpicker_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDropEvent*
///
void k_colorpicker__kcolorpicker_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QDropEvent*
///
void k_colorpicker__kcolorpicker_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QDropEvent* event)
///
void k_colorpicker__kcolorpicker_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QShowEvent*
///
void k_colorpicker__kcolorpicker_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QShowEvent*
///
void k_colorpicker__kcolorpicker_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QShowEvent* event)
///
void k_colorpicker__kcolorpicker_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QHideEvent*
///
void k_colorpicker__kcolorpicker_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QHideEvent*
///
void k_colorpicker__kcolorpicker_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QHideEvent* event)
///
void k_colorpicker__kcolorpicker_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_colorpicker__kcolorpicker_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_colorpicker__kcolorpicker_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_colorpicker__kcolorpicker_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_colorpicker__kcolorpicker_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_colorpicker__kcolorpicker_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback int32_t func(kColorPicker__KColorPicker* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_colorpicker__kcolorpicker_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param painter QPainter*
///
void k_colorpicker__kcolorpicker_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param painter QPainter*
///
void k_colorpicker__kcolorpicker_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QPainter* painter)
///
void k_colorpicker__kcolorpicker_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param offset QPoint*
///
QPaintDevice* k_colorpicker__kcolorpicker_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param offset QPoint*
///
QPaintDevice* k_colorpicker__kcolorpicker_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback QPaintDevice* func(kColorPicker__KColorPicker* self, QPoint* offset)
///
void k_colorpicker__kcolorpicker_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QPainter* k_colorpicker__kcolorpicker_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QPainter* k_colorpicker__kcolorpicker_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback QPainter* func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QInputMethodEvent*
///
void k_colorpicker__kcolorpicker_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param param1 QInputMethodEvent*
///
void k_colorpicker__kcolorpicker_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QInputMethodEvent* param1)
///
void k_colorpicker__kcolorpicker_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_colorpicker__kcolorpicker_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_colorpicker__kcolorpicker_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback QVariant* func(kColorPicker__KColorPicker* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorpicker__kcolorpicker_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param next bool
///
bool k_colorpicker__kcolorpicker_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param next bool
///
bool k_colorpicker__kcolorpicker_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self, bool next)
///
void k_colorpicker__kcolorpicker_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorpicker__kcolorpicker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorpicker__kcolorpicker_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self, QObject* watched, QEvent* event)
///
void k_colorpicker__kcolorpicker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QChildEvent*
///
void k_colorpicker__kcolorpicker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QChildEvent*
///
void k_colorpicker__kcolorpicker_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QChildEvent* event)
///
void k_colorpicker__kcolorpicker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QEvent*
///
void k_colorpicker__kcolorpicker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param event QEvent*
///
void k_colorpicker__kcolorpicker_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QEvent* event)
///
void k_colorpicker__kcolorpicker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param signal QMetaMethod*
///
void k_colorpicker__kcolorpicker_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param signal QMetaMethod*
///
void k_colorpicker__kcolorpicker_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QMetaMethod* signal)
///
void k_colorpicker__kcolorpicker_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param signal QMetaMethod*
///
void k_colorpicker__kcolorpicker_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param signal QMetaMethod*
///
void k_colorpicker__kcolorpicker_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, QMetaMethod* signal)
///
void k_colorpicker__kcolorpicker_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
///
bool k_colorpicker__kcolorpicker_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QObject* k_colorpicker__kcolorpicker_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
QObject* k_colorpicker__kcolorpicker_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback QObject* func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
///
int32_t k_colorpicker__kcolorpicker_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback int32_t func(kColorPicker__KColorPicker* self)
///
void k_colorpicker__kcolorpicker_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param signal const char*
///
int32_t k_colorpicker__kcolorpicker_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param signal const char*
///
int32_t k_colorpicker__kcolorpicker_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback int32_t func(kColorPicker__KColorPicker* self, const char* signal)
///
void k_colorpicker__kcolorpicker_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param signal QMetaMethod*
///
bool k_colorpicker__kcolorpicker_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param signal QMetaMethod*
///
bool k_colorpicker__kcolorpicker_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback bool func(kColorPicker__KColorPicker* self, QMetaMethod* signal)
///
void k_colorpicker__kcolorpicker_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_colorpicker__kcolorpicker_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const kColorPicker__KColorPicker*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_colorpicker__kcolorpicker_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kColorPicker__KColorPicker*
/// @param callback double func(kColorPicker__KColorPicker* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_colorpicker__kcolorpicker_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self kColorPicker__KColorPicker*
/// @param callback void func(kColorPicker__KColorPicker* self, const char* objectName)
///
void k_colorpicker__kcolorpicker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/ksnip/kcolorpicker)
///
/// Delete this object from C++ memory.
///
/// @param self kColorPicker__KColorPicker*
///
void k_colorpicker__kcolorpicker_delete(void* self);

#endif
