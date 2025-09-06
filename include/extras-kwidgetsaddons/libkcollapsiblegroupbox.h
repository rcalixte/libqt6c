#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKCOLLAPSIBLEGROUPBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKCOLLAPSIBLEGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcollapsiblegroupbox.html

/// k_collapsiblegroupbox_new constructs a new KCollapsibleGroupBox object.
///
/// @param parent QWidget*
KCollapsibleGroupBox* k_collapsiblegroupbox_new(void* parent);

/// k_collapsiblegroupbox_new2 constructs a new KCollapsibleGroupBox object.
///
KCollapsibleGroupBox* k_collapsiblegroupbox_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCollapsibleGroupBox*
const QMetaObject* k_collapsiblegroupbox_meta_object(void* self);

/// @param self KCollapsibleGroupBox*
/// @param param1 const char*
void* k_collapsiblegroupbox_metacast(void* self, const char* param1);

/// @param self KCollapsibleGroupBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_collapsiblegroupbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback int32_t func(KCollapsibleGroupBox* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_collapsiblegroupbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_collapsiblegroupbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_collapsiblegroupbox_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#setTitle)
///
/// @param self KCollapsibleGroupBox*
/// @param title const char*
void k_collapsiblegroupbox_set_title(void* self, const char* title);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_title(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#setExpanded)
///
/// @param self KCollapsibleGroupBox*
/// @param expanded bool
void k_collapsiblegroupbox_set_expanded(void* self, bool expanded);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#isExpanded)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_expanded(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#sizeHint)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback QSize* func()
void k_collapsiblegroupbox_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_qbase_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#minimumSizeHint)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_minimum_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback QSize* func()
void k_collapsiblegroupbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#toggle)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_toggle(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#expand)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_expand(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#collapse)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_collapse(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#titleChanged)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_title_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#titleChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self)
void k_collapsiblegroupbox_on_title_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#expandedChanged)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_expanded_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#expandedChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self)
void k_collapsiblegroupbox_on_expanded_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#paintEvent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPaintEvent*
void k_collapsiblegroupbox_paint_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QPaintEvent* param1)
void k_collapsiblegroupbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPaintEvent*
void k_collapsiblegroupbox_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#event)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QEvent*
bool k_collapsiblegroupbox_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func(KCollapsibleGroupBox* self, QEvent* param1)
void k_collapsiblegroupbox_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#event)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QEvent*
bool k_collapsiblegroupbox_qbase_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#mousePressEvent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QMouseEvent*
void k_collapsiblegroupbox_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QMouseEvent* param1)
void k_collapsiblegroupbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QMouseEvent*
void k_collapsiblegroupbox_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#mouseMoveEvent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QMouseEvent*
void k_collapsiblegroupbox_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QMouseEvent* param1)
void k_collapsiblegroupbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QMouseEvent*
void k_collapsiblegroupbox_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#leaveEvent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QEvent*
void k_collapsiblegroupbox_leave_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QEvent* param1)
void k_collapsiblegroupbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QEvent*
void k_collapsiblegroupbox_qbase_leave_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#keyPressEvent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QKeyEvent*
void k_collapsiblegroupbox_key_press_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QKeyEvent* param1)
void k_collapsiblegroupbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QKeyEvent*
void k_collapsiblegroupbox_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#resizeEvent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QResizeEvent*
void k_collapsiblegroupbox_resize_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QResizeEvent* param1)
void k_collapsiblegroupbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QResizeEvent*
void k_collapsiblegroupbox_qbase_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_collapsiblegroupbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_collapsiblegroupbox_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KCollapsibleGroupBox*
uintptr_t k_collapsiblegroupbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KCollapsibleGroupBox*
uintptr_t k_collapsiblegroupbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KCollapsibleGroupBox*
uintptr_t k_collapsiblegroupbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KCollapsibleGroupBox*
QStyle* k_collapsiblegroupbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KCollapsibleGroupBox*
/// @param style QStyle*
void k_collapsiblegroupbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KCollapsibleGroupBox*
///
/// @return enum Qt__WindowModality
int32_t k_collapsiblegroupbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KCollapsibleGroupBox*
/// @param windowModality enum Qt__WindowModality
void k_collapsiblegroupbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QWidget*
bool k_collapsiblegroupbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KCollapsibleGroupBox*
/// @param enabled bool
void k_collapsiblegroupbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KCollapsibleGroupBox*
/// @param disabled bool
void k_collapsiblegroupbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KCollapsibleGroupBox*
/// @param windowModified bool
void k_collapsiblegroupbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KCollapsibleGroupBox*
QRect* k_collapsiblegroupbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KCollapsibleGroupBox*
const QRect* k_collapsiblegroupbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KCollapsibleGroupBox*
QRect* k_collapsiblegroupbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KCollapsibleGroupBox*
QPoint* k_collapsiblegroupbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KCollapsibleGroupBox*
QRect* k_collapsiblegroupbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KCollapsibleGroupBox*
QRect* k_collapsiblegroupbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KCollapsibleGroupBox*
QRegion* k_collapsiblegroupbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KCollapsibleGroupBox*
/// @param minimumSize QSize*
void k_collapsiblegroupbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KCollapsibleGroupBox*
/// @param minw int
/// @param minh int
void k_collapsiblegroupbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KCollapsibleGroupBox*
/// @param maximumSize QSize*
void k_collapsiblegroupbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KCollapsibleGroupBox*
/// @param maxw int
/// @param maxh int
void k_collapsiblegroupbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KCollapsibleGroupBox*
/// @param minw int
void k_collapsiblegroupbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KCollapsibleGroupBox*
/// @param minh int
void k_collapsiblegroupbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KCollapsibleGroupBox*
/// @param maxw int
void k_collapsiblegroupbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KCollapsibleGroupBox*
/// @param maxh int
void k_collapsiblegroupbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KCollapsibleGroupBox*
/// @param sizeIncrement QSize*
void k_collapsiblegroupbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KCollapsibleGroupBox*
/// @param w int
/// @param h int
void k_collapsiblegroupbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KCollapsibleGroupBox*
QSize* k_collapsiblegroupbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KCollapsibleGroupBox*
/// @param baseSize QSize*
void k_collapsiblegroupbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KCollapsibleGroupBox*
/// @param basew int
/// @param baseh int
void k_collapsiblegroupbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KCollapsibleGroupBox*
/// @param fixedSize QSize*
void k_collapsiblegroupbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KCollapsibleGroupBox*
/// @param w int
/// @param h int
void k_collapsiblegroupbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KCollapsibleGroupBox*
/// @param w int
void k_collapsiblegroupbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KCollapsibleGroupBox*
/// @param h int
void k_collapsiblegroupbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPointF*
QPointF* k_collapsiblegroupbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPoint*
QPoint* k_collapsiblegroupbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPointF*
QPointF* k_collapsiblegroupbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPoint*
QPoint* k_collapsiblegroupbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPointF*
QPointF* k_collapsiblegroupbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPoint*
QPoint* k_collapsiblegroupbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPointF*
QPointF* k_collapsiblegroupbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPoint*
QPoint* k_collapsiblegroupbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_collapsiblegroupbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_collapsiblegroupbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_collapsiblegroupbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_collapsiblegroupbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KCollapsibleGroupBox*
const QPalette* k_collapsiblegroupbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KCollapsibleGroupBox*
/// @param palette QPalette*
void k_collapsiblegroupbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KCollapsibleGroupBox*
/// @param backgroundRole enum QPalette__ColorRole
void k_collapsiblegroupbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KCollapsibleGroupBox*
///
/// @return enum QPalette__ColorRole
int32_t k_collapsiblegroupbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KCollapsibleGroupBox*
/// @param foregroundRole enum QPalette__ColorRole
void k_collapsiblegroupbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KCollapsibleGroupBox*
///
/// @return enum QPalette__ColorRole
int32_t k_collapsiblegroupbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KCollapsibleGroupBox*
const QFont* k_collapsiblegroupbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KCollapsibleGroupBox*
/// @param font QFont*
void k_collapsiblegroupbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KCollapsibleGroupBox*
QFontMetrics* k_collapsiblegroupbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KCollapsibleGroupBox*
QFontInfo* k_collapsiblegroupbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KCollapsibleGroupBox*
QCursor* k_collapsiblegroupbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KCollapsibleGroupBox*
/// @param cursor QCursor*
void k_collapsiblegroupbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KCollapsibleGroupBox*
/// @param enable bool
void k_collapsiblegroupbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KCollapsibleGroupBox*
/// @param enable bool
void k_collapsiblegroupbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KCollapsibleGroupBox*
/// @param mask QBitmap*
void k_collapsiblegroupbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KCollapsibleGroupBox*
/// @param mask QRegion*
void k_collapsiblegroupbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KCollapsibleGroupBox*
QRegion* k_collapsiblegroupbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param target QPaintDevice*
void k_collapsiblegroupbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param painter QPainter*
void k_collapsiblegroupbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KCollapsibleGroupBox*
QPixmap* k_collapsiblegroupbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KCollapsibleGroupBox*
QGraphicsEffect* k_collapsiblegroupbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KCollapsibleGroupBox*
/// @param effect QGraphicsEffect*
void k_collapsiblegroupbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KCollapsibleGroupBox*
/// @param typeVal enum Qt__GestureType
void k_collapsiblegroupbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KCollapsibleGroupBox*
/// @param typeVal enum Qt__GestureType
void k_collapsiblegroupbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KCollapsibleGroupBox*
/// @param windowTitle const char*
void k_collapsiblegroupbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KCollapsibleGroupBox*
/// @param styleSheet const char*
void k_collapsiblegroupbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KCollapsibleGroupBox*
/// @param icon QIcon*
void k_collapsiblegroupbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KCollapsibleGroupBox*
QIcon* k_collapsiblegroupbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KCollapsibleGroupBox*
/// @param windowIconText const char*
void k_collapsiblegroupbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KCollapsibleGroupBox*
/// @param windowRole const char*
void k_collapsiblegroupbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KCollapsibleGroupBox*
/// @param filePath const char*
void k_collapsiblegroupbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KCollapsibleGroupBox*
/// @param level double
void k_collapsiblegroupbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KCollapsibleGroupBox*
double k_collapsiblegroupbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KCollapsibleGroupBox*
/// @param toolTip const char*
void k_collapsiblegroupbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KCollapsibleGroupBox*
/// @param msec int
void k_collapsiblegroupbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KCollapsibleGroupBox*
/// @param statusTip const char*
void k_collapsiblegroupbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KCollapsibleGroupBox*
/// @param whatsThis const char*
void k_collapsiblegroupbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KCollapsibleGroupBox*
/// @param name const char*
void k_collapsiblegroupbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KCollapsibleGroupBox*
/// @param description const char*
void k_collapsiblegroupbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KCollapsibleGroupBox*
/// @param direction enum Qt__LayoutDirection
void k_collapsiblegroupbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KCollapsibleGroupBox*
///
/// @return enum Qt__LayoutDirection
int32_t k_collapsiblegroupbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KCollapsibleGroupBox*
/// @param locale QLocale*
void k_collapsiblegroupbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KCollapsibleGroupBox*
QLocale* k_collapsiblegroupbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KCollapsibleGroupBox*
/// @param reason enum Qt__FocusReason
void k_collapsiblegroupbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KCollapsibleGroupBox*
///
/// @return enum Qt__FocusPolicy
int32_t k_collapsiblegroupbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KCollapsibleGroupBox*
/// @param policy enum Qt__FocusPolicy
void k_collapsiblegroupbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_collapsiblegroupbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KCollapsibleGroupBox*
/// @param focusProxy QWidget*
void k_collapsiblegroupbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KCollapsibleGroupBox*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_collapsiblegroupbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KCollapsibleGroupBox*
/// @param policy enum Qt__ContextMenuPolicy
void k_collapsiblegroupbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QCursor*
void k_collapsiblegroupbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KCollapsibleGroupBox*
/// @param key QKeySequence*
int32_t k_collapsiblegroupbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KCollapsibleGroupBox*
/// @param id int
void k_collapsiblegroupbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KCollapsibleGroupBox*
/// @param id int
void k_collapsiblegroupbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KCollapsibleGroupBox*
/// @param id int
void k_collapsiblegroupbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_collapsiblegroupbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_collapsiblegroupbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KCollapsibleGroupBox*
/// @param enable bool
void k_collapsiblegroupbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KCollapsibleGroupBox*
QGraphicsProxyWidget* k_collapsiblegroupbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCollapsibleGroupBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_collapsiblegroupbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QRect*
void k_collapsiblegroupbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QRegion*
void k_collapsiblegroupbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCollapsibleGroupBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_collapsiblegroupbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QRect*
void k_collapsiblegroupbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QRegion*
void k_collapsiblegroupbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KCollapsibleGroupBox*
/// @param hidden bool
void k_collapsiblegroupbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QWidget*
void k_collapsiblegroupbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KCollapsibleGroupBox*
/// @param x int
/// @param y int
void k_collapsiblegroupbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QPoint*
void k_collapsiblegroupbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KCollapsibleGroupBox*
/// @param w int
/// @param h int
void k_collapsiblegroupbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QSize*
void k_collapsiblegroupbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KCollapsibleGroupBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_collapsiblegroupbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KCollapsibleGroupBox*
/// @param geometry QRect*
void k_collapsiblegroupbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
char* k_collapsiblegroupbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KCollapsibleGroupBox*
/// @param geometry const char*
bool k_collapsiblegroupbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QWidget*
bool k_collapsiblegroupbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KCollapsibleGroupBox*
///
/// @return flag of enum Qt__WindowState
int32_t k_collapsiblegroupbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KCollapsibleGroupBox*
/// @param state flag of enum Qt__WindowState
void k_collapsiblegroupbox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KCollapsibleGroupBox*
/// @param state flag of enum Qt__WindowState
void k_collapsiblegroupbox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KCollapsibleGroupBox*
QSizePolicy* k_collapsiblegroupbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KCollapsibleGroupBox*
/// @param sizePolicy QSizePolicy*
void k_collapsiblegroupbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KCollapsibleGroupBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_collapsiblegroupbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KCollapsibleGroupBox*
QRegion* k_collapsiblegroupbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KCollapsibleGroupBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_collapsiblegroupbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KCollapsibleGroupBox*
/// @param margins QMargins*
void k_collapsiblegroupbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KCollapsibleGroupBox*
QMargins* k_collapsiblegroupbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KCollapsibleGroupBox*
QRect* k_collapsiblegroupbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KCollapsibleGroupBox*
QLayout* k_collapsiblegroupbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KCollapsibleGroupBox*
/// @param layout QLayout*
void k_collapsiblegroupbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KCollapsibleGroupBox*
/// @param parent QWidget*
void k_collapsiblegroupbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KCollapsibleGroupBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_collapsiblegroupbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KCollapsibleGroupBox*
/// @param dx int
/// @param dy int
void k_collapsiblegroupbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KCollapsibleGroupBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_collapsiblegroupbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KCollapsibleGroupBox*
/// @param on bool
void k_collapsiblegroupbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCollapsibleGroupBox*
/// @param action QAction*
void k_collapsiblegroupbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KCollapsibleGroupBox*
/// @param actions libqt_list /* of QAction* */
void k_collapsiblegroupbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KCollapsibleGroupBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_collapsiblegroupbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KCollapsibleGroupBox*
/// @param before QAction*
/// @param action QAction*
void k_collapsiblegroupbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KCollapsibleGroupBox*
/// @param action QAction*
void k_collapsiblegroupbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KCollapsibleGroupBox*
libqt_list /* of QAction* */ k_collapsiblegroupbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCollapsibleGroupBox*
/// @param text const char*
QAction* k_collapsiblegroupbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCollapsibleGroupBox*
/// @param icon QIcon*
/// @param text const char*
QAction* k_collapsiblegroupbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCollapsibleGroupBox*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_collapsiblegroupbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCollapsibleGroupBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_collapsiblegroupbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KCollapsibleGroupBox*
QWidget* k_collapsiblegroupbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KCollapsibleGroupBox*
/// @param typeVal flag of enum Qt__WindowType
void k_collapsiblegroupbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KCollapsibleGroupBox*
///
/// @return flag of enum Qt__WindowType
int64_t k_collapsiblegroupbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum Qt__WindowType
void k_collapsiblegroupbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KCollapsibleGroupBox*
/// @param typeVal flag of enum Qt__WindowType
void k_collapsiblegroupbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KCollapsibleGroupBox*
///
/// @return enum Qt__WindowType
int64_t k_collapsiblegroupbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_collapsiblegroupbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCollapsibleGroupBox*
/// @param x int
/// @param y int
QWidget* k_collapsiblegroupbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCollapsibleGroupBox*
/// @param p QPoint*
QWidget* k_collapsiblegroupbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCollapsibleGroupBox*
/// @param p QPointF*
QWidget* k_collapsiblegroupbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum Qt__WidgetAttribute
void k_collapsiblegroupbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum Qt__WidgetAttribute
bool k_collapsiblegroupbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KCollapsibleGroupBox*
/// @param child QWidget*
bool k_collapsiblegroupbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KCollapsibleGroupBox*
/// @param enabled bool
void k_collapsiblegroupbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KCollapsibleGroupBox*
QBackingStore* k_collapsiblegroupbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KCollapsibleGroupBox*
QWindow* k_collapsiblegroupbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KCollapsibleGroupBox*
QScreen* k_collapsiblegroupbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KCollapsibleGroupBox*
/// @param screen QScreen*
void k_collapsiblegroupbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_collapsiblegroupbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param title const char*
void k_collapsiblegroupbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, const char* title)
void k_collapsiblegroupbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param icon QIcon*
void k_collapsiblegroupbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QIcon* icon)
void k_collapsiblegroupbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param iconText const char*
void k_collapsiblegroupbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, const char* iconText)
void k_collapsiblegroupbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KCollapsibleGroupBox*
/// @param pos QPoint*
void k_collapsiblegroupbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QPoint* pos)
void k_collapsiblegroupbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KCollapsibleGroupBox*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_collapsiblegroupbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KCollapsibleGroupBox*
/// @param hints flag of enum Qt__InputMethodHint
void k_collapsiblegroupbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_collapsiblegroupbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_collapsiblegroupbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_collapsiblegroupbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_collapsiblegroupbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_collapsiblegroupbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCollapsibleGroupBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_collapsiblegroupbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KCollapsibleGroupBox*
/// @param rectangle QRect*
QPixmap* k_collapsiblegroupbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KCollapsibleGroupBox*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_collapsiblegroupbox_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KCollapsibleGroupBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_collapsiblegroupbox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KCollapsibleGroupBox*
/// @param id int
/// @param enable bool
void k_collapsiblegroupbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KCollapsibleGroupBox*
/// @param id int
/// @param enable bool
void k_collapsiblegroupbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_collapsiblegroupbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_collapsiblegroupbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_collapsiblegroupbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_collapsiblegroupbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char* k_collapsiblegroupbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCollapsibleGroupBox*
/// @param name char*
void k_collapsiblegroupbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCollapsibleGroupBox*
/// @param b bool
bool k_collapsiblegroupbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCollapsibleGroupBox*
QThread* k_collapsiblegroupbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCollapsibleGroupBox*
/// @param thread QThread*
bool k_collapsiblegroupbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCollapsibleGroupBox*
/// @param interval int
int32_t k_collapsiblegroupbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCollapsibleGroupBox*
/// @param id int
void k_collapsiblegroupbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCollapsibleGroupBox*
/// @param id enum Qt__TimerId
void k_collapsiblegroupbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCollapsibleGroupBox*
libqt_list /* of QObject* */ k_collapsiblegroupbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCollapsibleGroupBox*
/// @param filterObj QObject*
void k_collapsiblegroupbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCollapsibleGroupBox*
/// @param obj QObject*
void k_collapsiblegroupbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_collapsiblegroupbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCollapsibleGroupBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_collapsiblegroupbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_collapsiblegroupbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_collapsiblegroupbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCollapsibleGroupBox*
/// @param name const char*
/// @param value QVariant*
bool k_collapsiblegroupbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCollapsibleGroupBox*
/// @param name const char*
QVariant* k_collapsiblegroupbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCollapsibleGroupBox*
const char** k_collapsiblegroupbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCollapsibleGroupBox*
QBindingStorage* k_collapsiblegroupbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCollapsibleGroupBox*
const QBindingStorage* k_collapsiblegroupbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self)
void k_collapsiblegroupbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCollapsibleGroupBox*
QObject* k_collapsiblegroupbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCollapsibleGroupBox*
/// @param classname const char*
bool k_collapsiblegroupbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCollapsibleGroupBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_collapsiblegroupbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCollapsibleGroupBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_collapsiblegroupbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_collapsiblegroupbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCollapsibleGroupBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_collapsiblegroupbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QObject*
void k_collapsiblegroupbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QObject* param1)
void k_collapsiblegroupbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KCollapsibleGroupBox*
double k_collapsiblegroupbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KCollapsibleGroupBox*
double k_collapsiblegroupbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_collapsiblegroupbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_collapsiblegroupbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback int32_t func()
void k_collapsiblegroupbox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param visible bool
void k_collapsiblegroupbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param visible bool
void k_collapsiblegroupbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, bool visible)
void k_collapsiblegroupbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 int
int32_t k_collapsiblegroupbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 int
int32_t k_collapsiblegroupbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback int32_t func(KCollapsibleGroupBox* self, int param1)
void k_collapsiblegroupbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func()
void k_collapsiblegroupbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
QPaintEngine* k_collapsiblegroupbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
QPaintEngine* k_collapsiblegroupbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback QPaintEngine* func()
void k_collapsiblegroupbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QMouseEvent*
void k_collapsiblegroupbox_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QMouseEvent*
void k_collapsiblegroupbox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QMouseEvent* event)
void k_collapsiblegroupbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QMouseEvent*
void k_collapsiblegroupbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QMouseEvent*
void k_collapsiblegroupbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QMouseEvent* event)
void k_collapsiblegroupbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QWheelEvent*
void k_collapsiblegroupbox_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QWheelEvent*
void k_collapsiblegroupbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QWheelEvent* event)
void k_collapsiblegroupbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QKeyEvent*
void k_collapsiblegroupbox_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QKeyEvent*
void k_collapsiblegroupbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QKeyEvent* event)
void k_collapsiblegroupbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QFocusEvent*
void k_collapsiblegroupbox_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QFocusEvent*
void k_collapsiblegroupbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QFocusEvent* event)
void k_collapsiblegroupbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QFocusEvent*
void k_collapsiblegroupbox_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QFocusEvent*
void k_collapsiblegroupbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QFocusEvent* event)
void k_collapsiblegroupbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QEnterEvent*
void k_collapsiblegroupbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QEnterEvent*
void k_collapsiblegroupbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QEnterEvent* event)
void k_collapsiblegroupbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QMoveEvent*
void k_collapsiblegroupbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QMoveEvent*
void k_collapsiblegroupbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QMoveEvent* event)
void k_collapsiblegroupbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QCloseEvent*
void k_collapsiblegroupbox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QCloseEvent*
void k_collapsiblegroupbox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QCloseEvent* event)
void k_collapsiblegroupbox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QContextMenuEvent*
void k_collapsiblegroupbox_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QContextMenuEvent*
void k_collapsiblegroupbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QContextMenuEvent* event)
void k_collapsiblegroupbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QTabletEvent*
void k_collapsiblegroupbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QTabletEvent*
void k_collapsiblegroupbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QTabletEvent* event)
void k_collapsiblegroupbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QActionEvent*
void k_collapsiblegroupbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QActionEvent*
void k_collapsiblegroupbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QActionEvent* event)
void k_collapsiblegroupbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDragEnterEvent*
void k_collapsiblegroupbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDragEnterEvent*
void k_collapsiblegroupbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QDragEnterEvent* event)
void k_collapsiblegroupbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDragMoveEvent*
void k_collapsiblegroupbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDragMoveEvent*
void k_collapsiblegroupbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QDragMoveEvent* event)
void k_collapsiblegroupbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDragLeaveEvent*
void k_collapsiblegroupbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDragLeaveEvent*
void k_collapsiblegroupbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QDragLeaveEvent* event)
void k_collapsiblegroupbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDropEvent*
void k_collapsiblegroupbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QDropEvent*
void k_collapsiblegroupbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QDropEvent* event)
void k_collapsiblegroupbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QShowEvent*
void k_collapsiblegroupbox_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QShowEvent*
void k_collapsiblegroupbox_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QShowEvent* event)
void k_collapsiblegroupbox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QHideEvent*
void k_collapsiblegroupbox_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QHideEvent*
void k_collapsiblegroupbox_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QHideEvent* event)
void k_collapsiblegroupbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_collapsiblegroupbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_collapsiblegroupbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func(KCollapsibleGroupBox* self, const char* eventType, void* message, intptr_t* result)
void k_collapsiblegroupbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QEvent*
void k_collapsiblegroupbox_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QEvent*
void k_collapsiblegroupbox_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QEvent* param1)
void k_collapsiblegroupbox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_collapsiblegroupbox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_collapsiblegroupbox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback int32_t func(KCollapsibleGroupBox* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_collapsiblegroupbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param painter QPainter*
void k_collapsiblegroupbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param painter QPainter*
void k_collapsiblegroupbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QPainter* painter)
void k_collapsiblegroupbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param offset QPoint*
QPaintDevice* k_collapsiblegroupbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param offset QPoint*
QPaintDevice* k_collapsiblegroupbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback QPaintDevice* func(KCollapsibleGroupBox* self, QPoint* offset)
void k_collapsiblegroupbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
QPainter* k_collapsiblegroupbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
QPainter* k_collapsiblegroupbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback QPainter* func()
void k_collapsiblegroupbox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QInputMethodEvent*
void k_collapsiblegroupbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 QInputMethodEvent*
void k_collapsiblegroupbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QInputMethodEvent* param1)
void k_collapsiblegroupbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_collapsiblegroupbox_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_collapsiblegroupbox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback QVariant* func(KCollapsibleGroupBox* self, enum Qt__InputMethodQuery param1)
void k_collapsiblegroupbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param next bool
bool k_collapsiblegroupbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param next bool
bool k_collapsiblegroupbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func(KCollapsibleGroupBox* self, bool next)
void k_collapsiblegroupbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param watched QObject*
/// @param event QEvent*
bool k_collapsiblegroupbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param watched QObject*
/// @param event QEvent*
bool k_collapsiblegroupbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func(KCollapsibleGroupBox* self, QObject* watched, QEvent* event)
void k_collapsiblegroupbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QTimerEvent*
void k_collapsiblegroupbox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QTimerEvent*
void k_collapsiblegroupbox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QTimerEvent* event)
void k_collapsiblegroupbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QChildEvent*
void k_collapsiblegroupbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QChildEvent*
void k_collapsiblegroupbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QChildEvent* event)
void k_collapsiblegroupbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QEvent*
void k_collapsiblegroupbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param event QEvent*
void k_collapsiblegroupbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QEvent* event)
void k_collapsiblegroupbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal QMetaMethod*
void k_collapsiblegroupbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal QMetaMethod*
void k_collapsiblegroupbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QMetaMethod* signal)
void k_collapsiblegroupbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal QMetaMethod*
void k_collapsiblegroupbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal QMetaMethod*
void k_collapsiblegroupbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, QMetaMethod* signal)
void k_collapsiblegroupbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func()
void k_collapsiblegroupbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func()
void k_collapsiblegroupbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func()
void k_collapsiblegroupbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func()
void k_collapsiblegroupbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
bool k_collapsiblegroupbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func()
void k_collapsiblegroupbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
QObject* k_collapsiblegroupbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
QObject* k_collapsiblegroupbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback QObject* func()
void k_collapsiblegroupbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
int32_t k_collapsiblegroupbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback int32_t func()
void k_collapsiblegroupbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal const char*
int32_t k_collapsiblegroupbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal const char*
int32_t k_collapsiblegroupbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback int32_t func(KCollapsibleGroupBox* self, const char* signal)
void k_collapsiblegroupbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal QMetaMethod*
bool k_collapsiblegroupbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param signal QMetaMethod*
bool k_collapsiblegroupbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback bool func(KCollapsibleGroupBox* self, QMetaMethod* signal)
void k_collapsiblegroupbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_collapsiblegroupbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_collapsiblegroupbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCollapsibleGroupBox*
/// @param callback double func(KCollapsibleGroupBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_collapsiblegroupbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCollapsibleGroupBox*
/// @param callback void func(KCollapsibleGroupBox* self, const char* objectName)
void k_collapsiblegroupbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kcollapsiblegroupbox.html#dtor.KCollapsibleGroupBox)
///
/// Delete this object from C++ memory.
///
/// @param self KCollapsibleGroupBox*
void k_collapsiblegroupbox_delete(void* self);

#endif
