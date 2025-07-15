#pragma once
#ifndef SRCQT6C_LIBQDIALOGBUTTONBOX_H
#define SRCQT6C_LIBQDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdialogbuttonbox.html

/// q_dialogbuttonbox_new constructs a new QDialogButtonBox object.
///
/// ``` QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new(void* parent);

/// q_dialogbuttonbox_new2 constructs a new QDialogButtonBox object.
///
///
QDialogButtonBox* q_dialogbuttonbox_new2();

/// q_dialogbuttonbox_new3 constructs a new QDialogButtonBox object.
///
/// ``` enum Qt__Orientation orientation ```
QDialogButtonBox* q_dialogbuttonbox_new3(int64_t orientation);

/// q_dialogbuttonbox_new4 constructs a new QDialogButtonBox object.
///
/// ``` int buttons ```
QDialogButtonBox* q_dialogbuttonbox_new4(int64_t buttons);

/// q_dialogbuttonbox_new5 constructs a new QDialogButtonBox object.
///
/// ``` int buttons, enum Qt__Orientation orientation ```
QDialogButtonBox* q_dialogbuttonbox_new5(int64_t buttons, int64_t orientation);

/// q_dialogbuttonbox_new6 constructs a new QDialogButtonBox object.
///
/// ``` enum Qt__Orientation orientation, QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new6(int64_t orientation, void* parent);

/// q_dialogbuttonbox_new7 constructs a new QDialogButtonBox object.
///
/// ``` int buttons, QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new7(int64_t buttons, void* parent);

/// q_dialogbuttonbox_new8 constructs a new QDialogButtonBox object.
///
/// ``` int buttons, enum Qt__Orientation orientation, QWidget* parent ```
QDialogButtonBox* q_dialogbuttonbox_new8(int64_t buttons, int64_t orientation, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDialogButtonBox* self ```
const QMetaObject* q_dialogbuttonbox_meta_object(void* self);

/// ``` QDialogButtonBox* self, const char* param1 ```
void* q_dialogbuttonbox_metacast(void* self, const char* param1);

/// ``` QDialogButtonBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dialogbuttonbox_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, enum QMetaObject__Call, int, void*) ```
void q_dialogbuttonbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDialogButtonBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dialogbuttonbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dialogbuttonbox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setOrientation)
///
/// ``` QDialogButtonBox* self, enum Qt__Orientation orientation ```
void q_dialogbuttonbox_set_orientation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#orientation)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button, enum QDialogButtonBox__ButtonRole role ```
void q_dialogbuttonbox_add_button(void* self, void* button, int64_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// ``` QDialogButtonBox* self, const char* text, enum QDialogButtonBox__ButtonRole role ```
QPushButton* q_dialogbuttonbox_add_button2(void* self, const char* text, int64_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#addButton)
///
/// ``` QDialogButtonBox* self, enum QDialogButtonBox__StandardButton button ```
QPushButton* q_dialogbuttonbox_add_button3(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#removeButton)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
void q_dialogbuttonbox_remove_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clear)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#buttons)
///
/// ``` QDialogButtonBox* self ```
libqt_list /* of QAbstractButton* */ q_dialogbuttonbox_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#buttonRole)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
int64_t q_dialogbuttonbox_button_role(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setStandardButtons)
///
/// ``` QDialogButtonBox* self, int buttons ```
void q_dialogbuttonbox_set_standard_buttons(void* self, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#standardButtons)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_standard_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#standardButton)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
int64_t q_dialogbuttonbox_standard_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#button)
///
/// ``` QDialogButtonBox* self, enum QDialogButtonBox__StandardButton which ```
QPushButton* q_dialogbuttonbox_button(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#setCenterButtons)
///
/// ``` QDialogButtonBox* self, bool center ```
void q_dialogbuttonbox_set_center_buttons(void* self, bool center);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#centerButtons)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_center_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clicked)
///
/// ``` QDialogButtonBox* self, QAbstractButton* button ```
void q_dialogbuttonbox_clicked(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#clicked)
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QAbstractButton*) ```
void q_dialogbuttonbox_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#accepted)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#accepted)
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*) ```
void q_dialogbuttonbox_on_accepted(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#helpRequested)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_help_requested(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#helpRequested)
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*) ```
void q_dialogbuttonbox_on_help_requested(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#rejected)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_rejected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#rejected)
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*) ```
void q_dialogbuttonbox_on_rejected(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#changeEvent)
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#event)
///
/// ``` QDialogButtonBox* self, QEvent* event ```
bool q_dialogbuttonbox_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#event)
///
/// Base class method implementation
///
/// ``` QDialogButtonBox* self, QEvent* event ```
bool q_dialogbuttonbox_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dialogbuttonbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dialogbuttonbox_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QDialogButtonBox* self ```
uintptr_t q_dialogbuttonbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QDialogButtonBox* self ```
uintptr_t q_dialogbuttonbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QDialogButtonBox* self ```
uintptr_t q_dialogbuttonbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QDialogButtonBox* self ```
QStyle* q_dialogbuttonbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QDialogButtonBox* self, QStyle* style ```
void q_dialogbuttonbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QDialogButtonBox* self, enum Qt__WindowModality windowModality ```
void q_dialogbuttonbox_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1 ```
bool q_dialogbuttonbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QDialogButtonBox* self, bool enabled ```
void q_dialogbuttonbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QDialogButtonBox* self, bool disabled ```
void q_dialogbuttonbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QDialogButtonBox* self, bool windowModified ```
void q_dialogbuttonbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QDialogButtonBox* self ```
const QRect* q_dialogbuttonbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QDialogButtonBox* self ```
QPoint* q_dialogbuttonbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QDialogButtonBox* self ```
QRegion* q_dialogbuttonbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDialogButtonBox* self, QSize* minimumSize ```
void q_dialogbuttonbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDialogButtonBox* self, int minw, int minh ```
void q_dialogbuttonbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDialogButtonBox* self, QSize* maximumSize ```
void q_dialogbuttonbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDialogButtonBox* self, int maxw, int maxh ```
void q_dialogbuttonbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QDialogButtonBox* self, int minw ```
void q_dialogbuttonbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QDialogButtonBox* self, int minh ```
void q_dialogbuttonbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QDialogButtonBox* self, int maxw ```
void q_dialogbuttonbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QDialogButtonBox* self, int maxh ```
void q_dialogbuttonbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDialogButtonBox* self, QSize* sizeIncrement ```
void q_dialogbuttonbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDialogButtonBox* self, int w, int h ```
void q_dialogbuttonbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDialogButtonBox* self, QSize* baseSize ```
void q_dialogbuttonbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDialogButtonBox* self, int basew, int baseh ```
void q_dialogbuttonbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDialogButtonBox* self, QSize* fixedSize ```
void q_dialogbuttonbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDialogButtonBox* self, int w, int h ```
void q_dialogbuttonbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QDialogButtonBox* self, int w ```
void q_dialogbuttonbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QDialogButtonBox* self, int h ```
void q_dialogbuttonbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDialogButtonBox* self, QPointF* param1 ```
QPointF* q_dialogbuttonbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
QPoint* q_dialogbuttonbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dialogbuttonbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dialogbuttonbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dialogbuttonbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDialogButtonBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dialogbuttonbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QDialogButtonBox* self ```
const QPalette* q_dialogbuttonbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QDialogButtonBox* self, QPalette* palette ```
void q_dialogbuttonbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QDialogButtonBox* self, enum QPalette__ColorRole backgroundRole ```
void q_dialogbuttonbox_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QDialogButtonBox* self, enum QPalette__ColorRole foregroundRole ```
void q_dialogbuttonbox_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QDialogButtonBox* self ```
const QFont* q_dialogbuttonbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QDialogButtonBox* self, QFont* font ```
void q_dialogbuttonbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QDialogButtonBox* self ```
QFontMetrics* q_dialogbuttonbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QDialogButtonBox* self ```
QFontInfo* q_dialogbuttonbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QDialogButtonBox* self ```
QCursor* q_dialogbuttonbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QDialogButtonBox* self, QCursor* cursor ```
void q_dialogbuttonbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QDialogButtonBox* self, bool enable ```
void q_dialogbuttonbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QDialogButtonBox* self, bool enable ```
void q_dialogbuttonbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDialogButtonBox* self, QBitmap* mask ```
void q_dialogbuttonbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDialogButtonBox* self, QRegion* mask ```
void q_dialogbuttonbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QDialogButtonBox* self ```
QRegion* q_dialogbuttonbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target ```
void q_dialogbuttonbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter ```
void q_dialogbuttonbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDialogButtonBox* self ```
QPixmap* q_dialogbuttonbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QDialogButtonBox* self ```
QGraphicsEffect* q_dialogbuttonbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QDialogButtonBox* self, QGraphicsEffect* effect ```
void q_dialogbuttonbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDialogButtonBox* self, enum Qt__GestureType typeVal ```
void q_dialogbuttonbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QDialogButtonBox* self, enum Qt__GestureType typeVal ```
void q_dialogbuttonbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QDialogButtonBox* self, const char* windowTitle ```
void q_dialogbuttonbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QDialogButtonBox* self, const char* styleSheet ```
void q_dialogbuttonbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QDialogButtonBox* self, QIcon* icon ```
void q_dialogbuttonbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QDialogButtonBox* self ```
QIcon* q_dialogbuttonbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QDialogButtonBox* self, const char* windowIconText ```
void q_dialogbuttonbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QDialogButtonBox* self, const char* windowRole ```
void q_dialogbuttonbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QDialogButtonBox* self, const char* filePath ```
void q_dialogbuttonbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QDialogButtonBox* self, double level ```
void q_dialogbuttonbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QDialogButtonBox* self ```
double q_dialogbuttonbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QDialogButtonBox* self, const char* toolTip ```
void q_dialogbuttonbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QDialogButtonBox* self, int msec ```
void q_dialogbuttonbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QDialogButtonBox* self, const char* statusTip ```
void q_dialogbuttonbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QDialogButtonBox* self, const char* whatsThis ```
void q_dialogbuttonbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QDialogButtonBox* self, const char* name ```
void q_dialogbuttonbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QDialogButtonBox* self, const char* description ```
void q_dialogbuttonbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QDialogButtonBox* self, enum Qt__LayoutDirection direction ```
void q_dialogbuttonbox_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QDialogButtonBox* self, QLocale* locale ```
void q_dialogbuttonbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QDialogButtonBox* self ```
QLocale* q_dialogbuttonbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDialogButtonBox* self, enum Qt__FocusReason reason ```
void q_dialogbuttonbox_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QDialogButtonBox* self, enum Qt__FocusPolicy policy ```
void q_dialogbuttonbox_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_dialogbuttonbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QDialogButtonBox* self, QWidget* focusProxy ```
void q_dialogbuttonbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QDialogButtonBox* self, enum Qt__ContextMenuPolicy policy ```
void q_dialogbuttonbox_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDialogButtonBox* self, QCursor* param1 ```
void q_dialogbuttonbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDialogButtonBox* self, QKeySequence* key ```
int32_t q_dialogbuttonbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_dialogbuttonbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_dialogbuttonbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QDialogButtonBox* self, bool enable ```
void q_dialogbuttonbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QDialogButtonBox* self ```
QGraphicsProxyWidget* q_dialogbuttonbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self, int x, int y, int w, int h ```
void q_dialogbuttonbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self, QRect* param1 ```
void q_dialogbuttonbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDialogButtonBox* self, QRegion* param1 ```
void q_dialogbuttonbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self, int x, int y, int w, int h ```
void q_dialogbuttonbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self, QRect* param1 ```
void q_dialogbuttonbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDialogButtonBox* self, QRegion* param1 ```
void q_dialogbuttonbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QDialogButtonBox* self, bool hidden ```
void q_dialogbuttonbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QDialogButtonBox* self, QWidget* param1 ```
void q_dialogbuttonbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDialogButtonBox* self, int x, int y ```
void q_dialogbuttonbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDialogButtonBox* self, QPoint* param1 ```
void q_dialogbuttonbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDialogButtonBox* self, int w, int h ```
void q_dialogbuttonbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDialogButtonBox* self, QSize* param1 ```
void q_dialogbuttonbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDialogButtonBox* self, int x, int y, int w, int h ```
void q_dialogbuttonbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDialogButtonBox* self, QRect* geometry ```
void q_dialogbuttonbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QDialogButtonBox* self ```
char* q_dialogbuttonbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QDialogButtonBox* self, const char* geometry ```
bool q_dialogbuttonbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QDialogButtonBox* self, QWidget* param1 ```
bool q_dialogbuttonbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QDialogButtonBox* self, int state ```
void q_dialogbuttonbox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QDialogButtonBox* self, int state ```
void q_dialogbuttonbox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QDialogButtonBox* self ```
QSizePolicy* q_dialogbuttonbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDialogButtonBox* self, QSizePolicy* sizePolicy ```
void q_dialogbuttonbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDialogButtonBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_dialogbuttonbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QDialogButtonBox* self ```
QRegion* q_dialogbuttonbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDialogButtonBox* self, int left, int top, int right, int bottom ```
void q_dialogbuttonbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDialogButtonBox* self, QMargins* margins ```
void q_dialogbuttonbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QDialogButtonBox* self ```
QMargins* q_dialogbuttonbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QDialogButtonBox* self ```
QRect* q_dialogbuttonbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QDialogButtonBox* self ```
QLayout* q_dialogbuttonbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QDialogButtonBox* self, QLayout* layout ```
void q_dialogbuttonbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDialogButtonBox* self, QWidget* parent ```
void q_dialogbuttonbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDialogButtonBox* self, QWidget* parent, int f ```
void q_dialogbuttonbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDialogButtonBox* self, int dx, int dy ```
void q_dialogbuttonbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDialogButtonBox* self, int dx, int dy, QRect* param3 ```
void q_dialogbuttonbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QDialogButtonBox* self, bool on ```
void q_dialogbuttonbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, QAction* action ```
void q_dialogbuttonbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QDialogButtonBox* self, libqt_list /* of QAction* */ actions ```
void q_dialogbuttonbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QDialogButtonBox* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_dialogbuttonbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QDialogButtonBox* self, QAction* before, QAction* action ```
void q_dialogbuttonbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QDialogButtonBox* self, QAction* action ```
void q_dialogbuttonbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QDialogButtonBox* self ```
libqt_list /* of QAction* */ q_dialogbuttonbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, const char* text ```
QAction* q_dialogbuttonbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, QIcon* icon, const char* text ```
QAction* q_dialogbuttonbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_dialogbuttonbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDialogButtonBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_dialogbuttonbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QDialogButtonBox* self ```
QWidget* q_dialogbuttonbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QDialogButtonBox* self, int typeVal ```
void q_dialogbuttonbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDialogButtonBox* self, enum Qt__WindowType param1 ```
void q_dialogbuttonbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QDialogButtonBox* self, int typeVal ```
void q_dialogbuttonbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_dialogbuttonbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDialogButtonBox* self, int x, int y ```
QWidget* q_dialogbuttonbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDialogButtonBox* self, QPoint* p ```
QWidget* q_dialogbuttonbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDialogButtonBox* self, QPointF* p ```
QWidget* q_dialogbuttonbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDialogButtonBox* self, enum Qt__WidgetAttribute param1 ```
void q_dialogbuttonbox_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QDialogButtonBox* self, enum Qt__WidgetAttribute param1 ```
bool q_dialogbuttonbox_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QDialogButtonBox* self, QWidget* child ```
bool q_dialogbuttonbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QDialogButtonBox* self, bool enabled ```
void q_dialogbuttonbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QDialogButtonBox* self ```
QBackingStore* q_dialogbuttonbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QDialogButtonBox* self ```
QWindow* q_dialogbuttonbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QDialogButtonBox* self ```
QScreen* q_dialogbuttonbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QDialogButtonBox* self, QScreen* screen ```
void q_dialogbuttonbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_dialogbuttonbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDialogButtonBox* self, const char* title ```
void q_dialogbuttonbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, const char*) ```
void q_dialogbuttonbox_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDialogButtonBox* self, QIcon* icon ```
void q_dialogbuttonbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_dialogbuttonbox_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDialogButtonBox* self, const char* iconText ```
void q_dialogbuttonbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, const char*) ```
void q_dialogbuttonbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDialogButtonBox* self, QPoint* pos ```
void q_dialogbuttonbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDialogButtonBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_dialogbuttonbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QDialogButtonBox* self ```
int64_t q_dialogbuttonbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QDialogButtonBox* self, int hints ```
void q_dialogbuttonbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_dialogbuttonbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dialogbuttonbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dialogbuttonbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter, QPoint* targetOffset ```
void q_dialogbuttonbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dialogbuttonbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDialogButtonBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dialogbuttonbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDialogButtonBox* self, QRect* rectangle ```
QPixmap* q_dialogbuttonbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDialogButtonBox* self, enum Qt__GestureType typeVal, int flags ```
void q_dialogbuttonbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDialogButtonBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_dialogbuttonbox_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDialogButtonBox* self, int id, bool enable ```
void q_dialogbuttonbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDialogButtonBox* self, int id, bool enable ```
void q_dialogbuttonbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDialogButtonBox* self, enum Qt__WindowType param1, bool on ```
void q_dialogbuttonbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDialogButtonBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_dialogbuttonbox_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_dialogbuttonbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_dialogbuttonbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDialogButtonBox* self ```
const char* q_dialogbuttonbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDialogButtonBox* self, char* name ```
void q_dialogbuttonbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDialogButtonBox* self, bool b ```
bool q_dialogbuttonbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDialogButtonBox* self ```
QThread* q_dialogbuttonbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDialogButtonBox* self, QThread* thread ```
bool q_dialogbuttonbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDialogButtonBox* self, int interval ```
int32_t q_dialogbuttonbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDialogButtonBox* self, int id ```
void q_dialogbuttonbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDialogButtonBox* self, enum Qt__TimerId id ```
void q_dialogbuttonbox_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDialogButtonBox* self ```
libqt_list /* of QObject* */ q_dialogbuttonbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDialogButtonBox* self, QObject* filterObj ```
void q_dialogbuttonbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDialogButtonBox* self, QObject* obj ```
void q_dialogbuttonbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dialogbuttonbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDialogButtonBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dialogbuttonbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dialogbuttonbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dialogbuttonbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDialogButtonBox* self, const char* name, QVariant* value ```
bool q_dialogbuttonbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDialogButtonBox* self, const char* name ```
QVariant* q_dialogbuttonbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDialogButtonBox* self ```
const char** q_dialogbuttonbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDialogButtonBox* self ```
QBindingStorage* q_dialogbuttonbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDialogButtonBox* self ```
const QBindingStorage* q_dialogbuttonbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDialogButtonBox* self, void (*slot)(QObject*) ```
void q_dialogbuttonbox_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDialogButtonBox* self ```
QObject* q_dialogbuttonbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDialogButtonBox* self, const char* classname ```
bool q_dialogbuttonbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDialogButtonBox* self, QThread* thread, Disambiguated_t* param2 ```
bool q_dialogbuttonbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDialogButtonBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dialogbuttonbox_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dialogbuttonbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDialogButtonBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dialogbuttonbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDialogButtonBox* self, QObject* param1 ```
void q_dialogbuttonbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDialogButtonBox* self, void (*slot)(QObject*, QObject*) ```
void q_dialogbuttonbox_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QDialogButtonBox* self ```
double q_dialogbuttonbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QDialogButtonBox* self ```
double q_dialogbuttonbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_dialogbuttonbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_dialogbuttonbox_encode_metric_f(int64_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)() ```
void q_dialogbuttonbox_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, bool visible ```
void q_dialogbuttonbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool visible ```
void q_dialogbuttonbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, bool) ```
void q_dialogbuttonbox_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QSize* (*slot)() ```
void q_dialogbuttonbox_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QSize* q_dialogbuttonbox_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QSize* (*slot)() ```
void q_dialogbuttonbox_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, int param1 ```
int32_t q_dialogbuttonbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int param1 ```
int32_t q_dialogbuttonbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, int) ```
void q_dialogbuttonbox_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)() ```
void q_dialogbuttonbox_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPaintEngine* q_dialogbuttonbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPaintEngine* q_dialogbuttonbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintEngine* (*slot)() ```
void q_dialogbuttonbox_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMouseEvent* event ```
void q_dialogbuttonbox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMouseEvent*) ```
void q_dialogbuttonbox_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QWheelEvent* event ```
void q_dialogbuttonbox_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QWheelEvent* event ```
void q_dialogbuttonbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QWheelEvent*) ```
void q_dialogbuttonbox_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QKeyEvent*) ```
void q_dialogbuttonbox_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QKeyEvent* event ```
void q_dialogbuttonbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QKeyEvent*) ```
void q_dialogbuttonbox_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QFocusEvent*) ```
void q_dialogbuttonbox_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QFocusEvent* event ```
void q_dialogbuttonbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QFocusEvent*) ```
void q_dialogbuttonbox_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QEnterEvent* event ```
void q_dialogbuttonbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QEnterEvent* event ```
void q_dialogbuttonbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEnterEvent*) ```
void q_dialogbuttonbox_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintEvent* event ```
void q_dialogbuttonbox_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintEvent* event ```
void q_dialogbuttonbox_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QPaintEvent*) ```
void q_dialogbuttonbox_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMoveEvent* event ```
void q_dialogbuttonbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMoveEvent* event ```
void q_dialogbuttonbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMoveEvent*) ```
void q_dialogbuttonbox_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QResizeEvent* event ```
void q_dialogbuttonbox_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QResizeEvent* event ```
void q_dialogbuttonbox_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QResizeEvent*) ```
void q_dialogbuttonbox_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QCloseEvent* event ```
void q_dialogbuttonbox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QCloseEvent* event ```
void q_dialogbuttonbox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QCloseEvent*) ```
void q_dialogbuttonbox_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QContextMenuEvent* event ```
void q_dialogbuttonbox_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QContextMenuEvent* event ```
void q_dialogbuttonbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QContextMenuEvent*) ```
void q_dialogbuttonbox_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QTabletEvent* event ```
void q_dialogbuttonbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QTabletEvent* event ```
void q_dialogbuttonbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QTabletEvent*) ```
void q_dialogbuttonbox_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QActionEvent* event ```
void q_dialogbuttonbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QActionEvent* event ```
void q_dialogbuttonbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QActionEvent*) ```
void q_dialogbuttonbox_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragEnterEvent* event ```
void q_dialogbuttonbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragEnterEvent* event ```
void q_dialogbuttonbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDragEnterEvent*) ```
void q_dialogbuttonbox_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragMoveEvent* event ```
void q_dialogbuttonbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragMoveEvent* event ```
void q_dialogbuttonbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDragMoveEvent*) ```
void q_dialogbuttonbox_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragLeaveEvent* event ```
void q_dialogbuttonbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDragLeaveEvent* event ```
void q_dialogbuttonbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDragLeaveEvent*) ```
void q_dialogbuttonbox_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QDropEvent* event ```
void q_dialogbuttonbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QDropEvent* event ```
void q_dialogbuttonbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QDropEvent*) ```
void q_dialogbuttonbox_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QShowEvent* event ```
void q_dialogbuttonbox_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QShowEvent* event ```
void q_dialogbuttonbox_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QShowEvent*) ```
void q_dialogbuttonbox_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QHideEvent* event ```
void q_dialogbuttonbox_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QHideEvent* event ```
void q_dialogbuttonbox_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QHideEvent*) ```
void q_dialogbuttonbox_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_dialogbuttonbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_dialogbuttonbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, const char*, void*, intptr_t*) ```
void q_dialogbuttonbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dialogbuttonbox_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dialogbuttonbox_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_dialogbuttonbox_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QPainter* painter ```
void q_dialogbuttonbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPainter* painter ```
void q_dialogbuttonbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QPainter*) ```
void q_dialogbuttonbox_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QPoint* offset ```
QPaintDevice* q_dialogbuttonbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPoint* offset ```
QPaintDevice* q_dialogbuttonbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPaintDevice* (*slot)(QDialogButtonBox*, QPoint*) ```
void q_dialogbuttonbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPainter* q_dialogbuttonbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QPainter* q_dialogbuttonbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QPainter* (*slot)() ```
void q_dialogbuttonbox_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QInputMethodEvent* param1 ```
void q_dialogbuttonbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QInputMethodEvent* param1 ```
void q_dialogbuttonbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QInputMethodEvent*) ```
void q_dialogbuttonbox_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dialogbuttonbox_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dialogbuttonbox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QVariant* (*slot)(QDialogButtonBox*, enum Qt__InputMethodQuery) ```
void q_dialogbuttonbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, bool next ```
bool q_dialogbuttonbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool next ```
bool q_dialogbuttonbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, bool) ```
void q_dialogbuttonbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QObject* watched, QEvent* event ```
bool q_dialogbuttonbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QObject* watched, QEvent* event ```
bool q_dialogbuttonbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, QObject*, QEvent*) ```
void q_dialogbuttonbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QTimerEvent* event ```
void q_dialogbuttonbox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QTimerEvent* event ```
void q_dialogbuttonbox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QTimerEvent*) ```
void q_dialogbuttonbox_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QChildEvent* event ```
void q_dialogbuttonbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QChildEvent* event ```
void q_dialogbuttonbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QChildEvent*) ```
void q_dialogbuttonbox_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QEvent* event ```
void q_dialogbuttonbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QEvent*) ```
void q_dialogbuttonbox_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMetaMethod*) ```
void q_dialogbuttonbox_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
void q_dialogbuttonbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)(QDialogButtonBox*, QMetaMethod*) ```
void q_dialogbuttonbox_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)() ```
void q_dialogbuttonbox_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)() ```
void q_dialogbuttonbox_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
void q_dialogbuttonbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, void (*slot)() ```
void q_dialogbuttonbox_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)() ```
void q_dialogbuttonbox_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
bool q_dialogbuttonbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)() ```
void q_dialogbuttonbox_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QObject* q_dialogbuttonbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
QObject* q_dialogbuttonbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QObject* (*slot)() ```
void q_dialogbuttonbox_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self ```
int32_t q_dialogbuttonbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)() ```
void q_dialogbuttonbox_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* signal ```
int32_t q_dialogbuttonbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, const char* signal ```
int32_t q_dialogbuttonbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, int32_t (*slot)(QDialogButtonBox*, const char*) ```
void q_dialogbuttonbox_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
bool q_dialogbuttonbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, QMetaMethod* signal ```
bool q_dialogbuttonbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, bool (*slot)(QDialogButtonBox*, QMetaMethod*) ```
void q_dialogbuttonbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDialogButtonBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_dialogbuttonbox_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDialogButtonBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_dialogbuttonbox_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDialogButtonBox* self, double (*slot)(QDialogButtonBox*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_dialogbuttonbox_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDialogButtonBox* self, void (*slot)(QObject*, const char*) ```
void q_dialogbuttonbox_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdialogbuttonbox.html#dtor.QDialogButtonBox)
///
/// Delete this object from C++ memory.
///
/// ``` QDialogButtonBox* self ```
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
