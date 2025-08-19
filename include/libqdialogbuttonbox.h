#pragma once
#ifndef SRCQT6C_LIBQDIALOGBUTTONBOX_H
#define SRCQT6C_LIBQDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdialogbuttonbox.html

/// q_dialogbuttonbox_new constructs a new QDialogButtonBox object.
///
/// @param parent QWidget*
QDialogButtonBox* q_dialogbuttonbox_new(void* parent);

/// q_dialogbuttonbox_new2 constructs a new QDialogButtonBox object.
///
QDialogButtonBox* q_dialogbuttonbox_new2();

/// q_dialogbuttonbox_new3 constructs a new QDialogButtonBox object.
///
/// @param orientation enum Qt__Orientation
QDialogButtonBox* q_dialogbuttonbox_new3(int32_t orientation);

/// q_dialogbuttonbox_new4 constructs a new QDialogButtonBox object.
///
/// @param buttons flag of enum QDialogButtonBox__StandardButton
QDialogButtonBox* q_dialogbuttonbox_new4(int64_t buttons);

/// q_dialogbuttonbox_new5 constructs a new QDialogButtonBox object.
///
/// @param buttons flag of enum QDialogButtonBox__StandardButton
/// @param orientation enum Qt__Orientation
QDialogButtonBox* q_dialogbuttonbox_new5(int64_t buttons, int32_t orientation);

/// q_dialogbuttonbox_new6 constructs a new QDialogButtonBox object.
///
/// @param orientation enum Qt__Orientation
/// @param parent QWidget*
QDialogButtonBox* q_dialogbuttonbox_new6(int32_t orientation, void* parent);

/// q_dialogbuttonbox_new7 constructs a new QDialogButtonBox object.
///
/// @param buttons flag of enum QDialogButtonBox__StandardButton
/// @param parent QWidget*
QDialogButtonBox* q_dialogbuttonbox_new7(int64_t buttons, void* parent);

/// q_dialogbuttonbox_new8 constructs a new QDialogButtonBox object.
///
/// @param buttons flag of enum QDialogButtonBox__StandardButton
/// @param orientation enum Qt__Orientation
/// @param parent QWidget*
QDialogButtonBox* q_dialogbuttonbox_new8(int64_t buttons, int32_t orientation, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDialogButtonBox*
const QMetaObject* q_dialogbuttonbox_meta_object(void* self);

/// @param self QDialogButtonBox*
/// @param param1 const char*
void* q_dialogbuttonbox_metacast(void* self, const char* param1);

/// @param self QDialogButtonBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_dialogbuttonbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDialogButtonBox*
/// @param callback int32_t fn(QDialogButtonBox*, enum QMetaObject__Call, int, void*)
void q_dialogbuttonbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDialogButtonBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_dialogbuttonbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_dialogbuttonbox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setOrientation)
///
/// @param self QDialogButtonBox*
/// @param orientation enum Qt__Orientation
void q_dialogbuttonbox_set_orientation(void* self, int32_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#orientation)
///
/// @param self QDialogButtonBox*
///
/// @return enum Qt__Orientation
int32_t q_dialogbuttonbox_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// @param self QDialogButtonBox*
/// @param button QAbstractButton*
/// @param role enum QDialogButtonBox__ButtonRole
void q_dialogbuttonbox_add_button(void* self, void* button, int32_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// @param self QDialogButtonBox*
/// @param text const char*
/// @param role enum QDialogButtonBox__ButtonRole
QPushButton* q_dialogbuttonbox_add_button2(void* self, const char* text, int32_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// @param self QDialogButtonBox*
/// @param button enum QDialogButtonBox__StandardButton
QPushButton* q_dialogbuttonbox_add_button3(void* self, int32_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#removeButton)
///
/// @param self QDialogButtonBox*
/// @param button QAbstractButton*
void q_dialogbuttonbox_remove_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clear)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#buttons)
///
/// @param self QDialogButtonBox*
libqt_list /* of QAbstractButton* */ q_dialogbuttonbox_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#buttonRole)
///
/// @param self QDialogButtonBox*
/// @param button QAbstractButton*
///
/// @return enum QDialogButtonBox__ButtonRole
int32_t q_dialogbuttonbox_button_role(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setStandardButtons)
///
/// @param self QDialogButtonBox*
/// @param buttons flag of enum QDialogButtonBox__StandardButton
void q_dialogbuttonbox_set_standard_buttons(void* self, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#standardButtons)
///
/// @param self QDialogButtonBox*
///
/// @return flag of enum QDialogButtonBox__StandardButton
int64_t q_dialogbuttonbox_standard_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#standardButton)
///
/// @param self QDialogButtonBox*
/// @param button QAbstractButton*
///
/// @return enum QDialogButtonBox__StandardButton
int32_t q_dialogbuttonbox_standard_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#button)
///
/// @param self QDialogButtonBox*
/// @param which enum QDialogButtonBox__StandardButton
QPushButton* q_dialogbuttonbox_button(void* self, int32_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setCenterButtons)
///
/// @param self QDialogButtonBox*
/// @param center bool
void q_dialogbuttonbox_set_center_buttons(void* self, bool center);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#centerButtons)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_center_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clicked)
///
/// @param self QDialogButtonBox*
/// @param button QAbstractButton*
void q_dialogbuttonbox_clicked(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clicked)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QAbstractButton*)
void q_dialogbuttonbox_on_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#accepted)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#accepted)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*)
void q_dialogbuttonbox_on_accepted(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#helpRequested)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_help_requested(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#helpRequested)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*)
void q_dialogbuttonbox_on_help_requested(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#rejected)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_rejected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#rejected)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*)
void q_dialogbuttonbox_on_rejected(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#changeEvent)
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
void q_dialogbuttonbox_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QEvent*)
void q_dialogbuttonbox_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
void q_dialogbuttonbox_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#event)
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
bool q_dialogbuttonbox_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn(QDialogButtonBox*, QEvent*)
void q_dialogbuttonbox_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#event)
///
/// Base class method implementation
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
bool q_dialogbuttonbox_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_dialogbuttonbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_dialogbuttonbox_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDialogButtonBox*
uintptr_t q_dialogbuttonbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDialogButtonBox*
uintptr_t q_dialogbuttonbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDialogButtonBox*
uintptr_t q_dialogbuttonbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDialogButtonBox*
QStyle* q_dialogbuttonbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDialogButtonBox*
/// @param style QStyle*
void q_dialogbuttonbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDialogButtonBox*
///
/// @return enum Qt__WindowModality
int32_t q_dialogbuttonbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDialogButtonBox*
/// @param windowModality enum Qt__WindowModality
void q_dialogbuttonbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDialogButtonBox*
/// @param param1 QWidget*
bool q_dialogbuttonbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDialogButtonBox*
/// @param enabled bool
void q_dialogbuttonbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDialogButtonBox*
/// @param disabled bool
void q_dialogbuttonbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDialogButtonBox*
/// @param windowModified bool
void q_dialogbuttonbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDialogButtonBox*
QRect* q_dialogbuttonbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDialogButtonBox*
const QRect* q_dialogbuttonbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDialogButtonBox*
QRect* q_dialogbuttonbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDialogButtonBox*
QPoint* q_dialogbuttonbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDialogButtonBox*
QRect* q_dialogbuttonbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDialogButtonBox*
QRect* q_dialogbuttonbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDialogButtonBox*
QRegion* q_dialogbuttonbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDialogButtonBox*
/// @param minimumSize QSize*
void q_dialogbuttonbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDialogButtonBox*
/// @param minw int
/// @param minh int
void q_dialogbuttonbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDialogButtonBox*
/// @param maximumSize QSize*
void q_dialogbuttonbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDialogButtonBox*
/// @param maxw int
/// @param maxh int
void q_dialogbuttonbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDialogButtonBox*
/// @param minw int
void q_dialogbuttonbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDialogButtonBox*
/// @param minh int
void q_dialogbuttonbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDialogButtonBox*
/// @param maxw int
void q_dialogbuttonbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDialogButtonBox*
/// @param maxh int
void q_dialogbuttonbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDialogButtonBox*
/// @param sizeIncrement QSize*
void q_dialogbuttonbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDialogButtonBox*
/// @param w int
/// @param h int
void q_dialogbuttonbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDialogButtonBox*
/// @param baseSize QSize*
void q_dialogbuttonbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDialogButtonBox*
/// @param basew int
/// @param baseh int
void q_dialogbuttonbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDialogButtonBox*
/// @param fixedSize QSize*
void q_dialogbuttonbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDialogButtonBox*
/// @param w int
/// @param h int
void q_dialogbuttonbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDialogButtonBox*
/// @param w int
void q_dialogbuttonbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDialogButtonBox*
/// @param h int
void q_dialogbuttonbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDialogButtonBox*
/// @param param1 QPointF*
QPointF* q_dialogbuttonbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDialogButtonBox*
/// @param param1 QPoint*
QPoint* q_dialogbuttonbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDialogButtonBox*
/// @param param1 QPointF*
QPointF* q_dialogbuttonbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDialogButtonBox*
/// @param param1 QPoint*
QPoint* q_dialogbuttonbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDialogButtonBox*
/// @param param1 QPointF*
QPointF* q_dialogbuttonbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDialogButtonBox*
/// @param param1 QPoint*
QPoint* q_dialogbuttonbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDialogButtonBox*
/// @param param1 QPointF*
QPointF* q_dialogbuttonbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDialogButtonBox*
/// @param param1 QPoint*
QPoint* q_dialogbuttonbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDialogButtonBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_dialogbuttonbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDialogButtonBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_dialogbuttonbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDialogButtonBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_dialogbuttonbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDialogButtonBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_dialogbuttonbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDialogButtonBox*
const QPalette* q_dialogbuttonbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDialogButtonBox*
/// @param palette QPalette*
void q_dialogbuttonbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDialogButtonBox*
/// @param backgroundRole enum QPalette__ColorRole
void q_dialogbuttonbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDialogButtonBox*
///
/// @return enum QPalette__ColorRole
int32_t q_dialogbuttonbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDialogButtonBox*
/// @param foregroundRole enum QPalette__ColorRole
void q_dialogbuttonbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDialogButtonBox*
///
/// @return enum QPalette__ColorRole
int32_t q_dialogbuttonbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDialogButtonBox*
const QFont* q_dialogbuttonbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDialogButtonBox*
/// @param font QFont*
void q_dialogbuttonbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDialogButtonBox*
QFontMetrics* q_dialogbuttonbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDialogButtonBox*
QFontInfo* q_dialogbuttonbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDialogButtonBox*
QCursor* q_dialogbuttonbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDialogButtonBox*
/// @param cursor QCursor*
void q_dialogbuttonbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDialogButtonBox*
/// @param enable bool
void q_dialogbuttonbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDialogButtonBox*
/// @param enable bool
void q_dialogbuttonbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDialogButtonBox*
/// @param mask QBitmap*
void q_dialogbuttonbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDialogButtonBox*
/// @param mask QRegion*
void q_dialogbuttonbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDialogButtonBox*
QRegion* q_dialogbuttonbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param target QPaintDevice*
void q_dialogbuttonbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param painter QPainter*
void q_dialogbuttonbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDialogButtonBox*
QPixmap* q_dialogbuttonbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDialogButtonBox*
QGraphicsEffect* q_dialogbuttonbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDialogButtonBox*
/// @param effect QGraphicsEffect*
void q_dialogbuttonbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDialogButtonBox*
/// @param typeVal enum Qt__GestureType
void q_dialogbuttonbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDialogButtonBox*
/// @param typeVal enum Qt__GestureType
void q_dialogbuttonbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDialogButtonBox*
/// @param windowTitle const char*
void q_dialogbuttonbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDialogButtonBox*
/// @param styleSheet const char*
void q_dialogbuttonbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDialogButtonBox*
/// @param icon QIcon*
void q_dialogbuttonbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDialogButtonBox*
QIcon* q_dialogbuttonbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDialogButtonBox*
/// @param windowIconText const char*
void q_dialogbuttonbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDialogButtonBox*
/// @param windowRole const char*
void q_dialogbuttonbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDialogButtonBox*
/// @param filePath const char*
void q_dialogbuttonbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDialogButtonBox*
/// @param level double
void q_dialogbuttonbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDialogButtonBox*
double q_dialogbuttonbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDialogButtonBox*
/// @param toolTip const char*
void q_dialogbuttonbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDialogButtonBox*
/// @param msec int
void q_dialogbuttonbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDialogButtonBox*
/// @param statusTip const char*
void q_dialogbuttonbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDialogButtonBox*
/// @param whatsThis const char*
void q_dialogbuttonbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDialogButtonBox*
/// @param name const char*
void q_dialogbuttonbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDialogButtonBox*
/// @param description const char*
void q_dialogbuttonbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDialogButtonBox*
/// @param direction enum Qt__LayoutDirection
void q_dialogbuttonbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDialogButtonBox*
///
/// @return enum Qt__LayoutDirection
int32_t q_dialogbuttonbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDialogButtonBox*
/// @param locale QLocale*
void q_dialogbuttonbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDialogButtonBox*
QLocale* q_dialogbuttonbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDialogButtonBox*
/// @param reason enum Qt__FocusReason
void q_dialogbuttonbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDialogButtonBox*
///
/// @return enum Qt__FocusPolicy
int32_t q_dialogbuttonbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDialogButtonBox*
/// @param policy enum Qt__FocusPolicy
void q_dialogbuttonbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_dialogbuttonbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDialogButtonBox*
/// @param focusProxy QWidget*
void q_dialogbuttonbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDialogButtonBox*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_dialogbuttonbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDialogButtonBox*
/// @param policy enum Qt__ContextMenuPolicy
void q_dialogbuttonbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDialogButtonBox*
/// @param param1 QCursor*
void q_dialogbuttonbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDialogButtonBox*
/// @param key QKeySequence*
int32_t q_dialogbuttonbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDialogButtonBox*
/// @param id int
void q_dialogbuttonbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDialogButtonBox*
/// @param id int
void q_dialogbuttonbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDialogButtonBox*
/// @param id int
void q_dialogbuttonbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_dialogbuttonbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_dialogbuttonbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDialogButtonBox*
/// @param enable bool
void q_dialogbuttonbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDialogButtonBox*
QGraphicsProxyWidget* q_dialogbuttonbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDialogButtonBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_dialogbuttonbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDialogButtonBox*
/// @param param1 QRect*
void q_dialogbuttonbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDialogButtonBox*
/// @param param1 QRegion*
void q_dialogbuttonbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDialogButtonBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_dialogbuttonbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDialogButtonBox*
/// @param param1 QRect*
void q_dialogbuttonbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDialogButtonBox*
/// @param param1 QRegion*
void q_dialogbuttonbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDialogButtonBox*
/// @param hidden bool
void q_dialogbuttonbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDialogButtonBox*
/// @param param1 QWidget*
void q_dialogbuttonbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDialogButtonBox*
/// @param x int
/// @param y int
void q_dialogbuttonbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDialogButtonBox*
/// @param param1 QPoint*
void q_dialogbuttonbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDialogButtonBox*
/// @param w int
/// @param h int
void q_dialogbuttonbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDialogButtonBox*
/// @param param1 QSize*
void q_dialogbuttonbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDialogButtonBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_dialogbuttonbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDialogButtonBox*
/// @param geometry QRect*
void q_dialogbuttonbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
char* q_dialogbuttonbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDialogButtonBox*
/// @param geometry const char*
bool q_dialogbuttonbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDialogButtonBox*
/// @param param1 QWidget*
bool q_dialogbuttonbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDialogButtonBox*
///
/// @return flag of enum Qt__WindowState
int64_t q_dialogbuttonbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDialogButtonBox*
/// @param state flag of enum Qt__WindowState
void q_dialogbuttonbox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDialogButtonBox*
/// @param state flag of enum Qt__WindowState
void q_dialogbuttonbox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDialogButtonBox*
QSizePolicy* q_dialogbuttonbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDialogButtonBox*
/// @param sizePolicy QSizePolicy*
void q_dialogbuttonbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDialogButtonBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_dialogbuttonbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDialogButtonBox*
QRegion* q_dialogbuttonbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDialogButtonBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_dialogbuttonbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDialogButtonBox*
/// @param margins QMargins*
void q_dialogbuttonbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDialogButtonBox*
QMargins* q_dialogbuttonbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDialogButtonBox*
QRect* q_dialogbuttonbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDialogButtonBox*
QLayout* q_dialogbuttonbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDialogButtonBox*
/// @param layout QLayout*
void q_dialogbuttonbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDialogButtonBox*
/// @param parent QWidget*
void q_dialogbuttonbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDialogButtonBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_dialogbuttonbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDialogButtonBox*
/// @param dx int
/// @param dy int
void q_dialogbuttonbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDialogButtonBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_dialogbuttonbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDialogButtonBox*
/// @param on bool
void q_dialogbuttonbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDialogButtonBox*
/// @param action QAction*
void q_dialogbuttonbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDialogButtonBox*
/// @param actions libqt_list /* of QAction* */
void q_dialogbuttonbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDialogButtonBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_dialogbuttonbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDialogButtonBox*
/// @param before QAction*
/// @param action QAction*
void q_dialogbuttonbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDialogButtonBox*
/// @param action QAction*
void q_dialogbuttonbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDialogButtonBox*
libqt_list /* of QAction* */ q_dialogbuttonbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDialogButtonBox*
/// @param text const char*
QAction* q_dialogbuttonbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDialogButtonBox*
/// @param icon QIcon*
/// @param text const char*
QAction* q_dialogbuttonbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDialogButtonBox*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_dialogbuttonbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDialogButtonBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_dialogbuttonbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDialogButtonBox*
QWidget* q_dialogbuttonbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDialogButtonBox*
/// @param typeVal flag of enum Qt__WindowType
void q_dialogbuttonbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDialogButtonBox*
///
/// @return flag of enum Qt__WindowType
int64_t q_dialogbuttonbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDialogButtonBox*
/// @param param1 enum Qt__WindowType
void q_dialogbuttonbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDialogButtonBox*
/// @param typeVal flag of enum Qt__WindowType
void q_dialogbuttonbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDialogButtonBox*
///
/// @return enum Qt__WindowType
int64_t q_dialogbuttonbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_dialogbuttonbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDialogButtonBox*
/// @param x int
/// @param y int
QWidget* q_dialogbuttonbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDialogButtonBox*
/// @param p QPoint*
QWidget* q_dialogbuttonbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDialogButtonBox*
/// @param p QPointF*
QWidget* q_dialogbuttonbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDialogButtonBox*
/// @param param1 enum Qt__WidgetAttribute
void q_dialogbuttonbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDialogButtonBox*
/// @param param1 enum Qt__WidgetAttribute
bool q_dialogbuttonbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDialogButtonBox*
/// @param child QWidget*
bool q_dialogbuttonbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDialogButtonBox*
/// @param enabled bool
void q_dialogbuttonbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDialogButtonBox*
QBackingStore* q_dialogbuttonbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDialogButtonBox*
QWindow* q_dialogbuttonbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDialogButtonBox*
QScreen* q_dialogbuttonbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDialogButtonBox*
/// @param screen QScreen*
void q_dialogbuttonbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_dialogbuttonbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDialogButtonBox*
/// @param title const char*
void q_dialogbuttonbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, const char*)
void q_dialogbuttonbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDialogButtonBox*
/// @param icon QIcon*
void q_dialogbuttonbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QIcon*)
void q_dialogbuttonbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDialogButtonBox*
/// @param iconText const char*
void q_dialogbuttonbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, const char*)
void q_dialogbuttonbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDialogButtonBox*
/// @param pos QPoint*
void q_dialogbuttonbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QPoint*)
void q_dialogbuttonbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDialogButtonBox*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_dialogbuttonbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDialogButtonBox*
/// @param hints flag of enum Qt__InputMethodHint
void q_dialogbuttonbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_dialogbuttonbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_dialogbuttonbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_dialogbuttonbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_dialogbuttonbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_dialogbuttonbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDialogButtonBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_dialogbuttonbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDialogButtonBox*
/// @param rectangle QRect*
QPixmap* q_dialogbuttonbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDialogButtonBox*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_dialogbuttonbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDialogButtonBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_dialogbuttonbox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDialogButtonBox*
/// @param id int
/// @param enable bool
void q_dialogbuttonbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDialogButtonBox*
/// @param id int
/// @param enable bool
void q_dialogbuttonbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDialogButtonBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_dialogbuttonbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDialogButtonBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_dialogbuttonbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_dialogbuttonbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_dialogbuttonbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char* q_dialogbuttonbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDialogButtonBox*
/// @param name char*
void q_dialogbuttonbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDialogButtonBox*
/// @param b bool
bool q_dialogbuttonbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDialogButtonBox*
QThread* q_dialogbuttonbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDialogButtonBox*
/// @param thread QThread*
bool q_dialogbuttonbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDialogButtonBox*
/// @param interval int
int32_t q_dialogbuttonbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDialogButtonBox*
/// @param id int
void q_dialogbuttonbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDialogButtonBox*
/// @param id enum Qt__TimerId
void q_dialogbuttonbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDialogButtonBox*
libqt_list /* of QObject* */ q_dialogbuttonbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDialogButtonBox*
/// @param filterObj QObject*
void q_dialogbuttonbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDialogButtonBox*
/// @param obj QObject*
void q_dialogbuttonbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_dialogbuttonbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDialogButtonBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_dialogbuttonbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_dialogbuttonbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_dialogbuttonbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDialogButtonBox*
/// @param name const char*
/// @param value QVariant*
bool q_dialogbuttonbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDialogButtonBox*
/// @param name const char*
QVariant* q_dialogbuttonbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDialogButtonBox*
const char** q_dialogbuttonbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDialogButtonBox*
QBindingStorage* q_dialogbuttonbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDialogButtonBox*
const QBindingStorage* q_dialogbuttonbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*)
void q_dialogbuttonbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDialogButtonBox*
QObject* q_dialogbuttonbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDialogButtonBox*
/// @param classname const char*
bool q_dialogbuttonbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDialogButtonBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_dialogbuttonbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDialogButtonBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_dialogbuttonbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_dialogbuttonbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDialogButtonBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_dialogbuttonbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDialogButtonBox*
/// @param param1 QObject*
void q_dialogbuttonbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QObject*)
void q_dialogbuttonbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDialogButtonBox*
double q_dialogbuttonbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDialogButtonBox*
double q_dialogbuttonbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_dialogbuttonbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_dialogbuttonbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback int32_t fn()
void q_dialogbuttonbox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param visible bool
void q_dialogbuttonbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param visible bool
void q_dialogbuttonbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, bool)
void q_dialogbuttonbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback QSize* fn()
void q_dialogbuttonbox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
QSize* q_dialogbuttonbox_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback QSize* fn()
void q_dialogbuttonbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 int
int32_t q_dialogbuttonbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 int
int32_t q_dialogbuttonbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback int32_t fn(QDialogButtonBox*, int)
void q_dialogbuttonbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn()
void q_dialogbuttonbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
QPaintEngine* q_dialogbuttonbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
QPaintEngine* q_dialogbuttonbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback QPaintEngine* fn()
void q_dialogbuttonbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QMouseEvent*)
void q_dialogbuttonbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QMouseEvent*)
void q_dialogbuttonbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QMouseEvent*)
void q_dialogbuttonbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMouseEvent*
void q_dialogbuttonbox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QMouseEvent*)
void q_dialogbuttonbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QWheelEvent*
void q_dialogbuttonbox_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QWheelEvent*
void q_dialogbuttonbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QWheelEvent*)
void q_dialogbuttonbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QKeyEvent*
void q_dialogbuttonbox_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QKeyEvent*
void q_dialogbuttonbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QKeyEvent*)
void q_dialogbuttonbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QKeyEvent*
void q_dialogbuttonbox_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QKeyEvent*
void q_dialogbuttonbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QKeyEvent*)
void q_dialogbuttonbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QFocusEvent*
void q_dialogbuttonbox_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QFocusEvent*
void q_dialogbuttonbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QFocusEvent*)
void q_dialogbuttonbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QFocusEvent*
void q_dialogbuttonbox_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QFocusEvent*
void q_dialogbuttonbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QFocusEvent*)
void q_dialogbuttonbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QEnterEvent*
void q_dialogbuttonbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QEnterEvent*
void q_dialogbuttonbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QEnterEvent*)
void q_dialogbuttonbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
void q_dialogbuttonbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
void q_dialogbuttonbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QEvent*)
void q_dialogbuttonbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QPaintEvent*
void q_dialogbuttonbox_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QPaintEvent*
void q_dialogbuttonbox_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QPaintEvent*)
void q_dialogbuttonbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMoveEvent*
void q_dialogbuttonbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QMoveEvent*
void q_dialogbuttonbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QMoveEvent*)
void q_dialogbuttonbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QResizeEvent*
void q_dialogbuttonbox_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QResizeEvent*
void q_dialogbuttonbox_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QResizeEvent*)
void q_dialogbuttonbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QCloseEvent*
void q_dialogbuttonbox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QCloseEvent*
void q_dialogbuttonbox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QCloseEvent*)
void q_dialogbuttonbox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QContextMenuEvent*
void q_dialogbuttonbox_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QContextMenuEvent*
void q_dialogbuttonbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QContextMenuEvent*)
void q_dialogbuttonbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QTabletEvent*
void q_dialogbuttonbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QTabletEvent*
void q_dialogbuttonbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QTabletEvent*)
void q_dialogbuttonbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QActionEvent*
void q_dialogbuttonbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QActionEvent*
void q_dialogbuttonbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QActionEvent*)
void q_dialogbuttonbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDragEnterEvent*
void q_dialogbuttonbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDragEnterEvent*
void q_dialogbuttonbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QDragEnterEvent*)
void q_dialogbuttonbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDragMoveEvent*
void q_dialogbuttonbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDragMoveEvent*
void q_dialogbuttonbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QDragMoveEvent*)
void q_dialogbuttonbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDragLeaveEvent*
void q_dialogbuttonbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDragLeaveEvent*
void q_dialogbuttonbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QDragLeaveEvent*)
void q_dialogbuttonbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDropEvent*
void q_dialogbuttonbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QDropEvent*
void q_dialogbuttonbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QDropEvent*)
void q_dialogbuttonbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QShowEvent*
void q_dialogbuttonbox_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QShowEvent*
void q_dialogbuttonbox_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QShowEvent*)
void q_dialogbuttonbox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QHideEvent*
void q_dialogbuttonbox_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QHideEvent*
void q_dialogbuttonbox_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QHideEvent*)
void q_dialogbuttonbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_dialogbuttonbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_dialogbuttonbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn(QDialogButtonBox*, const char*, void*, intptr_t*)
void q_dialogbuttonbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_dialogbuttonbox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_dialogbuttonbox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback int32_t fn(QDialogButtonBox*, enum QPaintDevice__PaintDeviceMetric)
void q_dialogbuttonbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param painter QPainter*
void q_dialogbuttonbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param painter QPainter*
void q_dialogbuttonbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QPainter*)
void q_dialogbuttonbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param offset QPoint*
QPaintDevice* q_dialogbuttonbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param offset QPoint*
QPaintDevice* q_dialogbuttonbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback QPaintDevice* fn(QDialogButtonBox*, QPoint*)
void q_dialogbuttonbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
QPainter* q_dialogbuttonbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
QPainter* q_dialogbuttonbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback QPainter* fn()
void q_dialogbuttonbox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 QInputMethodEvent*
void q_dialogbuttonbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 QInputMethodEvent*
void q_dialogbuttonbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QInputMethodEvent*)
void q_dialogbuttonbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_dialogbuttonbox_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_dialogbuttonbox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback QVariant* fn(QDialogButtonBox*, enum Qt__InputMethodQuery)
void q_dialogbuttonbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param next bool
bool q_dialogbuttonbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param next bool
bool q_dialogbuttonbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn(QDialogButtonBox*, bool)
void q_dialogbuttonbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param watched QObject*
/// @param event QEvent*
bool q_dialogbuttonbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param watched QObject*
/// @param event QEvent*
bool q_dialogbuttonbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn(QDialogButtonBox*, QObject*, QEvent*)
void q_dialogbuttonbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QTimerEvent*
void q_dialogbuttonbox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QTimerEvent*
void q_dialogbuttonbox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QTimerEvent*)
void q_dialogbuttonbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QChildEvent*
void q_dialogbuttonbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QChildEvent*
void q_dialogbuttonbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QChildEvent*)
void q_dialogbuttonbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
void q_dialogbuttonbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param event QEvent*
void q_dialogbuttonbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QEvent*)
void q_dialogbuttonbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal QMetaMethod*
void q_dialogbuttonbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal QMetaMethod*
void q_dialogbuttonbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QMetaMethod*)
void q_dialogbuttonbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal QMetaMethod*
void q_dialogbuttonbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal QMetaMethod*
void q_dialogbuttonbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, QMetaMethod*)
void q_dialogbuttonbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn()
void q_dialogbuttonbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn()
void q_dialogbuttonbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback void fn()
void q_dialogbuttonbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn()
void q_dialogbuttonbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
bool q_dialogbuttonbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn()
void q_dialogbuttonbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
QObject* q_dialogbuttonbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
QObject* q_dialogbuttonbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback QObject* fn()
void q_dialogbuttonbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
int32_t q_dialogbuttonbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback int32_t fn()
void q_dialogbuttonbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal const char*
int32_t q_dialogbuttonbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal const char*
int32_t q_dialogbuttonbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback int32_t fn(QDialogButtonBox*, const char*)
void q_dialogbuttonbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal QMetaMethod*
bool q_dialogbuttonbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param signal QMetaMethod*
bool q_dialogbuttonbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback bool fn(QDialogButtonBox*, QMetaMethod*)
void q_dialogbuttonbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_dialogbuttonbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_dialogbuttonbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDialogButtonBox*
/// @param callback double fn(QDialogButtonBox*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_dialogbuttonbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDialogButtonBox*
/// @param callback void fn(QDialogButtonBox*, const char*)
void q_dialogbuttonbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#dtor.QDialogButtonBox)
///
/// Delete this object from C++ memory.
///
/// @param self QDialogButtonBox*
void q_dialogbuttonbox_delete(void* self);

/// https://doc.qt.io/qt-6/qdialogbuttonbox.html#types

typedef enum {
    QDIALOGBUTTONBOX_BUTTONROLE_INVALIDROLE = -1,
    QDIALOGBUTTONBOX_BUTTONROLE_ACCEPTROLE = 0,
    QDIALOGBUTTONBOX_BUTTONROLE_REJECTROLE = 1,
    QDIALOGBUTTONBOX_BUTTONROLE_DESTRUCTIVEROLE = 2,
    QDIALOGBUTTONBOX_BUTTONROLE_ACTIONROLE = 3,
    QDIALOGBUTTONBOX_BUTTONROLE_HELPROLE = 4,
    QDIALOGBUTTONBOX_BUTTONROLE_YESROLE = 5,
    QDIALOGBUTTONBOX_BUTTONROLE_NOROLE = 6,
    QDIALOGBUTTONBOX_BUTTONROLE_RESETROLE = 7,
    QDIALOGBUTTONBOX_BUTTONROLE_APPLYROLE = 8,
    QDIALOGBUTTONBOX_BUTTONROLE_NROLES = 9
} QDialogButtonBox__ButtonRole;

typedef enum {
    QDIALOGBUTTONBOX_STANDARDBUTTON_NOBUTTON = 0,
    QDIALOGBUTTONBOX_STANDARDBUTTON_OK = 1024,
    QDIALOGBUTTONBOX_STANDARDBUTTON_SAVE = 2048,
    QDIALOGBUTTONBOX_STANDARDBUTTON_SAVEALL = 4096,
    QDIALOGBUTTONBOX_STANDARDBUTTON_OPEN = 8192,
    QDIALOGBUTTONBOX_STANDARDBUTTON_YES = 16384,
    QDIALOGBUTTONBOX_STANDARDBUTTON_YESTOALL = 32768,
    QDIALOGBUTTONBOX_STANDARDBUTTON_NO = 65536,
    QDIALOGBUTTONBOX_STANDARDBUTTON_NOTOALL = 131072,
    QDIALOGBUTTONBOX_STANDARDBUTTON_ABORT = 262144,
    QDIALOGBUTTONBOX_STANDARDBUTTON_RETRY = 524288,
    QDIALOGBUTTONBOX_STANDARDBUTTON_IGNORE = 1048576,
    QDIALOGBUTTONBOX_STANDARDBUTTON_CLOSE = 2097152,
    QDIALOGBUTTONBOX_STANDARDBUTTON_CANCEL = 4194304,
    QDIALOGBUTTONBOX_STANDARDBUTTON_DISCARD = 8388608,
    QDIALOGBUTTONBOX_STANDARDBUTTON_HELP = 16777216,
    QDIALOGBUTTONBOX_STANDARDBUTTON_APPLY = 33554432,
    QDIALOGBUTTONBOX_STANDARDBUTTON_RESET = 67108864,
    QDIALOGBUTTONBOX_STANDARDBUTTON_RESTOREDEFAULTS = 134217728,
    QDIALOGBUTTONBOX_STANDARDBUTTON_FIRSTBUTTON = 1024,
    QDIALOGBUTTONBOX_STANDARDBUTTON_LASTBUTTON = 134217728
} QDialogButtonBox__StandardButton;

typedef enum {
    QDIALOGBUTTONBOX_BUTTONLAYOUT_WINLAYOUT = 0,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_MACLAYOUT = 1,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_KDELAYOUT = 2,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_GNOMELAYOUT = 3,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_ANDROIDLAYOUT = 4
} QDialogButtonBox__ButtonLayout;

#endif
