#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKANIMATEDBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKANIMATEDBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kanimatedbutton.html

/// k_animatedbutton_new constructs a new KAnimatedButton object.
///
/// @param parent QWidget*
KAnimatedButton* k_animatedbutton_new(void* parent);

/// k_animatedbutton_new2 constructs a new KAnimatedButton object.
///
KAnimatedButton* k_animatedbutton_new2();

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KAnimatedButton*
const QMetaObject* k_animatedbutton_meta_object(void* self);

/// @param self KAnimatedButton*
/// @param param1 const char*
void* k_animatedbutton_metacast(void* self, const char* param1);

/// @param self KAnimatedButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_animatedbutton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KAnimatedButton*
/// @param callback int32_t func(KAnimatedButton* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_animatedbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KAnimatedButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_animatedbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_animatedbutton_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kanimatedbutton.html#animationPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_animation_path(void* self);

/// [Qt documentation](https://api-staging.kde.org/kanimatedbutton.html#setAnimationPath)
///
/// @param self KAnimatedButton*
/// @param path const char*
void k_animatedbutton_set_animation_path(void* self, const char* path);

/// [Qt documentation](https://api-staging.kde.org/kanimatedbutton.html#start)
///
/// @param self KAnimatedButton*
void k_animatedbutton_start(void* self);

/// [Qt documentation](https://api-staging.kde.org/kanimatedbutton.html#stop)
///
/// @param self KAnimatedButton*
void k_animatedbutton_stop(void* self);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_animatedbutton_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_animatedbutton_tr3(const char* s, const char* c, int n);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#toolButtonStyle)
///
/// @param self KAnimatedButton*
///
/// @return enum Qt__ToolButtonStyle
int32_t k_animatedbutton_tool_button_style(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#arrowType)
///
/// @param self KAnimatedButton*
///
/// @return enum Qt__ArrowType
int32_t k_animatedbutton_arrow_type(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setArrowType)
///
/// @param self KAnimatedButton*
/// @param typeVal enum Qt__ArrowType
void k_animatedbutton_set_arrow_type(void* self, int32_t typeVal);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setMenu)
///
/// @param self KAnimatedButton*
/// @param menu QMenu*
void k_animatedbutton_set_menu(void* self, void* menu);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#menu)
///
/// @param self KAnimatedButton*
QMenu* k_animatedbutton_menu(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setPopupMode)
///
/// @param self KAnimatedButton*
/// @param mode enum QToolButton__ToolButtonPopupMode
void k_animatedbutton_set_popup_mode(void* self, int32_t mode);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#popupMode)
///
/// @param self KAnimatedButton*
///
/// @return enum QToolButton__ToolButtonPopupMode
int32_t k_animatedbutton_popup_mode(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#defaultAction)
///
/// @param self KAnimatedButton*
QAction* k_animatedbutton_default_action(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setAutoRaise)
///
/// @param self KAnimatedButton*
/// @param enable bool
void k_animatedbutton_set_auto_raise(void* self, bool enable);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#autoRaise)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_auto_raise(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#showMenu)
///
/// @param self KAnimatedButton*
void k_animatedbutton_show_menu(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setToolButtonStyle)
///
/// @param self KAnimatedButton*
/// @param style enum Qt__ToolButtonStyle
void k_animatedbutton_set_tool_button_style(void* self, int32_t style);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#setDefaultAction)
///
/// @param self KAnimatedButton*
/// @param defaultAction QAction*
void k_animatedbutton_set_default_action(void* self, void* defaultAction);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// @param self KAnimatedButton*
/// @param param1 QAction*
void k_animatedbutton_triggered(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QAction* param1)
void k_animatedbutton_on_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// @param self KAnimatedButton*
/// @param text const char*
void k_animatedbutton_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_text(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// @param self KAnimatedButton*
/// @param icon QIcon*
void k_animatedbutton_set_icon(void* self, void* icon);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// @param self KAnimatedButton*
QIcon* k_animatedbutton_icon(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_icon_size(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// @param self KAnimatedButton*
/// @param key QKeySequence*
void k_animatedbutton_set_shortcut(void* self, void* key);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// @param self KAnimatedButton*
QKeySequence* k_animatedbutton_shortcut(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// @param self KAnimatedButton*
/// @param checkable bool
void k_animatedbutton_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_checkable(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_checked(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// @param self KAnimatedButton*
/// @param down bool
void k_animatedbutton_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_down(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// @param self KAnimatedButton*
/// @param autoRepeat bool
void k_animatedbutton_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_auto_repeat(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// @param self KAnimatedButton*
/// @param autoRepeatDelay int
void k_animatedbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_auto_repeat_delay(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// @param self KAnimatedButton*
/// @param autoRepeatInterval int
void k_animatedbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_auto_repeat_interval(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// @param self KAnimatedButton*
/// @param autoExclusive bool
void k_animatedbutton_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_auto_exclusive(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// @param self KAnimatedButton*
QButtonGroup* k_animatedbutton_group(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// @param self KAnimatedButton*
/// @param size QSize*
void k_animatedbutton_set_icon_size(void* self, void* size);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// @param self KAnimatedButton*
void k_animatedbutton_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// @param self KAnimatedButton*
void k_animatedbutton_click(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// @param self KAnimatedButton*
void k_animatedbutton_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// @param self KAnimatedButton*
/// @param checked bool
void k_animatedbutton_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self KAnimatedButton*
void k_animatedbutton_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self)
void k_animatedbutton_on_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self KAnimatedButton*
void k_animatedbutton_released(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self)
void k_animatedbutton_on_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KAnimatedButton*
void k_animatedbutton_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self)
void k_animatedbutton_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self KAnimatedButton*
/// @param checked bool
void k_animatedbutton_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, bool checked)
void k_animatedbutton_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KAnimatedButton*
/// @param checked bool
void k_animatedbutton_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, bool checked)
void k_animatedbutton_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KAnimatedButton*
uintptr_t k_animatedbutton_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KAnimatedButton*
void k_animatedbutton_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KAnimatedButton*
uintptr_t k_animatedbutton_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KAnimatedButton*
uintptr_t k_animatedbutton_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KAnimatedButton*
QStyle* k_animatedbutton_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KAnimatedButton*
/// @param style QStyle*
void k_animatedbutton_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KAnimatedButton*
///
/// @return enum Qt__WindowModality
int32_t k_animatedbutton_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KAnimatedButton*
/// @param windowModality enum Qt__WindowModality
void k_animatedbutton_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KAnimatedButton*
/// @param param1 QWidget*
bool k_animatedbutton_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KAnimatedButton*
/// @param enabled bool
void k_animatedbutton_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KAnimatedButton*
/// @param disabled bool
void k_animatedbutton_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KAnimatedButton*
/// @param windowModified bool
void k_animatedbutton_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KAnimatedButton*
QRect* k_animatedbutton_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KAnimatedButton*
const QRect* k_animatedbutton_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KAnimatedButton*
QRect* k_animatedbutton_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KAnimatedButton*
QPoint* k_animatedbutton_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KAnimatedButton*
QRect* k_animatedbutton_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KAnimatedButton*
QRect* k_animatedbutton_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KAnimatedButton*
QRegion* k_animatedbutton_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KAnimatedButton*
/// @param minimumSize QSize*
void k_animatedbutton_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KAnimatedButton*
/// @param minw int
/// @param minh int
void k_animatedbutton_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KAnimatedButton*
/// @param maximumSize QSize*
void k_animatedbutton_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KAnimatedButton*
/// @param maxw int
/// @param maxh int
void k_animatedbutton_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KAnimatedButton*
/// @param minw int
void k_animatedbutton_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KAnimatedButton*
/// @param minh int
void k_animatedbutton_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KAnimatedButton*
/// @param maxw int
void k_animatedbutton_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KAnimatedButton*
/// @param maxh int
void k_animatedbutton_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KAnimatedButton*
/// @param sizeIncrement QSize*
void k_animatedbutton_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KAnimatedButton*
/// @param w int
/// @param h int
void k_animatedbutton_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KAnimatedButton*
/// @param baseSize QSize*
void k_animatedbutton_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KAnimatedButton*
/// @param basew int
/// @param baseh int
void k_animatedbutton_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KAnimatedButton*
/// @param fixedSize QSize*
void k_animatedbutton_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KAnimatedButton*
/// @param w int
/// @param h int
void k_animatedbutton_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KAnimatedButton*
/// @param w int
void k_animatedbutton_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KAnimatedButton*
/// @param h int
void k_animatedbutton_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KAnimatedButton*
/// @param param1 QPointF*
QPointF* k_animatedbutton_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KAnimatedButton*
/// @param param1 QPoint*
QPoint* k_animatedbutton_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KAnimatedButton*
/// @param param1 QPointF*
QPointF* k_animatedbutton_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KAnimatedButton*
/// @param param1 QPoint*
QPoint* k_animatedbutton_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KAnimatedButton*
/// @param param1 QPointF*
QPointF* k_animatedbutton_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KAnimatedButton*
/// @param param1 QPoint*
QPoint* k_animatedbutton_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KAnimatedButton*
/// @param param1 QPointF*
QPointF* k_animatedbutton_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KAnimatedButton*
/// @param param1 QPoint*
QPoint* k_animatedbutton_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KAnimatedButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_animatedbutton_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KAnimatedButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_animatedbutton_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KAnimatedButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_animatedbutton_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KAnimatedButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_animatedbutton_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KAnimatedButton*
const QPalette* k_animatedbutton_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KAnimatedButton*
/// @param palette QPalette*
void k_animatedbutton_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KAnimatedButton*
/// @param backgroundRole enum QPalette__ColorRole
void k_animatedbutton_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KAnimatedButton*
///
/// @return enum QPalette__ColorRole
int32_t k_animatedbutton_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KAnimatedButton*
/// @param foregroundRole enum QPalette__ColorRole
void k_animatedbutton_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KAnimatedButton*
///
/// @return enum QPalette__ColorRole
int32_t k_animatedbutton_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KAnimatedButton*
const QFont* k_animatedbutton_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KAnimatedButton*
/// @param font QFont*
void k_animatedbutton_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KAnimatedButton*
QFontMetrics* k_animatedbutton_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KAnimatedButton*
QFontInfo* k_animatedbutton_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KAnimatedButton*
QCursor* k_animatedbutton_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KAnimatedButton*
/// @param cursor QCursor*
void k_animatedbutton_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KAnimatedButton*
void k_animatedbutton_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KAnimatedButton*
/// @param enable bool
void k_animatedbutton_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KAnimatedButton*
/// @param enable bool
void k_animatedbutton_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KAnimatedButton*
/// @param mask QBitmap*
void k_animatedbutton_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KAnimatedButton*
/// @param mask QRegion*
void k_animatedbutton_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KAnimatedButton*
QRegion* k_animatedbutton_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KAnimatedButton*
void k_animatedbutton_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param target QPaintDevice*
void k_animatedbutton_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param painter QPainter*
void k_animatedbutton_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KAnimatedButton*
QPixmap* k_animatedbutton_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KAnimatedButton*
QGraphicsEffect* k_animatedbutton_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KAnimatedButton*
/// @param effect QGraphicsEffect*
void k_animatedbutton_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KAnimatedButton*
/// @param typeVal enum Qt__GestureType
void k_animatedbutton_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KAnimatedButton*
/// @param typeVal enum Qt__GestureType
void k_animatedbutton_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KAnimatedButton*
/// @param windowTitle const char*
void k_animatedbutton_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KAnimatedButton*
/// @param styleSheet const char*
void k_animatedbutton_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KAnimatedButton*
/// @param icon QIcon*
void k_animatedbutton_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KAnimatedButton*
QIcon* k_animatedbutton_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KAnimatedButton*
/// @param windowIconText const char*
void k_animatedbutton_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KAnimatedButton*
/// @param windowRole const char*
void k_animatedbutton_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KAnimatedButton*
/// @param filePath const char*
void k_animatedbutton_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KAnimatedButton*
/// @param level double
void k_animatedbutton_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KAnimatedButton*
double k_animatedbutton_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KAnimatedButton*
/// @param toolTip const char*
void k_animatedbutton_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KAnimatedButton*
/// @param msec int
void k_animatedbutton_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KAnimatedButton*
/// @param statusTip const char*
void k_animatedbutton_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KAnimatedButton*
/// @param whatsThis const char*
void k_animatedbutton_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KAnimatedButton*
/// @param name const char*
void k_animatedbutton_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KAnimatedButton*
/// @param description const char*
void k_animatedbutton_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KAnimatedButton*
/// @param direction enum Qt__LayoutDirection
void k_animatedbutton_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KAnimatedButton*
///
/// @return enum Qt__LayoutDirection
int32_t k_animatedbutton_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KAnimatedButton*
void k_animatedbutton_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KAnimatedButton*
/// @param locale QLocale*
void k_animatedbutton_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KAnimatedButton*
QLocale* k_animatedbutton_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KAnimatedButton*
void k_animatedbutton_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KAnimatedButton*
void k_animatedbutton_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KAnimatedButton*
void k_animatedbutton_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KAnimatedButton*
void k_animatedbutton_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KAnimatedButton*
/// @param reason enum Qt__FocusReason
void k_animatedbutton_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KAnimatedButton*
///
/// @return enum Qt__FocusPolicy
int32_t k_animatedbutton_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KAnimatedButton*
/// @param policy enum Qt__FocusPolicy
void k_animatedbutton_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_animatedbutton_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KAnimatedButton*
/// @param focusProxy QWidget*
void k_animatedbutton_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KAnimatedButton*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_animatedbutton_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KAnimatedButton*
/// @param policy enum Qt__ContextMenuPolicy
void k_animatedbutton_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KAnimatedButton*
void k_animatedbutton_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KAnimatedButton*
/// @param param1 QCursor*
void k_animatedbutton_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KAnimatedButton*
void k_animatedbutton_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KAnimatedButton*
void k_animatedbutton_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KAnimatedButton*
void k_animatedbutton_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KAnimatedButton*
/// @param key QKeySequence*
int32_t k_animatedbutton_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KAnimatedButton*
/// @param id int
void k_animatedbutton_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KAnimatedButton*
/// @param id int
void k_animatedbutton_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KAnimatedButton*
/// @param id int
void k_animatedbutton_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_animatedbutton_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_animatedbutton_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KAnimatedButton*
/// @param enable bool
void k_animatedbutton_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KAnimatedButton*
QGraphicsProxyWidget* k_animatedbutton_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAnimatedButton*
void k_animatedbutton_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAnimatedButton*
void k_animatedbutton_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAnimatedButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_animatedbutton_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAnimatedButton*
/// @param param1 QRect*
void k_animatedbutton_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAnimatedButton*
/// @param param1 QRegion*
void k_animatedbutton_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAnimatedButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_animatedbutton_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAnimatedButton*
/// @param param1 QRect*
void k_animatedbutton_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAnimatedButton*
/// @param param1 QRegion*
void k_animatedbutton_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KAnimatedButton*
/// @param hidden bool
void k_animatedbutton_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KAnimatedButton*
void k_animatedbutton_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KAnimatedButton*
void k_animatedbutton_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KAnimatedButton*
void k_animatedbutton_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KAnimatedButton*
void k_animatedbutton_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KAnimatedButton*
void k_animatedbutton_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KAnimatedButton*
void k_animatedbutton_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KAnimatedButton*
void k_animatedbutton_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KAnimatedButton*
void k_animatedbutton_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KAnimatedButton*
/// @param param1 QWidget*
void k_animatedbutton_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KAnimatedButton*
/// @param x int
/// @param y int
void k_animatedbutton_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KAnimatedButton*
/// @param param1 QPoint*
void k_animatedbutton_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KAnimatedButton*
/// @param w int
/// @param h int
void k_animatedbutton_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KAnimatedButton*
/// @param param1 QSize*
void k_animatedbutton_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KAnimatedButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_animatedbutton_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KAnimatedButton*
/// @param geometry QRect*
void k_animatedbutton_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
char* k_animatedbutton_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KAnimatedButton*
/// @param geometry const char*
bool k_animatedbutton_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KAnimatedButton*
void k_animatedbutton_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KAnimatedButton*
/// @param param1 QWidget*
bool k_animatedbutton_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KAnimatedButton*
///
/// @return flag of enum Qt__WindowState
int64_t k_animatedbutton_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KAnimatedButton*
/// @param state flag of enum Qt__WindowState
void k_animatedbutton_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KAnimatedButton*
/// @param state flag of enum Qt__WindowState
void k_animatedbutton_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KAnimatedButton*
QSizePolicy* k_animatedbutton_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KAnimatedButton*
/// @param sizePolicy QSizePolicy*
void k_animatedbutton_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KAnimatedButton*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_animatedbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KAnimatedButton*
QRegion* k_animatedbutton_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KAnimatedButton*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_animatedbutton_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KAnimatedButton*
/// @param margins QMargins*
void k_animatedbutton_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KAnimatedButton*
QMargins* k_animatedbutton_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KAnimatedButton*
QRect* k_animatedbutton_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KAnimatedButton*
QLayout* k_animatedbutton_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KAnimatedButton*
/// @param layout QLayout*
void k_animatedbutton_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KAnimatedButton*
void k_animatedbutton_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KAnimatedButton*
/// @param parent QWidget*
void k_animatedbutton_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KAnimatedButton*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_animatedbutton_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KAnimatedButton*
/// @param dx int
/// @param dy int
void k_animatedbutton_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KAnimatedButton*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_animatedbutton_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KAnimatedButton*
/// @param on bool
void k_animatedbutton_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAnimatedButton*
/// @param action QAction*
void k_animatedbutton_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KAnimatedButton*
/// @param actions libqt_list /* of QAction* */
void k_animatedbutton_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KAnimatedButton*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_animatedbutton_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KAnimatedButton*
/// @param before QAction*
/// @param action QAction*
void k_animatedbutton_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KAnimatedButton*
/// @param action QAction*
void k_animatedbutton_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KAnimatedButton*
libqt_list /* of QAction* */ k_animatedbutton_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAnimatedButton*
/// @param text const char*
QAction* k_animatedbutton_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAnimatedButton*
/// @param icon QIcon*
/// @param text const char*
QAction* k_animatedbutton_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAnimatedButton*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_animatedbutton_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAnimatedButton*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_animatedbutton_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KAnimatedButton*
QWidget* k_animatedbutton_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KAnimatedButton*
/// @param typeVal flag of enum Qt__WindowType
void k_animatedbutton_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KAnimatedButton*
///
/// @return flag of enum Qt__WindowType
int64_t k_animatedbutton_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KAnimatedButton*
/// @param param1 enum Qt__WindowType
void k_animatedbutton_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KAnimatedButton*
/// @param typeVal flag of enum Qt__WindowType
void k_animatedbutton_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KAnimatedButton*
///
/// @return enum Qt__WindowType
int64_t k_animatedbutton_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_animatedbutton_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KAnimatedButton*
/// @param x int
/// @param y int
QWidget* k_animatedbutton_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KAnimatedButton*
/// @param p QPoint*
QWidget* k_animatedbutton_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KAnimatedButton*
/// @param p QPointF*
QWidget* k_animatedbutton_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KAnimatedButton*
/// @param param1 enum Qt__WidgetAttribute
void k_animatedbutton_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KAnimatedButton*
/// @param param1 enum Qt__WidgetAttribute
bool k_animatedbutton_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KAnimatedButton*
void k_animatedbutton_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KAnimatedButton*
/// @param child QWidget*
bool k_animatedbutton_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KAnimatedButton*
/// @param enabled bool
void k_animatedbutton_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KAnimatedButton*
QBackingStore* k_animatedbutton_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KAnimatedButton*
QWindow* k_animatedbutton_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KAnimatedButton*
QScreen* k_animatedbutton_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KAnimatedButton*
/// @param screen QScreen*
void k_animatedbutton_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_animatedbutton_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KAnimatedButton*
/// @param title const char*
void k_animatedbutton_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, const char* title)
void k_animatedbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KAnimatedButton*
/// @param icon QIcon*
void k_animatedbutton_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QIcon* icon)
void k_animatedbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KAnimatedButton*
/// @param iconText const char*
void k_animatedbutton_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, const char* iconText)
void k_animatedbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KAnimatedButton*
/// @param pos QPoint*
void k_animatedbutton_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QPoint* pos)
void k_animatedbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KAnimatedButton*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_animatedbutton_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KAnimatedButton*
/// @param hints flag of enum Qt__InputMethodHint
void k_animatedbutton_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_animatedbutton_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_animatedbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_animatedbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_animatedbutton_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_animatedbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAnimatedButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_animatedbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KAnimatedButton*
/// @param rectangle QRect*
QPixmap* k_animatedbutton_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KAnimatedButton*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_animatedbutton_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KAnimatedButton*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_animatedbutton_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KAnimatedButton*
/// @param id int
/// @param enable bool
void k_animatedbutton_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KAnimatedButton*
/// @param id int
/// @param enable bool
void k_animatedbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KAnimatedButton*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_animatedbutton_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KAnimatedButton*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_animatedbutton_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_animatedbutton_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_animatedbutton_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char* k_animatedbutton_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAnimatedButton*
/// @param name char*
void k_animatedbutton_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KAnimatedButton*
/// @param b bool
bool k_animatedbutton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KAnimatedButton*
QThread* k_animatedbutton_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAnimatedButton*
/// @param thread QThread*
bool k_animatedbutton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAnimatedButton*
/// @param interval int
int32_t k_animatedbutton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAnimatedButton*
/// @param id int
void k_animatedbutton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAnimatedButton*
/// @param id enum Qt__TimerId
void k_animatedbutton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KAnimatedButton*
libqt_list /* of QObject* */ k_animatedbutton_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KAnimatedButton*
/// @param filterObj QObject*
void k_animatedbutton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KAnimatedButton*
/// @param obj QObject*
void k_animatedbutton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_animatedbutton_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAnimatedButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_animatedbutton_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_animatedbutton_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_animatedbutton_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KAnimatedButton*
void k_animatedbutton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KAnimatedButton*
void k_animatedbutton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAnimatedButton*
/// @param name const char*
/// @param value QVariant*
bool k_animatedbutton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KAnimatedButton*
/// @param name const char*
QVariant* k_animatedbutton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAnimatedButton*
const char** k_animatedbutton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAnimatedButton*
QBindingStorage* k_animatedbutton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAnimatedButton*
const QBindingStorage* k_animatedbutton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAnimatedButton*
void k_animatedbutton_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self)
void k_animatedbutton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KAnimatedButton*
QObject* k_animatedbutton_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KAnimatedButton*
/// @param classname const char*
bool k_animatedbutton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAnimatedButton*
void k_animatedbutton_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAnimatedButton*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_animatedbutton_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAnimatedButton*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_animatedbutton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_animatedbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAnimatedButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_animatedbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAnimatedButton*
/// @param param1 QObject*
void k_animatedbutton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QObject* param1)
void k_animatedbutton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KAnimatedButton*
bool k_animatedbutton_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KAnimatedButton*
double k_animatedbutton_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KAnimatedButton*
double k_animatedbutton_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_animatedbutton_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_animatedbutton_encode_metric_f(int32_t metric, double value);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_size_hint(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_qbase_size_hint(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback QSize* func()
void k_animatedbutton_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_minimum_size_hint(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
QSize* k_animatedbutton_qbase_minimum_size_hint(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback QSize* func()
void k_animatedbutton_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QEvent*
bool k_animatedbutton_event(void* self, void* e);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QEvent*
bool k_animatedbutton_qbase_event(void* self, void* e);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func(KAnimatedButton* self, QEvent* e)
void k_animatedbutton_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QMouseEvent*
void k_animatedbutton_mouse_press_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QMouseEvent*
void k_animatedbutton_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QMouseEvent* param1)
void k_animatedbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QMouseEvent*
void k_animatedbutton_mouse_release_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QMouseEvent*
void k_animatedbutton_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QMouseEvent* param1)
void k_animatedbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QPaintEvent*
void k_animatedbutton_paint_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QPaintEvent*
void k_animatedbutton_qbase_paint_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QPaintEvent* param1)
void k_animatedbutton_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QActionEvent*
void k_animatedbutton_action_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QActionEvent*
void k_animatedbutton_qbase_action_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QActionEvent* param1)
void k_animatedbutton_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QEnterEvent*
void k_animatedbutton_enter_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QEnterEvent*
void k_animatedbutton_qbase_enter_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QEnterEvent* param1)
void k_animatedbutton_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QEvent*
void k_animatedbutton_leave_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QEvent*
void k_animatedbutton_qbase_leave_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QEvent* param1)
void k_animatedbutton_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QTimerEvent*
void k_animatedbutton_timer_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QTimerEvent*
void k_animatedbutton_qbase_timer_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QTimerEvent* param1)
void k_animatedbutton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QEvent*
void k_animatedbutton_change_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QEvent*
void k_animatedbutton_qbase_change_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QEvent* param1)
void k_animatedbutton_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param pos QPoint*
bool k_animatedbutton_hit_button(void* self, void* pos);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param pos QPoint*
bool k_animatedbutton_qbase_hit_button(void* self, void* pos);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func(KAnimatedButton* self, QPoint* pos)
void k_animatedbutton_on_hit_button(void* self, bool (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_check_state_set(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_qbase_check_state_set(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func()
void k_animatedbutton_on_check_state_set(void* self, void (*callback)());

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_next_check_state(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_qbase_next_check_state(void* self);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func()
void k_animatedbutton_on_next_check_state(void* self, void (*callback)());

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param option QStyleOptionToolButton*
void k_animatedbutton_init_style_option(void* self, void* option);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param option QStyleOptionToolButton*
void k_animatedbutton_qbase_init_style_option(void* self, void* option);

/// Inherited from QToolButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QStyleOptionToolButton* option)
void k_animatedbutton_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QKeyEvent*
void k_animatedbutton_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QKeyEvent*
void k_animatedbutton_qbase_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QKeyEvent* e)
void k_animatedbutton_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QKeyEvent*
void k_animatedbutton_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QKeyEvent*
void k_animatedbutton_qbase_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QKeyEvent* e)
void k_animatedbutton_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QMouseEvent*
void k_animatedbutton_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QMouseEvent*
void k_animatedbutton_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QMouseEvent* e)
void k_animatedbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QFocusEvent*
void k_animatedbutton_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QFocusEvent*
void k_animatedbutton_qbase_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QFocusEvent* e)
void k_animatedbutton_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QFocusEvent*
void k_animatedbutton_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param e QFocusEvent*
void k_animatedbutton_qbase_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QFocusEvent* e)
void k_animatedbutton_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback int32_t func()
void k_animatedbutton_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param visible bool
void k_animatedbutton_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param visible bool
void k_animatedbutton_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, bool visible)
void k_animatedbutton_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 int
int32_t k_animatedbutton_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 int
int32_t k_animatedbutton_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback int32_t func(KAnimatedButton* self, int param1)
void k_animatedbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
bool k_animatedbutton_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
bool k_animatedbutton_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func()
void k_animatedbutton_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
QPaintEngine* k_animatedbutton_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
QPaintEngine* k_animatedbutton_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback QPaintEngine* func()
void k_animatedbutton_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QMouseEvent*
void k_animatedbutton_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QMouseEvent*
void k_animatedbutton_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QMouseEvent* event)
void k_animatedbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QWheelEvent*
void k_animatedbutton_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QWheelEvent*
void k_animatedbutton_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QWheelEvent* event)
void k_animatedbutton_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QMoveEvent*
void k_animatedbutton_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QMoveEvent*
void k_animatedbutton_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QMoveEvent* event)
void k_animatedbutton_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QResizeEvent*
void k_animatedbutton_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QResizeEvent*
void k_animatedbutton_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QResizeEvent* event)
void k_animatedbutton_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QCloseEvent*
void k_animatedbutton_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QCloseEvent*
void k_animatedbutton_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QCloseEvent* event)
void k_animatedbutton_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QContextMenuEvent*
void k_animatedbutton_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QContextMenuEvent*
void k_animatedbutton_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QContextMenuEvent* event)
void k_animatedbutton_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QTabletEvent*
void k_animatedbutton_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QTabletEvent*
void k_animatedbutton_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QTabletEvent* event)
void k_animatedbutton_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDragEnterEvent*
void k_animatedbutton_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDragEnterEvent*
void k_animatedbutton_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QDragEnterEvent* event)
void k_animatedbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDragMoveEvent*
void k_animatedbutton_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDragMoveEvent*
void k_animatedbutton_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QDragMoveEvent* event)
void k_animatedbutton_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDragLeaveEvent*
void k_animatedbutton_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDragLeaveEvent*
void k_animatedbutton_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QDragLeaveEvent* event)
void k_animatedbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDropEvent*
void k_animatedbutton_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QDropEvent*
void k_animatedbutton_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QDropEvent* event)
void k_animatedbutton_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QShowEvent*
void k_animatedbutton_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QShowEvent*
void k_animatedbutton_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QShowEvent* event)
void k_animatedbutton_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QHideEvent*
void k_animatedbutton_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QHideEvent*
void k_animatedbutton_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QHideEvent* event)
void k_animatedbutton_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_animatedbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_animatedbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func(KAnimatedButton* self, const char* eventType, void* message, intptr_t* result)
void k_animatedbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_animatedbutton_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_animatedbutton_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback int32_t func(KAnimatedButton* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_animatedbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param painter QPainter*
void k_animatedbutton_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param painter QPainter*
void k_animatedbutton_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QPainter* painter)
void k_animatedbutton_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param offset QPoint*
QPaintDevice* k_animatedbutton_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param offset QPoint*
QPaintDevice* k_animatedbutton_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback QPaintDevice* func(KAnimatedButton* self, QPoint* offset)
void k_animatedbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
QPainter* k_animatedbutton_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
QPainter* k_animatedbutton_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback QPainter* func()
void k_animatedbutton_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QInputMethodEvent*
void k_animatedbutton_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 QInputMethodEvent*
void k_animatedbutton_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QInputMethodEvent* param1)
void k_animatedbutton_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_animatedbutton_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_animatedbutton_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback QVariant* func(KAnimatedButton* self, enum Qt__InputMethodQuery param1)
void k_animatedbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param next bool
bool k_animatedbutton_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param next bool
bool k_animatedbutton_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func(KAnimatedButton* self, bool next)
void k_animatedbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param watched QObject*
/// @param event QEvent*
bool k_animatedbutton_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param watched QObject*
/// @param event QEvent*
bool k_animatedbutton_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func(KAnimatedButton* self, QObject* watched, QEvent* event)
void k_animatedbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QChildEvent*
void k_animatedbutton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QChildEvent*
void k_animatedbutton_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QChildEvent* event)
void k_animatedbutton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QEvent*
void k_animatedbutton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param event QEvent*
void k_animatedbutton_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QEvent* event)
void k_animatedbutton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal QMetaMethod*
void k_animatedbutton_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal QMetaMethod*
void k_animatedbutton_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QMetaMethod* signal)
void k_animatedbutton_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal QMetaMethod*
void k_animatedbutton_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal QMetaMethod*
void k_animatedbutton_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, QMetaMethod* signal)
void k_animatedbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func()
void k_animatedbutton_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func()
void k_animatedbutton_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
void k_animatedbutton_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback void func()
void k_animatedbutton_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
bool k_animatedbutton_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
bool k_animatedbutton_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func()
void k_animatedbutton_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
bool k_animatedbutton_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
bool k_animatedbutton_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func()
void k_animatedbutton_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
QObject* k_animatedbutton_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
QObject* k_animatedbutton_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback QObject* func()
void k_animatedbutton_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
int32_t k_animatedbutton_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback int32_t func()
void k_animatedbutton_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal const char*
int32_t k_animatedbutton_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal const char*
int32_t k_animatedbutton_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback int32_t func(KAnimatedButton* self, const char* signal)
void k_animatedbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal QMetaMethod*
bool k_animatedbutton_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param signal QMetaMethod*
bool k_animatedbutton_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback bool func(KAnimatedButton* self, QMetaMethod* signal)
void k_animatedbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAnimatedButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_animatedbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_animatedbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAnimatedButton*
/// @param callback double func(KAnimatedButton* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_animatedbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KAnimatedButton*
/// @param callback void func(KAnimatedButton* self, const char* objectName)
void k_animatedbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kanimatedbutton.html#dtor.KAnimatedButton)
///
/// Delete this object from C++ memory.
///
/// @param self KAnimatedButton*
void k_animatedbutton_delete(void* self);

#endif
