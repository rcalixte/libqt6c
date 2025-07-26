#pragma once
#ifndef SRCQT6C_LIBQGROUPBOX_H
#define SRCQT6C_LIBQGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgroupbox.html

/// q_groupbox_new constructs a new QGroupBox object.
///
/// ``` QWidget* parent ```
QGroupBox* q_groupbox_new(void* parent);

/// q_groupbox_new2 constructs a new QGroupBox object.
///
///
QGroupBox* q_groupbox_new2();

/// q_groupbox_new3 constructs a new QGroupBox object.
///
/// ``` const char* title ```
QGroupBox* q_groupbox_new3(const char* title);

/// q_groupbox_new4 constructs a new QGroupBox object.
///
/// ``` const char* title, QWidget* parent ```
QGroupBox* q_groupbox_new4(const char* title, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGroupBox* self ```
const QMetaObject* q_groupbox_meta_object(void* self);

/// ``` QGroupBox* self, const char* param1 ```
void* q_groupbox_metacast(void* self, const char* param1);

/// ``` QGroupBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_groupbox_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, enum QMetaObject__Call, int, void*) ```
void q_groupbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGroupBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_groupbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_groupbox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#title)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setTitle)
///
/// ``` QGroupBox* self, const char* title ```
void q_groupbox_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#alignment)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setAlignment)
///
/// ``` QGroupBox* self, int alignment ```
void q_groupbox_set_alignment(void* self, int alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#minimumSizeHint)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, QSize* (*slot)() ```
void q_groupbox_on_minimum_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#minimumSizeHint)
///
/// Base class method implementation
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#isFlat)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_flat(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setFlat)
///
/// ``` QGroupBox* self, bool flat ```
void q_groupbox_set_flat(void* self, bool flat);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#isCheckable)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_checkable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setCheckable)
///
/// ``` QGroupBox* self, bool checkable ```
void q_groupbox_set_checkable(void* self, bool checkable);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#isChecked)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_checked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#setChecked)
///
/// ``` QGroupBox* self, bool checked ```
void q_groupbox_set_checked(void* self, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// ``` QGroupBox* self ```
void q_groupbox_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*) ```
void q_groupbox_on_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#toggled)
///
/// ``` QGroupBox* self, bool param1 ```
void q_groupbox_toggled(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#toggled)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_toggled(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#event)
///
/// ``` QGroupBox* self, QEvent* event ```
bool q_groupbox_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#event)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QEvent* event ```
bool q_groupbox_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#childEvent)
///
/// ``` QGroupBox* self, QChildEvent* event ```
void q_groupbox_child_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#childEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QChildEvent*) ```
void q_groupbox_on_child_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#childEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QChildEvent* event ```
void q_groupbox_qbase_child_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#resizeEvent)
///
/// ``` QGroupBox* self, QResizeEvent* event ```
void q_groupbox_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QResizeEvent*) ```
void q_groupbox_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QResizeEvent* event ```
void q_groupbox_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#paintEvent)
///
/// ``` QGroupBox* self, QPaintEvent* event ```
void q_groupbox_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QPaintEvent*) ```
void q_groupbox_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QPaintEvent* event ```
void q_groupbox_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#focusInEvent)
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QFocusEvent*) ```
void q_groupbox_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#changeEvent)
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mousePressEvent)
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseMoveEvent)
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseReleaseEvent)
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#initStyleOption)
///
/// ``` QGroupBox* self, QStyleOptionGroupBox* option ```
void q_groupbox_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QStyleOptionGroupBox*) ```
void q_groupbox_on_init_style_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QGroupBox* self, QStyleOptionGroupBox* option ```
void q_groupbox_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_groupbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_groupbox_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// ``` QGroupBox* self, bool checked ```
void q_groupbox_clicked1(void* self, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#clicked)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_clicked1(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QGroupBox* self ```
uintptr_t q_groupbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QGroupBox* self ```
void q_groupbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QGroupBox* self ```
uintptr_t q_groupbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QGroupBox* self ```
uintptr_t q_groupbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QGroupBox* self ```
QStyle* q_groupbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QGroupBox* self, QStyle* style ```
void q_groupbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QGroupBox* self, enum Qt__WindowModality windowModality ```
void q_groupbox_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QGroupBox* self, QWidget* param1 ```
bool q_groupbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QGroupBox* self, bool enabled ```
void q_groupbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QGroupBox* self, bool disabled ```
void q_groupbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QGroupBox* self, bool windowModified ```
void q_groupbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QGroupBox* self ```
const QRect* q_groupbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QGroupBox* self ```
QPoint* q_groupbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QGroupBox* self ```
QRegion* q_groupbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGroupBox* self, QSize* minimumSize ```
void q_groupbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGroupBox* self, int minw, int minh ```
void q_groupbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGroupBox* self, QSize* maximumSize ```
void q_groupbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGroupBox* self, int maxw, int maxh ```
void q_groupbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QGroupBox* self, int minw ```
void q_groupbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QGroupBox* self, int minh ```
void q_groupbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QGroupBox* self, int maxw ```
void q_groupbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QGroupBox* self, int maxh ```
void q_groupbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGroupBox* self, QSize* sizeIncrement ```
void q_groupbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGroupBox* self, int w, int h ```
void q_groupbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGroupBox* self, QSize* baseSize ```
void q_groupbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGroupBox* self, int basew, int baseh ```
void q_groupbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGroupBox* self, QSize* fixedSize ```
void q_groupbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGroupBox* self, int w, int h ```
void q_groupbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QGroupBox* self, int w ```
void q_groupbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QGroupBox* self, int h ```
void q_groupbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGroupBox* self, QPointF* param1 ```
QPointF* q_groupbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGroupBox* self, QPoint* param1 ```
QPoint* q_groupbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGroupBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_groupbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGroupBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_groupbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGroupBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_groupbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGroupBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_groupbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QGroupBox* self ```
const QPalette* q_groupbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QGroupBox* self, QPalette* palette ```
void q_groupbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QGroupBox* self, enum QPalette__ColorRole backgroundRole ```
void q_groupbox_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QGroupBox* self, enum QPalette__ColorRole foregroundRole ```
void q_groupbox_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QGroupBox* self ```
const QFont* q_groupbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QGroupBox* self, QFont* font ```
void q_groupbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QGroupBox* self ```
QFontMetrics* q_groupbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QGroupBox* self ```
QFontInfo* q_groupbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QGroupBox* self ```
QCursor* q_groupbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QGroupBox* self, QCursor* cursor ```
void q_groupbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QGroupBox* self ```
void q_groupbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QGroupBox* self, bool enable ```
void q_groupbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QGroupBox* self ```
bool q_groupbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QGroupBox* self, bool enable ```
void q_groupbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGroupBox* self, QBitmap* mask ```
void q_groupbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGroupBox* self, QRegion* mask ```
void q_groupbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QGroupBox* self ```
QRegion* q_groupbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QGroupBox* self ```
void q_groupbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target ```
void q_groupbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter ```
void q_groupbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGroupBox* self ```
QPixmap* q_groupbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QGroupBox* self ```
QGraphicsEffect* q_groupbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QGroupBox* self, QGraphicsEffect* effect ```
void q_groupbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGroupBox* self, enum Qt__GestureType typeVal ```
void q_groupbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QGroupBox* self, enum Qt__GestureType typeVal ```
void q_groupbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QGroupBox* self, const char* windowTitle ```
void q_groupbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QGroupBox* self, const char* styleSheet ```
void q_groupbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QGroupBox* self, QIcon* icon ```
void q_groupbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QGroupBox* self ```
QIcon* q_groupbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QGroupBox* self, const char* windowIconText ```
void q_groupbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QGroupBox* self, const char* windowRole ```
void q_groupbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QGroupBox* self, const char* filePath ```
void q_groupbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QGroupBox* self, double level ```
void q_groupbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QGroupBox* self ```
double q_groupbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QGroupBox* self, const char* toolTip ```
void q_groupbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QGroupBox* self, int msec ```
void q_groupbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QGroupBox* self, const char* statusTip ```
void q_groupbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QGroupBox* self, const char* whatsThis ```
void q_groupbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QGroupBox* self, const char* name ```
void q_groupbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QGroupBox* self, const char* description ```
void q_groupbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QGroupBox* self, enum Qt__LayoutDirection direction ```
void q_groupbox_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QGroupBox* self ```
void q_groupbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QGroupBox* self, QLocale* locale ```
void q_groupbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QGroupBox* self ```
QLocale* q_groupbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QGroupBox* self ```
void q_groupbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGroupBox* self ```
void q_groupbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QGroupBox* self ```
void q_groupbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QGroupBox* self ```
void q_groupbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGroupBox* self, enum Qt__FocusReason reason ```
void q_groupbox_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QGroupBox* self, enum Qt__FocusPolicy policy ```
void q_groupbox_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_groupbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QGroupBox* self, QWidget* focusProxy ```
void q_groupbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QGroupBox* self, enum Qt__ContextMenuPolicy policy ```
void q_groupbox_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGroupBox* self ```
void q_groupbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGroupBox* self, QCursor* param1 ```
void q_groupbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QGroupBox* self ```
void q_groupbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QGroupBox* self ```
void q_groupbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QGroupBox* self ```
void q_groupbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGroupBox* self, QKeySequence* key ```
int32_t q_groupbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_groupbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_groupbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QGroupBox* self ```
bool q_groupbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QGroupBox* self, bool enable ```
void q_groupbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QGroupBox* self ```
QGraphicsProxyWidget* q_groupbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self ```
void q_groupbox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self ```
void q_groupbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self, int x, int y, int w, int h ```
void q_groupbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self, QRect* param1 ```
void q_groupbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGroupBox* self, QRegion* param1 ```
void q_groupbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self, int x, int y, int w, int h ```
void q_groupbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self, QRect* param1 ```
void q_groupbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGroupBox* self, QRegion* param1 ```
void q_groupbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QGroupBox* self, bool hidden ```
void q_groupbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QGroupBox* self ```
void q_groupbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QGroupBox* self ```
void q_groupbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QGroupBox* self ```
void q_groupbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QGroupBox* self ```
bool q_groupbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QGroupBox* self ```
void q_groupbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QGroupBox* self ```
void q_groupbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QGroupBox* self, QWidget* param1 ```
void q_groupbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGroupBox* self, int x, int y ```
void q_groupbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGroupBox* self, QPoint* param1 ```
void q_groupbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGroupBox* self, int w, int h ```
void q_groupbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGroupBox* self, QSize* param1 ```
void q_groupbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGroupBox* self, int x, int y, int w, int h ```
void q_groupbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGroupBox* self, QRect* geometry ```
void q_groupbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QGroupBox* self ```
char* q_groupbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QGroupBox* self, const char* geometry ```
bool q_groupbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QGroupBox* self ```
void q_groupbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QGroupBox* self, QWidget* param1 ```
bool q_groupbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QGroupBox* self, int state ```
void q_groupbox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QGroupBox* self, int state ```
void q_groupbox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QGroupBox* self ```
QSizePolicy* q_groupbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGroupBox* self, QSizePolicy* sizePolicy ```
void q_groupbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGroupBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_groupbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QGroupBox* self ```
QRegion* q_groupbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGroupBox* self, int left, int top, int right, int bottom ```
void q_groupbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGroupBox* self, QMargins* margins ```
void q_groupbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QGroupBox* self ```
QMargins* q_groupbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QGroupBox* self ```
QRect* q_groupbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QGroupBox* self ```
QLayout* q_groupbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QGroupBox* self, QLayout* layout ```
void q_groupbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QGroupBox* self ```
void q_groupbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGroupBox* self, QWidget* parent ```
void q_groupbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGroupBox* self, QWidget* parent, int f ```
void q_groupbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGroupBox* self, int dx, int dy ```
void q_groupbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGroupBox* self, int dx, int dy, QRect* param3 ```
void q_groupbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QGroupBox* self ```
bool q_groupbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QGroupBox* self, bool on ```
void q_groupbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, QAction* action ```
void q_groupbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QGroupBox* self, libqt_list /* of QAction* */ actions ```
void q_groupbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QGroupBox* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_groupbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QGroupBox* self, QAction* before, QAction* action ```
void q_groupbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QGroupBox* self, QAction* action ```
void q_groupbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QGroupBox* self ```
libqt_list /* of QAction* */ q_groupbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, const char* text ```
QAction* q_groupbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, QIcon* icon, const char* text ```
QAction* q_groupbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_groupbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGroupBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_groupbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QGroupBox* self ```
QWidget* q_groupbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QGroupBox* self, int typeVal ```
void q_groupbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGroupBox* self, enum Qt__WindowType param1 ```
void q_groupbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QGroupBox* self, int typeVal ```
void q_groupbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_groupbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGroupBox* self, int x, int y ```
QWidget* q_groupbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGroupBox* self, QPoint* p ```
QWidget* q_groupbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGroupBox* self, QPointF* p ```
QWidget* q_groupbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGroupBox* self, enum Qt__WidgetAttribute param1 ```
void q_groupbox_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QGroupBox* self, enum Qt__WidgetAttribute param1 ```
bool q_groupbox_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QGroupBox* self ```
void q_groupbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QGroupBox* self, QWidget* child ```
bool q_groupbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QGroupBox* self ```
bool q_groupbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QGroupBox* self, bool enabled ```
void q_groupbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QGroupBox* self ```
QBackingStore* q_groupbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QGroupBox* self ```
QWindow* q_groupbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QGroupBox* self ```
QScreen* q_groupbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QGroupBox* self, QScreen* screen ```
void q_groupbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_groupbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QGroupBox* self, const char* title ```
void q_groupbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, const char*) ```
void q_groupbox_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QGroupBox* self, QIcon* icon ```
void q_groupbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QIcon*) ```
void q_groupbox_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QGroupBox* self, const char* iconText ```
void q_groupbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, const char*) ```
void q_groupbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QGroupBox* self, QPoint* pos ```
void q_groupbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QPoint*) ```
void q_groupbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QGroupBox* self ```
int64_t q_groupbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QGroupBox* self, int hints ```
void q_groupbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_groupbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_groupbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_groupbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter, QPoint* targetOffset ```
void q_groupbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_groupbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGroupBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_groupbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGroupBox* self, QRect* rectangle ```
QPixmap* q_groupbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGroupBox* self, enum Qt__GestureType typeVal, int flags ```
void q_groupbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGroupBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_groupbox_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGroupBox* self, int id, bool enable ```
void q_groupbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGroupBox* self, int id, bool enable ```
void q_groupbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGroupBox* self, enum Qt__WindowType param1, bool on ```
void q_groupbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGroupBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_groupbox_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_groupbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_groupbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGroupBox* self ```
const char* q_groupbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGroupBox* self, char* name ```
void q_groupbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGroupBox* self ```
bool q_groupbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGroupBox* self ```
bool q_groupbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGroupBox* self, bool b ```
bool q_groupbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGroupBox* self ```
QThread* q_groupbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGroupBox* self, QThread* thread ```
bool q_groupbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGroupBox* self, int interval ```
int32_t q_groupbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGroupBox* self, int id ```
void q_groupbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGroupBox* self, enum Qt__TimerId id ```
void q_groupbox_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGroupBox* self ```
libqt_list /* of QObject* */ q_groupbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGroupBox* self, QObject* filterObj ```
void q_groupbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGroupBox* self, QObject* obj ```
void q_groupbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_groupbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGroupBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_groupbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_groupbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_groupbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGroupBox* self ```
void q_groupbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGroupBox* self ```
void q_groupbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGroupBox* self, const char* name, QVariant* value ```
bool q_groupbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGroupBox* self, const char* name ```
QVariant* q_groupbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGroupBox* self ```
const char** q_groupbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGroupBox* self ```
QBindingStorage* q_groupbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGroupBox* self ```
const QBindingStorage* q_groupbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGroupBox* self ```
void q_groupbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*) ```
void q_groupbox_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGroupBox* self ```
QObject* q_groupbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGroupBox* self, const char* classname ```
bool q_groupbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGroupBox* self ```
void q_groupbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGroupBox* self, QThread* thread, Disambiguated_t* param2 ```
bool q_groupbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGroupBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_groupbox_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_groupbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGroupBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_groupbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGroupBox* self, QObject* param1 ```
void q_groupbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QObject*) ```
void q_groupbox_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QGroupBox* self ```
bool q_groupbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QGroupBox* self ```
double q_groupbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QGroupBox* self ```
double q_groupbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_groupbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_groupbox_encode_metric_f(int64_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)() ```
void q_groupbox_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, bool visible ```
void q_groupbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, bool visible ```
void q_groupbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QSize* q_groupbox_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QSize* (*slot)() ```
void q_groupbox_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, int param1 ```
int32_t q_groupbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, int param1 ```
int32_t q_groupbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, int) ```
void q_groupbox_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)() ```
void q_groupbox_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QPaintEngine* q_groupbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QPaintEngine* q_groupbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QPaintEngine* (*slot)() ```
void q_groupbox_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMouseEvent* event ```
void q_groupbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMouseEvent*) ```
void q_groupbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QWheelEvent* event ```
void q_groupbox_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QWheelEvent* event ```
void q_groupbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QWheelEvent*) ```
void q_groupbox_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QKeyEvent*) ```
void q_groupbox_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QKeyEvent* event ```
void q_groupbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QKeyEvent*) ```
void q_groupbox_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QFocusEvent* event ```
void q_groupbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QFocusEvent*) ```
void q_groupbox_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QEnterEvent* event ```
void q_groupbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QEnterEvent* event ```
void q_groupbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEnterEvent*) ```
void q_groupbox_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMoveEvent* event ```
void q_groupbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMoveEvent* event ```
void q_groupbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMoveEvent*) ```
void q_groupbox_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QCloseEvent* event ```
void q_groupbox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QCloseEvent* event ```
void q_groupbox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QCloseEvent*) ```
void q_groupbox_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QContextMenuEvent* event ```
void q_groupbox_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QContextMenuEvent* event ```
void q_groupbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QContextMenuEvent*) ```
void q_groupbox_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QTabletEvent* event ```
void q_groupbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QTabletEvent* event ```
void q_groupbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QTabletEvent*) ```
void q_groupbox_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QActionEvent* event ```
void q_groupbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QActionEvent* event ```
void q_groupbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QActionEvent*) ```
void q_groupbox_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDragEnterEvent* event ```
void q_groupbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDragEnterEvent* event ```
void q_groupbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDragEnterEvent*) ```
void q_groupbox_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDragMoveEvent* event ```
void q_groupbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDragMoveEvent* event ```
void q_groupbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDragMoveEvent*) ```
void q_groupbox_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDragLeaveEvent* event ```
void q_groupbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDragLeaveEvent* event ```
void q_groupbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDragLeaveEvent*) ```
void q_groupbox_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QDropEvent* event ```
void q_groupbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QDropEvent* event ```
void q_groupbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QDropEvent*) ```
void q_groupbox_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QShowEvent* event ```
void q_groupbox_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QShowEvent* event ```
void q_groupbox_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QShowEvent*) ```
void q_groupbox_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QHideEvent* event ```
void q_groupbox_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QHideEvent* event ```
void q_groupbox_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QHideEvent*) ```
void q_groupbox_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_groupbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_groupbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, const char*, void*, intptr_t*) ```
void q_groupbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_groupbox_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_groupbox_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_groupbox_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QPainter* painter ```
void q_groupbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QPainter* painter ```
void q_groupbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QPainter*) ```
void q_groupbox_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QPoint* offset ```
QPaintDevice* q_groupbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QPoint* offset ```
QPaintDevice* q_groupbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QPaintDevice* (*slot)(QGroupBox*, QPoint*) ```
void q_groupbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QPainter* q_groupbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QPainter* q_groupbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QPainter* (*slot)() ```
void q_groupbox_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QInputMethodEvent* param1 ```
void q_groupbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QInputMethodEvent* param1 ```
void q_groupbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QInputMethodEvent*) ```
void q_groupbox_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_groupbox_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_groupbox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QVariant* (*slot)(QGroupBox*, enum Qt__InputMethodQuery) ```
void q_groupbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, bool next ```
bool q_groupbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, bool next ```
bool q_groupbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, bool) ```
void q_groupbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QObject* watched, QEvent* event ```
bool q_groupbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QObject* watched, QEvent* event ```
bool q_groupbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, QObject*, QEvent*) ```
void q_groupbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QTimerEvent* event ```
void q_groupbox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QTimerEvent* event ```
void q_groupbox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QTimerEvent*) ```
void q_groupbox_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QEvent* event ```
void q_groupbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QEvent*) ```
void q_groupbox_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMetaMethod*) ```
void q_groupbox_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
void q_groupbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, QMetaMethod*) ```
void q_groupbox_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)() ```
void q_groupbox_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)() ```
void q_groupbox_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
void q_groupbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, void (*slot)() ```
void q_groupbox_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)() ```
void q_groupbox_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
bool q_groupbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)() ```
void q_groupbox_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
QObject* q_groupbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
QObject* q_groupbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, QObject* (*slot)() ```
void q_groupbox_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self ```
int32_t q_groupbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)() ```
void q_groupbox_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, const char* signal ```
int32_t q_groupbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, const char* signal ```
int32_t q_groupbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, int32_t (*slot)(QGroupBox*, const char*) ```
void q_groupbox_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
bool q_groupbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, QMetaMethod* signal ```
bool q_groupbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, bool (*slot)(QGroupBox*, QMetaMethod*) ```
void q_groupbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGroupBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_groupbox_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGroupBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_groupbox_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGroupBox* self, double (*slot)(QGroupBox*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_groupbox_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGroupBox* self, void (*slot)(QGroupBox*, const char*) ```
void q_groupbox_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgroupbox.html#dtor.QGroupBox)
///
/// Delete this object from C++ memory.
///
/// ``` QGroupBox* self ```
void q_groupbox_delete(void* self);

#endif
