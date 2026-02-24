#pragma once
#ifndef SRC_QT6C_LIBQGROUPBOX_H
#define SRC_QT6C_LIBQGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html)

/// q_groupbox_new constructs a new QGroupBox object.
///
/// @param parent QWidget*
///
QGroupBox* q_groupbox_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html)

/// q_groupbox_new2 constructs a new QGroupBox object.
///
QGroupBox* q_groupbox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html)

/// q_groupbox_new3 constructs a new QGroupBox object.
///
/// @param title const char*
///
QGroupBox* q_groupbox_new3(const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html)

/// q_groupbox_new4 constructs a new QGroupBox object.
///
/// @param title const char*
/// @param parent QWidget*
///
QGroupBox* q_groupbox_new4(const char* title, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGroupBox*
///
const QMetaObject* q_groupbox_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback const QMetaObject* func()
///
void q_groupbox_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_groupbox_super_meta_object` instead
///
#define q_groupbox_qbase_meta_object q_groupbox_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGroupBox*
///
const QMetaObject* q_groupbox_super_meta_object(void* self);

/// @param self QGroupBox*
/// @param param1 const char*
///
void* q_groupbox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void* func(QGroupBox* self, const char* param1)
///
void q_groupbox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_groupbox_super_metacast` instead
///
#define q_groupbox_qbase_metacast q_groupbox_super_metacast

/// Base class method implementation
///
/// @param self QGroupBox*
/// @param param1 const char*
///
void* q_groupbox_super_metacast(void* self, const char* param1);

/// @param self QGroupBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_groupbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback int32_t func(QGroupBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_groupbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_metacall` instead
///
#define q_groupbox_qbase_metacall q_groupbox_super_metacall

/// Base class method implementation
///
/// @param self QGroupBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_groupbox_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_groupbox_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#setTitle)
///
/// @param self QGroupBox*
/// @param title const char*
///
void q_groupbox_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#alignment)
///
/// @param self QGroupBox*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_groupbox_alignment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#setAlignment)
///
/// @param self QGroupBox*
/// @param alignment int
///
void q_groupbox_set_alignment(void* self, int alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#minimumSizeHint)
///
/// @param self QGroupBox*
///
QSize* q_groupbox_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback QSize* func()
///
void q_groupbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// @warning DEPRECATED: Use `q_groupbox_super_minimum_size_hint` instead
///
#define q_groupbox_qbase_minimum_size_hint q_groupbox_super_minimum_size_hint

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QGroupBox*
///
QSize* q_groupbox_super_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#isFlat)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_flat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#setFlat)
///
/// @param self QGroupBox*
/// @param flat bool
///
void q_groupbox_set_flat(void* self, bool flat);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#isCheckable)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_checkable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#setCheckable)
///
/// @param self QGroupBox*
/// @param checkable bool
///
void q_groupbox_set_checkable(void* self, bool checkable);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#isChecked)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_checked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#setChecked)
///
/// @param self QGroupBox*
/// @param checked bool
///
void q_groupbox_set_checked(void* self, bool checked);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// @param self QGroupBox*
///
void q_groupbox_clicked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self)
///
void q_groupbox_on_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#toggled)
///
/// @param self QGroupBox*
/// @param param1 bool
///
void q_groupbox_toggled(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#toggled)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, bool param1)
///
void q_groupbox_on_toggled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#event)
///
/// @param self QGroupBox*
/// @param event QEvent*
///
bool q_groupbox_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback bool func(QGroupBox* self, QEvent* event)
///
void q_groupbox_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_event` instead
///
#define q_groupbox_qbase_event q_groupbox_super_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#event)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QEvent*
///
bool q_groupbox_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#childEvent)
///
/// @param self QGroupBox*
/// @param event QChildEvent*
///
void q_groupbox_child_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#childEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QChildEvent* event)
///
void q_groupbox_on_child_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_child_event` instead
///
#define q_groupbox_qbase_child_event q_groupbox_super_child_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#childEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QChildEvent*
///
void q_groupbox_super_child_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#resizeEvent)
///
/// @param self QGroupBox*
/// @param event QResizeEvent*
///
void q_groupbox_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QResizeEvent* event)
///
void q_groupbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_resize_event` instead
///
#define q_groupbox_qbase_resize_event q_groupbox_super_resize_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QResizeEvent*
///
void q_groupbox_super_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#paintEvent)
///
/// @param self QGroupBox*
/// @param event QPaintEvent*
///
void q_groupbox_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QPaintEvent* event)
///
void q_groupbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_paint_event` instead
///
#define q_groupbox_qbase_paint_event q_groupbox_super_paint_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QPaintEvent*
///
void q_groupbox_super_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#focusInEvent)
///
/// @param self QGroupBox*
/// @param event QFocusEvent*
///
void q_groupbox_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QFocusEvent* event)
///
void q_groupbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_focus_in_event` instead
///
#define q_groupbox_qbase_focus_in_event q_groupbox_super_focus_in_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QFocusEvent*
///
void q_groupbox_super_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#changeEvent)
///
/// @param self QGroupBox*
/// @param event QEvent*
///
void q_groupbox_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QEvent* event)
///
void q_groupbox_on_change_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_change_event` instead
///
#define q_groupbox_qbase_change_event q_groupbox_super_change_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QEvent*
///
void q_groupbox_super_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mousePressEvent)
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QMouseEvent* event)
///
void q_groupbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_mouse_press_event` instead
///
#define q_groupbox_qbase_mouse_press_event q_groupbox_super_mouse_press_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_super_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mouseMoveEvent)
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QMouseEvent* event)
///
void q_groupbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_mouse_move_event` instead
///
#define q_groupbox_qbase_mouse_move_event q_groupbox_super_mouse_move_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_super_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mouseReleaseEvent)
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QMouseEvent* event)
///
void q_groupbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_mouse_release_event` instead
///
#define q_groupbox_qbase_mouse_release_event q_groupbox_super_mouse_release_event

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_super_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#initStyleOption)
///
/// @param self QGroupBox*
/// @param option QStyleOptionGroupBox*
///
void q_groupbox_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QStyleOptionGroupBox* option)
///
void q_groupbox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_groupbox_super_init_style_option` instead
///
#define q_groupbox_qbase_init_style_option q_groupbox_super_init_style_option

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QGroupBox*
/// @param option QStyleOptionGroupBox*
///
void q_groupbox_super_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_groupbox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_groupbox_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// @param self QGroupBox*
/// @param checked bool
///
void q_groupbox_clicked1(void* self, bool checked);

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, bool checked)
///
void q_groupbox_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QGroupBox*
///
uintptr_t q_groupbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QGroupBox*
///
void q_groupbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QGroupBox*
///
uintptr_t q_groupbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QGroupBox*
///
uintptr_t q_groupbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QGroupBox*
///
QStyle* q_groupbox_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QGroupBox*
/// @param style QStyle*
///
void q_groupbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QGroupBox*
///
/// @return enum Qt__WindowModality
///
int32_t q_groupbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QGroupBox*
/// @param windowModality enum Qt__WindowModality
///
void q_groupbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QGroupBox*
/// @param param1 QWidget*
///
bool q_groupbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QGroupBox*
/// @param enabled bool
///
void q_groupbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QGroupBox*
/// @param disabled bool
///
void q_groupbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QGroupBox*
/// @param windowModified bool
///
void q_groupbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QGroupBox*
///
QRect* q_groupbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QGroupBox*
///
const QRect* q_groupbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QGroupBox*
///
QRect* q_groupbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QGroupBox*
///
QPoint* q_groupbox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QGroupBox*
///
QSize* q_groupbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QGroupBox*
///
QSize* q_groupbox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QGroupBox*
///
QRect* q_groupbox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QGroupBox*
///
QRect* q_groupbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QGroupBox*
///
QRegion* q_groupbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QGroupBox*
///
QSize* q_groupbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QGroupBox*
///
QSize* q_groupbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QGroupBox*
/// @param minimumSize QSize*
///
void q_groupbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QGroupBox*
/// @param minw int
/// @param minh int
///
void q_groupbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QGroupBox*
/// @param maximumSize QSize*
///
void q_groupbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QGroupBox*
/// @param maxw int
/// @param maxh int
///
void q_groupbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QGroupBox*
/// @param minw int
///
void q_groupbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QGroupBox*
/// @param minh int
///
void q_groupbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QGroupBox*
/// @param maxw int
///
void q_groupbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QGroupBox*
/// @param maxh int
///
void q_groupbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QGroupBox*
///
QSize* q_groupbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QGroupBox*
/// @param sizeIncrement QSize*
///
void q_groupbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QGroupBox*
/// @param w int
/// @param h int
///
void q_groupbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QGroupBox*
///
QSize* q_groupbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QGroupBox*
/// @param baseSize QSize*
///
void q_groupbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QGroupBox*
/// @param basew int
/// @param baseh int
///
void q_groupbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QGroupBox*
/// @param fixedSize QSize*
///
void q_groupbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QGroupBox*
/// @param w int
/// @param h int
///
void q_groupbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QGroupBox*
/// @param w int
///
void q_groupbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QGroupBox*
/// @param h int
///
void q_groupbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QGroupBox*
/// @param param1 QPointF*
///
QPointF* q_groupbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QGroupBox*
/// @param param1 QPoint*
///
QPoint* q_groupbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QGroupBox*
/// @param param1 QPointF*
///
QPointF* q_groupbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QGroupBox*
/// @param param1 QPoint*
///
QPoint* q_groupbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QGroupBox*
/// @param param1 QPointF*
///
QPointF* q_groupbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QGroupBox*
/// @param param1 QPoint*
///
QPoint* q_groupbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QGroupBox*
/// @param param1 QPointF*
///
QPointF* q_groupbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QGroupBox*
/// @param param1 QPoint*
///
QPoint* q_groupbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QGroupBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_groupbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QGroupBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_groupbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QGroupBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_groupbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QGroupBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_groupbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QGroupBox*
///
const QPalette* q_groupbox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QGroupBox*
/// @param palette QPalette*
///
void q_groupbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QGroupBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_groupbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QGroupBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_groupbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QGroupBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_groupbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QGroupBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_groupbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QGroupBox*
///
const QFont* q_groupbox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QGroupBox*
/// @param font QFont*
///
void q_groupbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QGroupBox*
///
QFontMetrics* q_groupbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QGroupBox*
///
QFontInfo* q_groupbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QGroupBox*
///
QCursor* q_groupbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QGroupBox*
/// @param cursor QCursor*
///
void q_groupbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QGroupBox*
///
void q_groupbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QGroupBox*
/// @param enable bool
///
void q_groupbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QGroupBox*
///
bool q_groupbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QGroupBox*
///
bool q_groupbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QGroupBox*
/// @param enable bool
///
void q_groupbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QGroupBox*
///
bool q_groupbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QGroupBox*
/// @param mask QBitmap*
///
void q_groupbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QGroupBox*
/// @param mask QRegion*
///
void q_groupbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QGroupBox*
///
QRegion* q_groupbox_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QGroupBox*
///
void q_groupbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param target QPaintDevice*
///
void q_groupbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param painter QPainter*
///
void q_groupbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QGroupBox*
///
QPixmap* q_groupbox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QGroupBox*
///
QGraphicsEffect* q_groupbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QGroupBox*
/// @param effect QGraphicsEffect*
///
void q_groupbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QGroupBox*
/// @param type enum Qt__GestureType
///
void q_groupbox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QGroupBox*
/// @param type enum Qt__GestureType
///
void q_groupbox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QGroupBox*
/// @param windowTitle const char*
///
void q_groupbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QGroupBox*
/// @param styleSheet const char*
///
void q_groupbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QGroupBox*
/// @param icon QIcon*
///
void q_groupbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QGroupBox*
///
QIcon* q_groupbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QGroupBox*
/// @param windowIconText const char*
///
void q_groupbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QGroupBox*
/// @param windowRole const char*
///
void q_groupbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QGroupBox*
/// @param filePath const char*
///
void q_groupbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QGroupBox*
/// @param level double
///
void q_groupbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QGroupBox*
///
double q_groupbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QGroupBox*
/// @param toolTip const char*
///
void q_groupbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QGroupBox*
/// @param msec int
///
void q_groupbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QGroupBox*
/// @param statusTip const char*
///
void q_groupbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QGroupBox*
/// @param whatsThis const char*
///
void q_groupbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QGroupBox*
/// @param name const char*
///
void q_groupbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QGroupBox*
/// @param description const char*
///
void q_groupbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QGroupBox*
/// @param direction enum Qt__LayoutDirection
///
void q_groupbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QGroupBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_groupbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QGroupBox*
///
void q_groupbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QGroupBox*
/// @param locale QLocale*
///
void q_groupbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QGroupBox*
///
QLocale* q_groupbox_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QGroupBox*
///
void q_groupbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QGroupBox*
///
void q_groupbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QGroupBox*
///
void q_groupbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QGroupBox*
///
void q_groupbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QGroupBox*
/// @param reason enum Qt__FocusReason
///
void q_groupbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QGroupBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_groupbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QGroupBox*
/// @param policy enum Qt__FocusPolicy
///
void q_groupbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QGroupBox*
///
bool q_groupbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_groupbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QGroupBox*
/// @param focusProxy QWidget*
///
void q_groupbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QGroupBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_groupbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QGroupBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_groupbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QGroupBox*
///
void q_groupbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QGroupBox*
/// @param param1 QCursor*
///
void q_groupbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QGroupBox*
///
void q_groupbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QGroupBox*
///
void q_groupbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QGroupBox*
///
void q_groupbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QGroupBox*
/// @param key QKeySequence*
///
int32_t q_groupbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QGroupBox*
/// @param id int
///
void q_groupbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QGroupBox*
/// @param id int
///
void q_groupbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QGroupBox*
/// @param id int
///
void q_groupbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_groupbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_groupbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QGroupBox*
///
bool q_groupbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QGroupBox*
/// @param enable bool
///
void q_groupbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QGroupBox*
///
QGraphicsProxyWidget* q_groupbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGroupBox*
///
void q_groupbox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGroupBox*
///
void q_groupbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGroupBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_groupbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGroupBox*
/// @param param1 QRect*
///
void q_groupbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGroupBox*
/// @param param1 QRegion*
///
void q_groupbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGroupBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_groupbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGroupBox*
/// @param param1 QRect*
///
void q_groupbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGroupBox*
/// @param param1 QRegion*
///
void q_groupbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QGroupBox*
/// @param hidden bool
///
void q_groupbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QGroupBox*
///
void q_groupbox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QGroupBox*
///
void q_groupbox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QGroupBox*
///
void q_groupbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QGroupBox*
///
void q_groupbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QGroupBox*
///
void q_groupbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QGroupBox*
///
void q_groupbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QGroupBox*
///
bool q_groupbox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QGroupBox*
///
void q_groupbox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QGroupBox*
///
void q_groupbox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QGroupBox*
/// @param param1 QWidget*
///
void q_groupbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QGroupBox*
/// @param x int
/// @param y int
///
void q_groupbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QGroupBox*
/// @param param1 QPoint*
///
void q_groupbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QGroupBox*
/// @param w int
/// @param h int
///
void q_groupbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QGroupBox*
/// @param param1 QSize*
///
void q_groupbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QGroupBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_groupbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QGroupBox*
/// @param geometry QRect*
///
void q_groupbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGroupBox*
///
char* q_groupbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QGroupBox*
/// @param geometry char*
///
bool q_groupbox_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QGroupBox*
///
void q_groupbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QGroupBox*
/// @param param1 QWidget*
///
bool q_groupbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QGroupBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_groupbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QGroupBox*
/// @param state flag of enum Qt__WindowState
///
void q_groupbox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QGroupBox*
/// @param state flag of enum Qt__WindowState
///
void q_groupbox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QGroupBox*
///
QSizePolicy* q_groupbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QGroupBox*
/// @param sizePolicy QSizePolicy*
///
void q_groupbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QGroupBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_groupbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QGroupBox*
///
QRegion* q_groupbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QGroupBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_groupbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QGroupBox*
/// @param margins QMargins*
///
void q_groupbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QGroupBox*
///
QMargins* q_groupbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QGroupBox*
///
QRect* q_groupbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QGroupBox*
///
QLayout* q_groupbox_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QGroupBox*
/// @param layout QLayout*
///
void q_groupbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QGroupBox*
///
void q_groupbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QGroupBox*
/// @param parent QWidget*
///
void q_groupbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QGroupBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_groupbox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QGroupBox*
/// @param dx int
/// @param dy int
///
void q_groupbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QGroupBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_groupbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QGroupBox*
///
bool q_groupbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QGroupBox*
/// @param on bool
///
void q_groupbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGroupBox*
/// @param action QAction*
///
void q_groupbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QGroupBox*
/// @param actions libqt_list of QAction*
///
void q_groupbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QGroupBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_groupbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QGroupBox*
/// @param before QAction*
/// @param action QAction*
///
void q_groupbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QGroupBox*
/// @param action QAction*
///
void q_groupbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QGroupBox*
///
/// @return libqt_list of QAction*
///
libqt_list q_groupbox_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGroupBox*
/// @param text const char*
///
QAction* q_groupbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGroupBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_groupbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGroupBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_groupbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGroupBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_groupbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QGroupBox*
///
QWidget* q_groupbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QGroupBox*
/// @param type flag of enum Qt__WindowType
///
void q_groupbox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QGroupBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_groupbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QGroupBox*
/// @param param1 enum Qt__WindowType
///
void q_groupbox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QGroupBox*
/// @param type flag of enum Qt__WindowType
///
void q_groupbox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QGroupBox*
///
/// @return enum Qt__WindowType
///
int32_t q_groupbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_groupbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QGroupBox*
/// @param x int
/// @param y int
///
QWidget* q_groupbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QGroupBox*
/// @param p QPoint*
///
QWidget* q_groupbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QGroupBox*
/// @param p QPointF*
///
QWidget* q_groupbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QGroupBox*
/// @param param1 enum Qt__WidgetAttribute
///
void q_groupbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QGroupBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_groupbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QGroupBox*
///
void q_groupbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QGroupBox*
/// @param child QWidget*
///
bool q_groupbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QGroupBox*
///
bool q_groupbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QGroupBox*
/// @param enabled bool
///
void q_groupbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QGroupBox*
///
QBackingStore* q_groupbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QGroupBox*
///
QWindow* q_groupbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QGroupBox*
///
QScreen* q_groupbox_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QGroupBox*
/// @param screen QScreen*
///
void q_groupbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_groupbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QGroupBox*
/// @param title const char*
///
void q_groupbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, const char* title)
///
void q_groupbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QGroupBox*
/// @param icon QIcon*
///
void q_groupbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QIcon* icon)
///
void q_groupbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QGroupBox*
/// @param iconText const char*
///
void q_groupbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, const char* iconText)
///
void q_groupbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QGroupBox*
/// @param pos QPoint*
///
void q_groupbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QPoint* pos)
///
void q_groupbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QGroupBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_groupbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QGroupBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_groupbox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_groupbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_groupbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_groupbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_groupbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_groupbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGroupBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_groupbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QGroupBox*
/// @param rectangle QRect*
///
QPixmap* q_groupbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QGroupBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_groupbox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QGroupBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_groupbox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QGroupBox*
/// @param id int
/// @param enable bool
///
void q_groupbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QGroupBox*
/// @param id int
/// @param enable bool
///
void q_groupbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QGroupBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_groupbox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QGroupBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_groupbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_groupbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_groupbox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGroupBox*
///
const char* q_groupbox_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGroupBox*
/// @param name const char*
///
void q_groupbox_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGroupBox*
///
bool q_groupbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGroupBox*
///
bool q_groupbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGroupBox*
/// @param b bool
///
bool q_groupbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGroupBox*
///
QThread* q_groupbox_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGroupBox*
/// @param thread QThread*
///
bool q_groupbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGroupBox*
/// @param interval int
///
int32_t q_groupbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGroupBox*
/// @param time int64_t of nanoseconds
///
int32_t q_groupbox_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGroupBox*
/// @param id int
///
void q_groupbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGroupBox*
/// @param id enum Qt__TimerId
///
void q_groupbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGroupBox*
///
/// @return libqt_list of QObject*
///
libqt_list q_groupbox_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGroupBox*
/// @param filterObj QObject*
///
void q_groupbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGroupBox*
/// @param obj QObject*
///
void q_groupbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_groupbox_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_groupbox_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGroupBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_groupbox_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_groupbox_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_groupbox_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGroupBox*
///
bool q_groupbox_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGroupBox*
/// @param receiver QObject*
///
bool q_groupbox_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_groupbox_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGroupBox*
///
void q_groupbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGroupBox*
///
void q_groupbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGroupBox*
/// @param name const char*
/// @param value QVariant*
///
bool q_groupbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGroupBox*
/// @param name const char*
///
QVariant* q_groupbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGroupBox*
///
const char** q_groupbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGroupBox*
///
QBindingStorage* q_groupbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGroupBox*
///
const QBindingStorage* q_groupbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGroupBox*
///
void q_groupbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self)
///
void q_groupbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGroupBox*
///
QObject* q_groupbox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGroupBox*
/// @param classname const char*
///
bool q_groupbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGroupBox*
///
void q_groupbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGroupBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_groupbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGroupBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_groupbox_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_groupbox_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_groupbox_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGroupBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_groupbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGroupBox*
/// @param signal const char*
///
bool q_groupbox_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGroupBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_groupbox_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGroupBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_groupbox_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGroupBox*
/// @param receiver QObject*
/// @param member const char*
///
bool q_groupbox_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGroupBox*
/// @param param1 QObject*
///
void q_groupbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QObject* param1)
///
void q_groupbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QGroupBox*
///
bool q_groupbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QGroupBox*
///
double q_groupbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QGroupBox*
///
double q_groupbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QGroupBox*
///
int32_t q_groupbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_groupbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_groupbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
int32_t q_groupbox_dev_type(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_dev_type` instead
///
#define q_groupbox_qbase_dev_type q_groupbox_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
int32_t q_groupbox_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback int32_t func()
///
void q_groupbox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param visible bool
///
void q_groupbox_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `q_groupbox_super_set_visible` instead
///
#define q_groupbox_qbase_set_visible q_groupbox_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param visible bool
///
void q_groupbox_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, bool visible)
///
void q_groupbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
QSize* q_groupbox_size_hint(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_size_hint` instead
///
#define q_groupbox_qbase_size_hint q_groupbox_super_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
QSize* q_groupbox_super_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback QSize* func()
///
void q_groupbox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 int
///
int32_t q_groupbox_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `q_groupbox_super_height_for_width` instead
///
#define q_groupbox_qbase_height_for_width q_groupbox_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 int
///
int32_t q_groupbox_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback int32_t func(QGroupBox* self, int param1)
///
void q_groupbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
bool q_groupbox_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_has_height_for_width` instead
///
#define q_groupbox_qbase_has_height_for_width q_groupbox_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
bool q_groupbox_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback bool func()
///
void q_groupbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
QPaintEngine* q_groupbox_paint_engine(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_paint_engine` instead
///
#define q_groupbox_qbase_paint_engine q_groupbox_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
QPaintEngine* q_groupbox_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback QPaintEngine* func()
///
void q_groupbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_mouse_double_click_event` instead
///
#define q_groupbox_qbase_mouse_double_click_event q_groupbox_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QMouseEvent*
///
void q_groupbox_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QMouseEvent* event)
///
void q_groupbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QWheelEvent*
///
void q_groupbox_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_wheel_event` instead
///
#define q_groupbox_qbase_wheel_event q_groupbox_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QWheelEvent*
///
void q_groupbox_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QWheelEvent* event)
///
void q_groupbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QKeyEvent*
///
void q_groupbox_key_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_key_press_event` instead
///
#define q_groupbox_qbase_key_press_event q_groupbox_super_key_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QKeyEvent*
///
void q_groupbox_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QKeyEvent* event)
///
void q_groupbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QKeyEvent*
///
void q_groupbox_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_key_release_event` instead
///
#define q_groupbox_qbase_key_release_event q_groupbox_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QKeyEvent*
///
void q_groupbox_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QKeyEvent* event)
///
void q_groupbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QFocusEvent*
///
void q_groupbox_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_focus_out_event` instead
///
#define q_groupbox_qbase_focus_out_event q_groupbox_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QFocusEvent*
///
void q_groupbox_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QFocusEvent* event)
///
void q_groupbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QEnterEvent*
///
void q_groupbox_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_enter_event` instead
///
#define q_groupbox_qbase_enter_event q_groupbox_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QEnterEvent*
///
void q_groupbox_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QEnterEvent* event)
///
void q_groupbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QEvent*
///
void q_groupbox_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_leave_event` instead
///
#define q_groupbox_qbase_leave_event q_groupbox_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QEvent*
///
void q_groupbox_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QEvent* event)
///
void q_groupbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QMoveEvent*
///
void q_groupbox_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_move_event` instead
///
#define q_groupbox_qbase_move_event q_groupbox_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QMoveEvent*
///
void q_groupbox_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QMoveEvent* event)
///
void q_groupbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QCloseEvent*
///
void q_groupbox_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_close_event` instead
///
#define q_groupbox_qbase_close_event q_groupbox_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QCloseEvent*
///
void q_groupbox_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QCloseEvent* event)
///
void q_groupbox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QContextMenuEvent*
///
void q_groupbox_context_menu_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_context_menu_event` instead
///
#define q_groupbox_qbase_context_menu_event q_groupbox_super_context_menu_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QContextMenuEvent*
///
void q_groupbox_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QContextMenuEvent* event)
///
void q_groupbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QTabletEvent*
///
void q_groupbox_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_tablet_event` instead
///
#define q_groupbox_qbase_tablet_event q_groupbox_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QTabletEvent*
///
void q_groupbox_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QTabletEvent* event)
///
void q_groupbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QActionEvent*
///
void q_groupbox_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_action_event` instead
///
#define q_groupbox_qbase_action_event q_groupbox_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QActionEvent*
///
void q_groupbox_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QActionEvent* event)
///
void q_groupbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDragEnterEvent*
///
void q_groupbox_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_drag_enter_event` instead
///
#define q_groupbox_qbase_drag_enter_event q_groupbox_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDragEnterEvent*
///
void q_groupbox_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QDragEnterEvent* event)
///
void q_groupbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDragMoveEvent*
///
void q_groupbox_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_drag_move_event` instead
///
#define q_groupbox_qbase_drag_move_event q_groupbox_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDragMoveEvent*
///
void q_groupbox_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QDragMoveEvent* event)
///
void q_groupbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDragLeaveEvent*
///
void q_groupbox_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_drag_leave_event` instead
///
#define q_groupbox_qbase_drag_leave_event q_groupbox_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDragLeaveEvent*
///
void q_groupbox_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QDragLeaveEvent* event)
///
void q_groupbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDropEvent*
///
void q_groupbox_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_drop_event` instead
///
#define q_groupbox_qbase_drop_event q_groupbox_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QDropEvent*
///
void q_groupbox_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QDropEvent* event)
///
void q_groupbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QShowEvent*
///
void q_groupbox_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_show_event` instead
///
#define q_groupbox_qbase_show_event q_groupbox_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QShowEvent*
///
void q_groupbox_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QShowEvent* event)
///
void q_groupbox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QHideEvent*
///
void q_groupbox_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_hide_event` instead
///
#define q_groupbox_qbase_hide_event q_groupbox_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QHideEvent*
///
void q_groupbox_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QHideEvent* event)
///
void q_groupbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_groupbox_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `q_groupbox_super_native_event` instead
///
#define q_groupbox_qbase_native_event q_groupbox_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_groupbox_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback bool func(QGroupBox* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_groupbox_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_groupbox_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `q_groupbox_super_metric` instead
///
#define q_groupbox_qbase_metric q_groupbox_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_groupbox_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback int32_t func(QGroupBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_groupbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param painter QPainter*
///
void q_groupbox_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `q_groupbox_super_init_painter` instead
///
#define q_groupbox_qbase_init_painter q_groupbox_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param painter QPainter*
///
void q_groupbox_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QPainter* painter)
///
void q_groupbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param offset QPoint*
///
QPaintDevice* q_groupbox_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `q_groupbox_super_redirected` instead
///
#define q_groupbox_qbase_redirected q_groupbox_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param offset QPoint*
///
QPaintDevice* q_groupbox_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback QPaintDevice* func(QGroupBox* self, QPoint* offset)
///
void q_groupbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
QPainter* q_groupbox_shared_painter(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_shared_painter` instead
///
#define q_groupbox_qbase_shared_painter q_groupbox_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
QPainter* q_groupbox_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback QPainter* func()
///
void q_groupbox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 QInputMethodEvent*
///
void q_groupbox_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `q_groupbox_super_input_method_event` instead
///
#define q_groupbox_qbase_input_method_event q_groupbox_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 QInputMethodEvent*
///
void q_groupbox_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QInputMethodEvent* param1)
///
void q_groupbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_groupbox_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `q_groupbox_super_input_method_query` instead
///
#define q_groupbox_qbase_input_method_query q_groupbox_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_groupbox_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback QVariant* func(QGroupBox* self, enum Qt__InputMethodQuery param1)
///
void q_groupbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param next bool
///
bool q_groupbox_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `q_groupbox_super_focus_next_prev_child` instead
///
#define q_groupbox_qbase_focus_next_prev_child q_groupbox_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param next bool
///
bool q_groupbox_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback bool func(QGroupBox* self, bool next)
///
void q_groupbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_groupbox_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_event_filter` instead
///
#define q_groupbox_qbase_event_filter q_groupbox_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_groupbox_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback bool func(QGroupBox* self, QObject* watched, QEvent* event)
///
void q_groupbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QTimerEvent*
///
void q_groupbox_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_timer_event` instead
///
#define q_groupbox_qbase_timer_event q_groupbox_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QTimerEvent*
///
void q_groupbox_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QTimerEvent* event)
///
void q_groupbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param event QEvent*
///
void q_groupbox_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_groupbox_super_custom_event` instead
///
#define q_groupbox_qbase_custom_event q_groupbox_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param event QEvent*
///
void q_groupbox_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QEvent* event)
///
void q_groupbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param signal QMetaMethod*
///
void q_groupbox_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_groupbox_super_connect_notify` instead
///
#define q_groupbox_qbase_connect_notify q_groupbox_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param signal QMetaMethod*
///
void q_groupbox_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QMetaMethod* signal)
///
void q_groupbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param signal QMetaMethod*
///
void q_groupbox_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_groupbox_super_disconnect_notify` instead
///
#define q_groupbox_qbase_disconnect_notify q_groupbox_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param signal QMetaMethod*
///
void q_groupbox_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, QMetaMethod* signal)
///
void q_groupbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
void q_groupbox_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_update_micro_focus` instead
///
#define q_groupbox_qbase_update_micro_focus q_groupbox_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
void q_groupbox_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func()
///
void q_groupbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
void q_groupbox_create(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_create` instead
///
#define q_groupbox_qbase_create q_groupbox_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
void q_groupbox_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func()
///
void q_groupbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
void q_groupbox_destroy(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_destroy` instead
///
#define q_groupbox_qbase_destroy q_groupbox_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
void q_groupbox_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback void func()
///
void q_groupbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
bool q_groupbox_focus_next_child(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_focus_next_child` instead
///
#define q_groupbox_qbase_focus_next_child q_groupbox_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
bool q_groupbox_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback bool func()
///
void q_groupbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
bool q_groupbox_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_focus_previous_child` instead
///
#define q_groupbox_qbase_focus_previous_child q_groupbox_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
bool q_groupbox_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback bool func()
///
void q_groupbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
QObject* q_groupbox_sender(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_sender` instead
///
#define q_groupbox_qbase_sender q_groupbox_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
QObject* q_groupbox_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback QObject* func()
///
void q_groupbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
///
int32_t q_groupbox_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_groupbox_super_sender_signal_index` instead
///
#define q_groupbox_qbase_sender_signal_index q_groupbox_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
///
int32_t q_groupbox_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback int32_t func()
///
void q_groupbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param signal const char*
///
int32_t q_groupbox_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_groupbox_super_receivers` instead
///
#define q_groupbox_qbase_receivers q_groupbox_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param signal const char*
///
int32_t q_groupbox_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback int32_t func(QGroupBox* self, const char* signal)
///
void q_groupbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param signal QMetaMethod*
///
bool q_groupbox_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_groupbox_super_is_signal_connected` instead
///
#define q_groupbox_qbase_is_signal_connected q_groupbox_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param signal QMetaMethod*
///
bool q_groupbox_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback bool func(QGroupBox* self, QMetaMethod* signal)
///
void q_groupbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGroupBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_groupbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `q_groupbox_super_get_decoded_metric_f` instead
///
#define q_groupbox_qbase_get_decoded_metric_f q_groupbox_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGroupBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_groupbox_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGroupBox*
/// @param callback double func(QGroupBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_groupbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGroupBox*
/// @param callback void func(QGroupBox* self, const char* objectName)
///
void q_groupbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgroupbox.html#dtor.QGroupBox)
///
/// Delete this object from C++ memory.
///
/// @param self QGroupBox*
///
void q_groupbox_delete(void* self);

#endif
