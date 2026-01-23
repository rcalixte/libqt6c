#pragma once
#ifndef SRC_EXTRAS_KICONTHEMES_QT6C_LIBKICONBUTTON_H
#define SRC_EXTRAS_KICONTHEMES_QT6C_LIBKICONBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kiconbutton.html)

/// k_iconbutton_new constructs a new KIconButton object.
///
/// @param parent QWidget*
///
KIconButton* k_iconbutton_new(void* parent);

/// [Upstream resources](https://api.kde.org/kiconbutton.html)

/// k_iconbutton_new2 constructs a new KIconButton object.
///
KIconButton* k_iconbutton_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIconButton*
///
const QMetaObject* k_iconbutton_meta_object(void* self);

/// @param self KIconButton*
/// @param param1 const char*
///
void* k_iconbutton_metacast(void* self, const char* param1);

/// @param self KIconButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_iconbutton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIconButton*
/// @param callback int32_t func(KIconButton* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_iconbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIconButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_iconbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_iconbutton_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#setStrictIconSize)
///
/// @param self KIconButton*
/// @param b bool
///
void k_iconbutton_set_strict_icon_size(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#strictIconSize)
///
/// @param self KIconButton*
///
bool k_iconbutton_strict_icon_size(void* self);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#setIconType)
///
/// @param self KIconButton*
/// @param group enum KIconLoader__Group
/// @param context enum KIconLoader__Context
///
void k_iconbutton_set_icon_type(void* self, int32_t group, int32_t context);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#setIcon)
///
/// @param self KIconButton*
/// @param icon const char*
///
void k_iconbutton_set_icon(void* self, const char* icon);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#setIcon)
///
/// @param self KIconButton*
/// @param icon QIcon*
///
void k_iconbutton_set_icon2(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#resetIcon)
///
/// @param self KIconButton*
///
void k_iconbutton_reset_icon(void* self);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_icon(void* self);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#setIconSize)
///
/// @param self KIconButton*
/// @param size int
///
void k_iconbutton_set_icon_size(void* self, int size);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#iconSize)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_icon_size(void* self);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#setButtonIconSize)
///
/// @param self KIconButton*
/// @param size int
///
void k_iconbutton_set_button_icon_size(void* self, int size);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#buttonIconSize)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_button_icon_size(void* self);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#iconChanged)
///
/// @param self KIconButton*
/// @param icon const char*
///
void k_iconbutton_icon_changed(void* self, const char* icon);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#iconChanged)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, const char* icon)
///
void k_iconbutton_on_icon_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_iconbutton_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_iconbutton_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kiconbutton.html#setIconType)
///
/// @param self KIconButton*
/// @param group enum KIconLoader__Group
/// @param context enum KIconLoader__Context
/// @param user bool
///
void k_iconbutton_set_icon_type3(void* self, int32_t group, int32_t context, bool user);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#autoDefault)
///
/// @param self KIconButton*
///
bool k_iconbutton_auto_default(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setAutoDefault)
///
/// @param self KIconButton*
/// @param autoDefault bool
///
void k_iconbutton_set_auto_default(void* self, bool autoDefault);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isDefault)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_default(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setDefault)
///
/// @param self KIconButton*
/// @param defaultVal bool
///
void k_iconbutton_set_default(void* self, bool defaultVal);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setMenu)
///
/// @param self KIconButton*
/// @param menu QMenu*
///
void k_iconbutton_set_menu(void* self, void* menu);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#menu)
///
/// @param self KIconButton*
///
QMenu* k_iconbutton_menu(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setFlat)
///
/// @param self KIconButton*
/// @param flat bool
///
void k_iconbutton_set_flat(void* self, bool flat);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isFlat)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_flat(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#showMenu)
///
/// @param self KIconButton*
///
void k_iconbutton_show_menu(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// @param self KIconButton*
/// @param text const char*
///
void k_iconbutton_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_text(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// @param self KIconButton*
/// @param key QKeySequence*
///
void k_iconbutton_set_shortcut(void* self, void* key);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// @param self KIconButton*
///
QKeySequence* k_iconbutton_shortcut(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// @param self KIconButton*
/// @param checkable bool
///
void k_iconbutton_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_checkable(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_checked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// @param self KIconButton*
/// @param down bool
///
void k_iconbutton_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_down(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// @param self KIconButton*
/// @param autoRepeat bool
///
void k_iconbutton_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// @param self KIconButton*
///
bool k_iconbutton_auto_repeat(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// @param self KIconButton*
/// @param autoRepeatDelay int
///
void k_iconbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_auto_repeat_delay(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// @param self KIconButton*
/// @param autoRepeatInterval int
///
void k_iconbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_auto_repeat_interval(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// @param self KIconButton*
/// @param autoExclusive bool
///
void k_iconbutton_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// @param self KIconButton*
///
bool k_iconbutton_auto_exclusive(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// @param self KIconButton*
///
QButtonGroup* k_iconbutton_group(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// @param self KIconButton*
///
void k_iconbutton_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// @param self KIconButton*
///
void k_iconbutton_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// @param self KIconButton*
///
void k_iconbutton_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// @param self KIconButton*
/// @param checked bool
///
void k_iconbutton_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self KIconButton*
///
void k_iconbutton_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self)
///
void k_iconbutton_on_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self KIconButton*
///
void k_iconbutton_released(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self)
///
void k_iconbutton_on_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KIconButton*
///
void k_iconbutton_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self)
///
void k_iconbutton_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self KIconButton*
/// @param checked bool
///
void k_iconbutton_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, bool checked)
///
void k_iconbutton_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KIconButton*
/// @param checked bool
///
void k_iconbutton_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, bool checked)
///
void k_iconbutton_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KIconButton*
///
uintptr_t k_iconbutton_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KIconButton*
///
void k_iconbutton_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KIconButton*
///
uintptr_t k_iconbutton_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KIconButton*
///
uintptr_t k_iconbutton_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KIconButton*
///
QStyle* k_iconbutton_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KIconButton*
/// @param style QStyle*
///
void k_iconbutton_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KIconButton*
///
/// @return enum Qt__WindowModality
///
int32_t k_iconbutton_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KIconButton*
/// @param windowModality enum Qt__WindowModality
///
void k_iconbutton_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KIconButton*
/// @param param1 QWidget*
///
bool k_iconbutton_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KIconButton*
/// @param enabled bool
///
void k_iconbutton_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KIconButton*
/// @param disabled bool
///
void k_iconbutton_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KIconButton*
/// @param windowModified bool
///
void k_iconbutton_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KIconButton*
///
QRect* k_iconbutton_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KIconButton*
///
const QRect* k_iconbutton_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KIconButton*
///
QRect* k_iconbutton_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KIconButton*
///
QPoint* k_iconbutton_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KIconButton*
///
QSize* k_iconbutton_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KIconButton*
///
QSize* k_iconbutton_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KIconButton*
///
QRect* k_iconbutton_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KIconButton*
///
QRect* k_iconbutton_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KIconButton*
///
QRegion* k_iconbutton_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KIconButton*
///
QSize* k_iconbutton_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KIconButton*
///
QSize* k_iconbutton_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KIconButton*
/// @param minimumSize QSize*
///
void k_iconbutton_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KIconButton*
/// @param minw int
/// @param minh int
///
void k_iconbutton_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KIconButton*
/// @param maximumSize QSize*
///
void k_iconbutton_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KIconButton*
/// @param maxw int
/// @param maxh int
///
void k_iconbutton_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KIconButton*
/// @param minw int
///
void k_iconbutton_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KIconButton*
/// @param minh int
///
void k_iconbutton_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KIconButton*
/// @param maxw int
///
void k_iconbutton_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KIconButton*
/// @param maxh int
///
void k_iconbutton_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KIconButton*
///
QSize* k_iconbutton_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KIconButton*
/// @param sizeIncrement QSize*
///
void k_iconbutton_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KIconButton*
/// @param w int
/// @param h int
///
void k_iconbutton_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KIconButton*
///
QSize* k_iconbutton_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KIconButton*
/// @param baseSize QSize*
///
void k_iconbutton_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KIconButton*
/// @param basew int
/// @param baseh int
///
void k_iconbutton_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KIconButton*
/// @param fixedSize QSize*
///
void k_iconbutton_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KIconButton*
/// @param w int
/// @param h int
///
void k_iconbutton_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KIconButton*
/// @param w int
///
void k_iconbutton_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KIconButton*
/// @param h int
///
void k_iconbutton_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KIconButton*
/// @param param1 QPointF*
///
QPointF* k_iconbutton_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KIconButton*
/// @param param1 QPoint*
///
QPoint* k_iconbutton_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KIconButton*
/// @param param1 QPointF*
///
QPointF* k_iconbutton_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KIconButton*
/// @param param1 QPoint*
///
QPoint* k_iconbutton_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KIconButton*
/// @param param1 QPointF*
///
QPointF* k_iconbutton_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KIconButton*
/// @param param1 QPoint*
///
QPoint* k_iconbutton_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KIconButton*
/// @param param1 QPointF*
///
QPointF* k_iconbutton_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KIconButton*
/// @param param1 QPoint*
///
QPoint* k_iconbutton_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KIconButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_iconbutton_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KIconButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_iconbutton_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KIconButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_iconbutton_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KIconButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_iconbutton_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KIconButton*
///
const QPalette* k_iconbutton_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KIconButton*
/// @param palette QPalette*
///
void k_iconbutton_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KIconButton*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_iconbutton_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KIconButton*
///
/// @return enum QPalette__ColorRole
///
int32_t k_iconbutton_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KIconButton*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_iconbutton_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KIconButton*
///
/// @return enum QPalette__ColorRole
///
int32_t k_iconbutton_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KIconButton*
///
const QFont* k_iconbutton_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KIconButton*
/// @param font QFont*
///
void k_iconbutton_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KIconButton*
///
QFontMetrics* k_iconbutton_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KIconButton*
///
QFontInfo* k_iconbutton_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KIconButton*
///
QCursor* k_iconbutton_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KIconButton*
/// @param cursor QCursor*
///
void k_iconbutton_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KIconButton*
///
void k_iconbutton_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KIconButton*
/// @param enable bool
///
void k_iconbutton_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KIconButton*
///
bool k_iconbutton_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KIconButton*
///
bool k_iconbutton_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KIconButton*
/// @param enable bool
///
void k_iconbutton_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KIconButton*
///
bool k_iconbutton_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KIconButton*
/// @param mask QBitmap*
///
void k_iconbutton_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KIconButton*
/// @param mask QRegion*
///
void k_iconbutton_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KIconButton*
///
QRegion* k_iconbutton_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KIconButton*
///
void k_iconbutton_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param target QPaintDevice*
///
void k_iconbutton_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param painter QPainter*
///
void k_iconbutton_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KIconButton*
///
QPixmap* k_iconbutton_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KIconButton*
///
QGraphicsEffect* k_iconbutton_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KIconButton*
/// @param effect QGraphicsEffect*
///
void k_iconbutton_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KIconButton*
/// @param type enum Qt__GestureType
///
void k_iconbutton_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KIconButton*
/// @param type enum Qt__GestureType
///
void k_iconbutton_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KIconButton*
/// @param windowTitle const char*
///
void k_iconbutton_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KIconButton*
/// @param styleSheet const char*
///
void k_iconbutton_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KIconButton*
/// @param icon QIcon*
///
void k_iconbutton_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KIconButton*
///
QIcon* k_iconbutton_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KIconButton*
/// @param windowIconText const char*
///
void k_iconbutton_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KIconButton*
/// @param windowRole const char*
///
void k_iconbutton_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KIconButton*
/// @param filePath const char*
///
void k_iconbutton_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KIconButton*
/// @param level double
///
void k_iconbutton_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KIconButton*
///
double k_iconbutton_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KIconButton*
/// @param toolTip const char*
///
void k_iconbutton_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KIconButton*
/// @param msec int
///
void k_iconbutton_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KIconButton*
/// @param statusTip const char*
///
void k_iconbutton_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KIconButton*
/// @param whatsThis const char*
///
void k_iconbutton_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KIconButton*
/// @param name const char*
///
void k_iconbutton_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KIconButton*
/// @param description const char*
///
void k_iconbutton_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KIconButton*
/// @param direction enum Qt__LayoutDirection
///
void k_iconbutton_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KIconButton*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_iconbutton_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KIconButton*
///
void k_iconbutton_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KIconButton*
/// @param locale QLocale*
///
void k_iconbutton_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KIconButton*
///
QLocale* k_iconbutton_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KIconButton*
///
void k_iconbutton_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KIconButton*
///
void k_iconbutton_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KIconButton*
///
void k_iconbutton_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KIconButton*
///
void k_iconbutton_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KIconButton*
/// @param reason enum Qt__FocusReason
///
void k_iconbutton_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KIconButton*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_iconbutton_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KIconButton*
/// @param policy enum Qt__FocusPolicy
///
void k_iconbutton_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KIconButton*
///
bool k_iconbutton_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_iconbutton_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KIconButton*
/// @param focusProxy QWidget*
///
void k_iconbutton_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KIconButton*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_iconbutton_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KIconButton*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_iconbutton_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KIconButton*
///
void k_iconbutton_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KIconButton*
/// @param param1 QCursor*
///
void k_iconbutton_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KIconButton*
///
void k_iconbutton_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KIconButton*
///
void k_iconbutton_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KIconButton*
///
void k_iconbutton_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KIconButton*
/// @param key QKeySequence*
///
int32_t k_iconbutton_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KIconButton*
/// @param id int
///
void k_iconbutton_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KIconButton*
/// @param id int
///
void k_iconbutton_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KIconButton*
/// @param id int
///
void k_iconbutton_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_iconbutton_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_iconbutton_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KIconButton*
///
bool k_iconbutton_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KIconButton*
/// @param enable bool
///
void k_iconbutton_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KIconButton*
///
QGraphicsProxyWidget* k_iconbutton_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KIconButton*
///
void k_iconbutton_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KIconButton*
///
void k_iconbutton_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KIconButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_iconbutton_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KIconButton*
/// @param param1 QRect*
///
void k_iconbutton_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KIconButton*
/// @param param1 QRegion*
///
void k_iconbutton_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KIconButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_iconbutton_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KIconButton*
/// @param param1 QRect*
///
void k_iconbutton_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KIconButton*
/// @param param1 QRegion*
///
void k_iconbutton_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KIconButton*
/// @param hidden bool
///
void k_iconbutton_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KIconButton*
///
void k_iconbutton_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KIconButton*
///
void k_iconbutton_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KIconButton*
///
void k_iconbutton_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KIconButton*
///
void k_iconbutton_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KIconButton*
///
void k_iconbutton_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KIconButton*
///
void k_iconbutton_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KIconButton*
///
bool k_iconbutton_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KIconButton*
///
void k_iconbutton_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KIconButton*
///
void k_iconbutton_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KIconButton*
/// @param param1 QWidget*
///
void k_iconbutton_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KIconButton*
/// @param x int
/// @param y int
///
void k_iconbutton_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KIconButton*
/// @param param1 QPoint*
///
void k_iconbutton_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KIconButton*
/// @param w int
/// @param h int
///
void k_iconbutton_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KIconButton*
/// @param param1 QSize*
///
void k_iconbutton_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KIconButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_iconbutton_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KIconButton*
/// @param geometry QRect*
///
void k_iconbutton_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIconButton*
///
char* k_iconbutton_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KIconButton*
/// @param geometry const char*
///
bool k_iconbutton_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KIconButton*
///
void k_iconbutton_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KIconButton*
/// @param param1 QWidget*
///
bool k_iconbutton_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KIconButton*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_iconbutton_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KIconButton*
/// @param state flag of enum Qt__WindowState
///
void k_iconbutton_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KIconButton*
/// @param state flag of enum Qt__WindowState
///
void k_iconbutton_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KIconButton*
///
QSizePolicy* k_iconbutton_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KIconButton*
/// @param sizePolicy QSizePolicy*
///
void k_iconbutton_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KIconButton*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_iconbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KIconButton*
///
QRegion* k_iconbutton_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KIconButton*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_iconbutton_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KIconButton*
/// @param margins QMargins*
///
void k_iconbutton_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KIconButton*
///
QMargins* k_iconbutton_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KIconButton*
///
QRect* k_iconbutton_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KIconButton*
///
QLayout* k_iconbutton_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KIconButton*
/// @param layout QLayout*
///
void k_iconbutton_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KIconButton*
///
void k_iconbutton_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KIconButton*
/// @param parent QWidget*
///
void k_iconbutton_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KIconButton*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_iconbutton_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KIconButton*
/// @param dx int
/// @param dy int
///
void k_iconbutton_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KIconButton*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_iconbutton_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KIconButton*
///
bool k_iconbutton_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KIconButton*
/// @param on bool
///
void k_iconbutton_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KIconButton*
/// @param action QAction*
///
void k_iconbutton_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KIconButton*
/// @param actions libqt_list of QAction*
///
void k_iconbutton_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KIconButton*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_iconbutton_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KIconButton*
/// @param before QAction*
/// @param action QAction*
///
void k_iconbutton_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KIconButton*
/// @param action QAction*
///
void k_iconbutton_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KIconButton*
///
/// @return libqt_list of QAction*
///
libqt_list k_iconbutton_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KIconButton*
/// @param text const char*
///
QAction* k_iconbutton_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KIconButton*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_iconbutton_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KIconButton*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_iconbutton_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KIconButton*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_iconbutton_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KIconButton*
///
QWidget* k_iconbutton_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KIconButton*
/// @param type flag of enum Qt__WindowType
///
void k_iconbutton_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KIconButton*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_iconbutton_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KIconButton*
/// @param param1 enum Qt__WindowType
///
void k_iconbutton_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KIconButton*
/// @param type flag of enum Qt__WindowType
///
void k_iconbutton_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KIconButton*
///
/// @return enum Qt__WindowType
///
int32_t k_iconbutton_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_iconbutton_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KIconButton*
/// @param x int
/// @param y int
///
QWidget* k_iconbutton_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KIconButton*
/// @param p QPoint*
///
QWidget* k_iconbutton_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KIconButton*
/// @param p QPointF*
///
QWidget* k_iconbutton_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KIconButton*
/// @param param1 enum Qt__WidgetAttribute
///
void k_iconbutton_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KIconButton*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_iconbutton_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KIconButton*
///
void k_iconbutton_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KIconButton*
/// @param child QWidget*
///
bool k_iconbutton_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KIconButton*
///
bool k_iconbutton_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KIconButton*
/// @param enabled bool
///
void k_iconbutton_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KIconButton*
///
QBackingStore* k_iconbutton_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KIconButton*
///
QWindow* k_iconbutton_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KIconButton*
///
QScreen* k_iconbutton_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KIconButton*
/// @param screen QScreen*
///
void k_iconbutton_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_iconbutton_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KIconButton*
/// @param title const char*
///
void k_iconbutton_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, const char* title)
///
void k_iconbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KIconButton*
/// @param icon QIcon*
///
void k_iconbutton_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QIcon* icon)
///
void k_iconbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KIconButton*
/// @param iconText const char*
///
void k_iconbutton_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, const char* iconText)
///
void k_iconbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KIconButton*
/// @param pos QPoint*
///
void k_iconbutton_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QPoint* pos)
///
void k_iconbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KIconButton*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_iconbutton_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KIconButton*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_iconbutton_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_iconbutton_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_iconbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_iconbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_iconbutton_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_iconbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KIconButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_iconbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KIconButton*
/// @param rectangle QRect*
///
QPixmap* k_iconbutton_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KIconButton*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_iconbutton_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KIconButton*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_iconbutton_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KIconButton*
/// @param id int
/// @param enable bool
///
void k_iconbutton_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KIconButton*
/// @param id int
/// @param enable bool
///
void k_iconbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KIconButton*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_iconbutton_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KIconButton*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_iconbutton_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_iconbutton_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_iconbutton_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconButton*
///
const char* k_iconbutton_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIconButton*
/// @param name char*
///
void k_iconbutton_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIconButton*
///
bool k_iconbutton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIconButton*
///
bool k_iconbutton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIconButton*
/// @param b bool
///
bool k_iconbutton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIconButton*
///
QThread* k_iconbutton_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIconButton*
/// @param thread QThread*
///
bool k_iconbutton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIconButton*
/// @param interval int
///
int32_t k_iconbutton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIconButton*
/// @param time int64_t of nanoseconds
///
int32_t k_iconbutton_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIconButton*
/// @param id int
///
void k_iconbutton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIconButton*
/// @param id enum Qt__TimerId
///
void k_iconbutton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIconButton*
///
/// @return libqt_list of QObject*
///
libqt_list k_iconbutton_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIconButton*
/// @param filterObj QObject*
///
void k_iconbutton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIconButton*
/// @param obj QObject*
///
void k_iconbutton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_iconbutton_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIconButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_iconbutton_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_iconbutton_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_iconbutton_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIconButton*
///
void k_iconbutton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIconButton*
///
void k_iconbutton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIconButton*
/// @param name const char*
/// @param value QVariant*
///
bool k_iconbutton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIconButton*
/// @param name const char*
///
QVariant* k_iconbutton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIconButton*
///
const char** k_iconbutton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIconButton*
///
QBindingStorage* k_iconbutton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIconButton*
///
const QBindingStorage* k_iconbutton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconButton*
///
void k_iconbutton_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self)
///
void k_iconbutton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIconButton*
///
QObject* k_iconbutton_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIconButton*
/// @param classname const char*
///
bool k_iconbutton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIconButton*
///
void k_iconbutton_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIconButton*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_iconbutton_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIconButton*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_iconbutton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIconButton*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_iconbutton_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_iconbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIconButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_iconbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconButton*
/// @param param1 QObject*
///
void k_iconbutton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QObject* param1)
///
void k_iconbutton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KIconButton*
///
bool k_iconbutton_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KIconButton*
///
double k_iconbutton_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KIconButton*
///
double k_iconbutton_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KIconButton*
///
int32_t k_iconbutton_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_iconbutton_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_iconbutton_encode_metric_f(int32_t metric, double value);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
QSize* k_iconbutton_size_hint(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
QSize* k_iconbutton_qbase_size_hint(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback QSize* func()
///
void k_iconbutton_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
QSize* k_iconbutton_minimum_size_hint(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
QSize* k_iconbutton_qbase_minimum_size_hint(void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback QSize* func()
///
void k_iconbutton_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param e QEvent*
///
bool k_iconbutton_event(void* self, void* e);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param e QEvent*
///
bool k_iconbutton_qbase_event(void* self, void* e);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func(KIconButton* self, QEvent* e)
///
void k_iconbutton_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QPaintEvent*
///
void k_iconbutton_paint_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QPaintEvent*
///
void k_iconbutton_qbase_paint_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QPaintEvent* param1)
///
void k_iconbutton_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QKeyEvent*
///
void k_iconbutton_key_press_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QKeyEvent*
///
void k_iconbutton_qbase_key_press_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QKeyEvent* param1)
///
void k_iconbutton_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QFocusEvent*
///
void k_iconbutton_focus_in_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QFocusEvent*
///
void k_iconbutton_qbase_focus_in_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QFocusEvent* param1)
///
void k_iconbutton_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QFocusEvent*
///
void k_iconbutton_focus_out_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QFocusEvent*
///
void k_iconbutton_qbase_focus_out_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QFocusEvent* param1)
///
void k_iconbutton_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QMouseEvent*
///
void k_iconbutton_mouse_move_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QMouseEvent*
///
void k_iconbutton_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QMouseEvent* param1)
///
void k_iconbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param option QStyleOptionButton*
///
void k_iconbutton_init_style_option(void* self, void* option);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param option QStyleOptionButton*
///
void k_iconbutton_qbase_init_style_option(void* self, void* option);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QStyleOptionButton* option)
///
void k_iconbutton_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param pos QPoint*
///
bool k_iconbutton_hit_button(void* self, void* pos);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param pos QPoint*
///
bool k_iconbutton_qbase_hit_button(void* self, void* pos);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func(KIconButton* self, QPoint* pos)
///
void k_iconbutton_on_hit_button(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_qbase_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func()
///
void k_iconbutton_on_check_state_set(void* self, void (*callback)());

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_qbase_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func()
///
void k_iconbutton_on_next_check_state(void* self, void (*callback)());

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param e QKeyEvent*
///
void k_iconbutton_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param e QKeyEvent*
///
void k_iconbutton_qbase_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QKeyEvent* e)
///
void k_iconbutton_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param e QMouseEvent*
///
void k_iconbutton_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param e QMouseEvent*
///
void k_iconbutton_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QMouseEvent* e)
///
void k_iconbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param e QMouseEvent*
///
void k_iconbutton_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param e QMouseEvent*
///
void k_iconbutton_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QMouseEvent* e)
///
void k_iconbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param e QEvent*
///
void k_iconbutton_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param e QEvent*
///
void k_iconbutton_qbase_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QEvent* e)
///
void k_iconbutton_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param e QTimerEvent*
///
void k_iconbutton_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param e QTimerEvent*
///
void k_iconbutton_qbase_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QTimerEvent* e)
///
void k_iconbutton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
int32_t k_iconbutton_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
int32_t k_iconbutton_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback int32_t func()
///
void k_iconbutton_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param visible bool
///
void k_iconbutton_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param visible bool
///
void k_iconbutton_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, bool visible)
///
void k_iconbutton_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 int
///
int32_t k_iconbutton_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 int
///
int32_t k_iconbutton_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback int32_t func(KIconButton* self, int param1)
///
void k_iconbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
bool k_iconbutton_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
bool k_iconbutton_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func()
///
void k_iconbutton_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
QPaintEngine* k_iconbutton_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
QPaintEngine* k_iconbutton_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback QPaintEngine* func()
///
void k_iconbutton_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QMouseEvent*
///
void k_iconbutton_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QMouseEvent*
///
void k_iconbutton_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QMouseEvent* event)
///
void k_iconbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QWheelEvent*
///
void k_iconbutton_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QWheelEvent*
///
void k_iconbutton_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QWheelEvent* event)
///
void k_iconbutton_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QEnterEvent*
///
void k_iconbutton_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QEnterEvent*
///
void k_iconbutton_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QEnterEvent* event)
///
void k_iconbutton_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QEvent*
///
void k_iconbutton_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QEvent*
///
void k_iconbutton_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QEvent* event)
///
void k_iconbutton_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QMoveEvent*
///
void k_iconbutton_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QMoveEvent*
///
void k_iconbutton_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QMoveEvent* event)
///
void k_iconbutton_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QResizeEvent*
///
void k_iconbutton_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QResizeEvent*
///
void k_iconbutton_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QResizeEvent* event)
///
void k_iconbutton_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QCloseEvent*
///
void k_iconbutton_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QCloseEvent*
///
void k_iconbutton_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QCloseEvent* event)
///
void k_iconbutton_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QContextMenuEvent*
///
void k_iconbutton_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QContextMenuEvent*
///
void k_iconbutton_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QContextMenuEvent* event)
///
void k_iconbutton_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QTabletEvent*
///
void k_iconbutton_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QTabletEvent*
///
void k_iconbutton_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QTabletEvent* event)
///
void k_iconbutton_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QActionEvent*
///
void k_iconbutton_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QActionEvent*
///
void k_iconbutton_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QActionEvent* event)
///
void k_iconbutton_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QDragEnterEvent*
///
void k_iconbutton_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QDragEnterEvent*
///
void k_iconbutton_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QDragEnterEvent* event)
///
void k_iconbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QDragMoveEvent*
///
void k_iconbutton_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QDragMoveEvent*
///
void k_iconbutton_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QDragMoveEvent* event)
///
void k_iconbutton_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QDragLeaveEvent*
///
void k_iconbutton_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QDragLeaveEvent*
///
void k_iconbutton_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QDragLeaveEvent* event)
///
void k_iconbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QDropEvent*
///
void k_iconbutton_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QDropEvent*
///
void k_iconbutton_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QDropEvent* event)
///
void k_iconbutton_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QShowEvent*
///
void k_iconbutton_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QShowEvent*
///
void k_iconbutton_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QShowEvent* event)
///
void k_iconbutton_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QHideEvent*
///
void k_iconbutton_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QHideEvent*
///
void k_iconbutton_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QHideEvent* event)
///
void k_iconbutton_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_iconbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_iconbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func(KIconButton* self, const char* eventType, void* message, intptr_t* result)
///
void k_iconbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_iconbutton_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_iconbutton_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback int32_t func(KIconButton* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_iconbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param painter QPainter*
///
void k_iconbutton_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param painter QPainter*
///
void k_iconbutton_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QPainter* painter)
///
void k_iconbutton_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param offset QPoint*
///
QPaintDevice* k_iconbutton_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param offset QPoint*
///
QPaintDevice* k_iconbutton_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback QPaintDevice* func(KIconButton* self, QPoint* offset)
///
void k_iconbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
QPainter* k_iconbutton_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
QPainter* k_iconbutton_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback QPainter* func()
///
void k_iconbutton_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QInputMethodEvent*
///
void k_iconbutton_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 QInputMethodEvent*
///
void k_iconbutton_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QInputMethodEvent* param1)
///
void k_iconbutton_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_iconbutton_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_iconbutton_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback QVariant* func(KIconButton* self, enum Qt__InputMethodQuery param1)
///
void k_iconbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param next bool
///
bool k_iconbutton_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param next bool
///
bool k_iconbutton_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func(KIconButton* self, bool next)
///
void k_iconbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_iconbutton_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_iconbutton_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func(KIconButton* self, QObject* watched, QEvent* event)
///
void k_iconbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QChildEvent*
///
void k_iconbutton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QChildEvent*
///
void k_iconbutton_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QChildEvent* event)
///
void k_iconbutton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param event QEvent*
///
void k_iconbutton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param event QEvent*
///
void k_iconbutton_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QEvent* event)
///
void k_iconbutton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param signal QMetaMethod*
///
void k_iconbutton_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param signal QMetaMethod*
///
void k_iconbutton_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QMetaMethod* signal)
///
void k_iconbutton_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param signal QMetaMethod*
///
void k_iconbutton_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param signal QMetaMethod*
///
void k_iconbutton_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, QMetaMethod* signal)
///
void k_iconbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func()
///
void k_iconbutton_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func()
///
void k_iconbutton_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
void k_iconbutton_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback void func()
///
void k_iconbutton_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
bool k_iconbutton_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
bool k_iconbutton_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func()
///
void k_iconbutton_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
bool k_iconbutton_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
bool k_iconbutton_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func()
///
void k_iconbutton_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
QObject* k_iconbutton_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
QObject* k_iconbutton_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback QObject* func()
///
void k_iconbutton_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
///
int32_t k_iconbutton_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
///
int32_t k_iconbutton_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback int32_t func()
///
void k_iconbutton_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param signal const char*
///
int32_t k_iconbutton_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param signal const char*
///
int32_t k_iconbutton_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback int32_t func(KIconButton* self, const char* signal)
///
void k_iconbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param signal QMetaMethod*
///
bool k_iconbutton_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param signal QMetaMethod*
///
bool k_iconbutton_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback bool func(KIconButton* self, QMetaMethod* signal)
///
void k_iconbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_iconbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_iconbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconButton*
/// @param callback double func(KIconButton* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_iconbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIconButton*
/// @param callback void func(KIconButton* self, const char* objectName)
///
void k_iconbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kiconbutton.html#dtor.KIconButton)
///
/// Delete this object from C++ memory.
///
/// @param self KIconButton*
///
void k_iconbutton_delete(void* self);

#endif
