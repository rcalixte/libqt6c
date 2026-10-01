#pragma once
#ifndef LIBQSPLITTER_H
#define LIBQSPLITTER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html)

/// q_splitter_new constructs a new QSplitter object.
///
/// @param parent QWidget*
///
QSplitter* q_splitter_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html)

/// q_splitter_new2 constructs a new QSplitter object.
///
QSplitter* q_splitter_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html)

/// q_splitter_new3 constructs a new QSplitter object.
///
/// @param param1 enum Qt__Orientation
///
QSplitter* q_splitter_new3(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html)

/// q_splitter_new4 constructs a new QSplitter object.
///
/// @param param1 enum Qt__Orientation
/// @param parent QWidget*
///
QSplitter* q_splitter_new4(int32_t param1, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QSplitter*
///
const QMetaObject* q_splitter_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QSplitter*
/// @param callback const QMetaObject* func(const QSplitter* self)
///
void q_splitter_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSplitter*
///
const QMetaObject* q_splitter_super_meta_object(const void* self);

/// @param self QSplitter*
/// @param param1 const char*
///
void* q_splitter_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSplitter*
/// @param callback void* func(QSplitter* self, const char* param1)
///
void q_splitter_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSplitter*
/// @param param1 const char*
///
void* q_splitter_super_metacast(void* self, const char* param1);

/// @param self QSplitter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_splitter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSplitter*
/// @param callback int32_t func(QSplitter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_splitter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSplitter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_splitter_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_splitter_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#addWidget)
///
/// @param self QSplitter*
/// @param widget QWidget*
///
void q_splitter_add_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#insertWidget)
///
/// @param self QSplitter*
/// @param index int
/// @param widget QWidget*
///
void q_splitter_insert_widget(void* self, int index, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#replaceWidget)
///
/// @param self QSplitter*
/// @param index int
/// @param widget QWidget*
///
QWidget* q_splitter_replace_widget(void* self, int index, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setOrientation)
///
/// @param self QSplitter*
/// @param orientation enum Qt__Orientation
///
void q_splitter_set_orientation(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#orientation)
///
/// @param self const QSplitter*
///
/// @return enum Qt__Orientation
///
int32_t q_splitter_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setChildrenCollapsible)
///
/// @param self QSplitter*
/// @param childrenCollapsible bool
///
void q_splitter_set_children_collapsible(void* self, bool childrenCollapsible);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#childrenCollapsible)
///
/// @param self const QSplitter*
///
bool q_splitter_children_collapsible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setCollapsible)
///
/// @param self QSplitter*
/// @param index int
/// @param param2 bool
///
void q_splitter_set_collapsible(void* self, int index, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#isCollapsible)
///
/// @param self const QSplitter*
/// @param index int
///
bool q_splitter_is_collapsible(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setOpaqueResize)
///
/// @param self QSplitter*
///
void q_splitter_set_opaque_resize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#opaqueResize)
///
/// @param self const QSplitter*
///
bool q_splitter_opaque_resize(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#refresh)
///
/// @param self QSplitter*
///
void q_splitter_refresh(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#sizeHint)
///
/// @param self const QSplitter*
///
QSize* q_splitter_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QSplitter*
/// @param callback QSize* func(const QSplitter* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_splitter_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QSplitter*
///
QSize* q_splitter_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#minimumSizeHint)
///
/// @param self const QSplitter*
///
QSize* q_splitter_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QSplitter*
/// @param callback QSize* func(const QSplitter* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_splitter_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QSplitter*
///
QSize* q_splitter_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#sizes)
///
/// @param self const QSplitter*
///
/// @return libqt_list of int
///
libqt_list q_splitter_sizes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setSizes)
///
/// @param self QSplitter*
/// @param list libqt_list of int
///
void q_splitter_set_sizes(void* self, libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#saveState)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSplitter*
///
char* q_splitter_save_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#restoreState)
///
/// @param self QSplitter*
/// @param state char*
///
bool q_splitter_restore_state(void* self, char* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#handleWidth)
///
/// @param self const QSplitter*
///
int32_t q_splitter_handle_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setHandleWidth)
///
/// @param self QSplitter*
/// @param handleWidth int
///
void q_splitter_set_handle_width(void* self, int handleWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#indexOf)
///
/// @param self const QSplitter*
/// @param w QWidget*
///
int32_t q_splitter_index_of(const void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#widget)
///
/// @param self const QSplitter*
/// @param index int
///
QWidget* q_splitter_widget(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#count)
///
/// @param self const QSplitter*
///
int32_t q_splitter_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#getRange)
///
/// @param self const QSplitter*
/// @param index int
/// @param param2 int*
/// @param param3 int*
///
void q_splitter_get_range(const void* self, int index, int* param2, int* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#handle)
///
/// @param self const QSplitter*
/// @param index int
///
QSplitterHandle* q_splitter_handle(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setStretchFactor)
///
/// @param self QSplitter*
/// @param index int
/// @param stretch int
///
void q_splitter_set_stretch_factor(void* self, int index, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#splitterMoved)
///
/// @param self QSplitter*
/// @param pos int
/// @param index int
///
void q_splitter_splitter_moved(void* self, int pos, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#splitterMoved)
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, int pos, int index)
///
void q_splitter_on_splitter_moved(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#createHandle)
///
/// @param self QSplitter*
///
QSplitterHandle* q_splitter_create_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#createHandle)
///
/// Allows for overriding the related default method
///
/// @param self QSplitter*
/// @param callback QSplitterHandle* func(QSplitter* self)
///
void q_splitter_on_create_handle(void* self, QSplitterHandle* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#createHandle)
///
/// Base class method implementation
///
/// @param self QSplitter*
///
QSplitterHandle* q_splitter_super_create_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#childEvent)
///
/// @param self QSplitter*
/// @param param1 QChildEvent*
///
void q_splitter_child_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#childEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QChildEvent* param1)
///
void q_splitter_on_child_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#childEvent)
///
/// Base class method implementation
///
/// @param self QSplitter*
/// @param param1 QChildEvent*
///
void q_splitter_super_child_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#event)
///
/// @param self QSplitter*
/// @param param1 QEvent*
///
bool q_splitter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSplitter*
/// @param callback bool func(QSplitter* self, QEvent* param1)
///
void q_splitter_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#event)
///
/// Base class method implementation
///
/// @param self QSplitter*
/// @param param1 QEvent*
///
bool q_splitter_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#resizeEvent)
///
/// @param self QSplitter*
/// @param param1 QResizeEvent*
///
void q_splitter_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QResizeEvent* param1)
///
void q_splitter_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QSplitter*
/// @param param1 QResizeEvent*
///
void q_splitter_super_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#changeEvent)
///
/// @param self QSplitter*
/// @param param1 QEvent*
///
void q_splitter_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QEvent* param1)
///
void q_splitter_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QSplitter*
/// @param param1 QEvent*
///
void q_splitter_super_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#moveSplitter)
///
/// @param self QSplitter*
/// @param pos int
/// @param index int
///
void q_splitter_move_splitter(void* self, int pos, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setRubberBand)
///
/// @param self QSplitter*
/// @param position int
///
void q_splitter_set_rubber_band(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#closestLegalPosition)
///
/// @param self QSplitter*
/// @param param1 int
/// @param param2 int
///
int32_t q_splitter_closest_legal_position(void* self, int param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_splitter_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_splitter_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#setOpaqueResize)
///
/// @param self QSplitter*
/// @param opaque bool
///
void q_splitter_set_opaque_resize1(void* self, bool opaque);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const QSplitter*
///
int32_t q_splitter_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QSplitter*
/// @param frameStyle int
///
void q_splitter_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const QSplitter*
///
int32_t q_splitter_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const QSplitter*
///
/// @return enum QFrame__Shape
///
int32_t q_splitter_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QSplitter*
/// @param frameShape enum QFrame__Shape
///
void q_splitter_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const QSplitter*
///
/// @return enum QFrame__Shadow
///
int32_t q_splitter_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QSplitter*
/// @param frameShadow enum QFrame__Shadow
///
void q_splitter_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const QSplitter*
///
int32_t q_splitter_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QSplitter*
/// @param lineWidth int
///
void q_splitter_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const QSplitter*
///
int32_t q_splitter_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QSplitter*
/// @param midLineWidth int
///
void q_splitter_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const QSplitter*
///
QRect* q_splitter_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QSplitter*
/// @param frameRect QRect*
///
void q_splitter_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self QSplitter*
///
QPaintDevice* q_splitter_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a QSplitter object
///
/// @param _qpaintdevice QPaintDevice*
///
QSplitter* q_splitter_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QSplitter*
///
uintptr_t q_splitter_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QSplitter*
///
void q_splitter_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QSplitter*
///
uintptr_t q_splitter_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QSplitter*
///
uintptr_t q_splitter_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QSplitter*
///
QStyle* q_splitter_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QSplitter*
/// @param style QStyle*
///
void q_splitter_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QSplitter*
///
bool q_splitter_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QSplitter*
///
bool q_splitter_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QSplitter*
///
bool q_splitter_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QSplitter*
///
/// @return enum Qt__WindowModality
///
int32_t q_splitter_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QSplitter*
/// @param windowModality enum Qt__WindowModality
///
void q_splitter_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QSplitter*
///
bool q_splitter_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QSplitter*
/// @param param1 QWidget*
///
bool q_splitter_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QSplitter*
/// @param enabled bool
///
void q_splitter_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QSplitter*
/// @param disabled bool
///
void q_splitter_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QSplitter*
/// @param windowModified bool
///
void q_splitter_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QSplitter*
///
QRect* q_splitter_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QSplitter*
///
const QRect* q_splitter_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QSplitter*
///
QRect* q_splitter_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QSplitter*
///
int32_t q_splitter_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QSplitter*
///
int32_t q_splitter_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QSplitter*
///
QPoint* q_splitter_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QSplitter*
///
QSize* q_splitter_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QSplitter*
///
QSize* q_splitter_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QSplitter*
///
int32_t q_splitter_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QSplitter*
///
int32_t q_splitter_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QSplitter*
///
QRect* q_splitter_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QSplitter*
///
QRect* q_splitter_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QSplitter*
///
QRegion* q_splitter_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QSplitter*
///
QSize* q_splitter_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QSplitter*
///
QSize* q_splitter_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QSplitter*
///
int32_t q_splitter_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QSplitter*
///
int32_t q_splitter_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QSplitter*
///
int32_t q_splitter_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QSplitter*
///
int32_t q_splitter_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QSplitter*
/// @param minimumSize QSize*
///
void q_splitter_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QSplitter*
/// @param minw int
/// @param minh int
///
void q_splitter_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QSplitter*
/// @param maximumSize QSize*
///
void q_splitter_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QSplitter*
/// @param maxw int
/// @param maxh int
///
void q_splitter_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QSplitter*
/// @param minw int
///
void q_splitter_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QSplitter*
/// @param minh int
///
void q_splitter_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QSplitter*
/// @param maxw int
///
void q_splitter_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QSplitter*
/// @param maxh int
///
void q_splitter_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QSplitter*
///
QSize* q_splitter_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QSplitter*
/// @param sizeIncrement QSize*
///
void q_splitter_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QSplitter*
/// @param w int
/// @param h int
///
void q_splitter_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QSplitter*
///
QSize* q_splitter_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QSplitter*
/// @param baseSize QSize*
///
void q_splitter_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QSplitter*
/// @param basew int
/// @param baseh int
///
void q_splitter_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QSplitter*
/// @param fixedSize QSize*
///
void q_splitter_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QSplitter*
/// @param w int
/// @param h int
///
void q_splitter_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QSplitter*
/// @param w int
///
void q_splitter_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QSplitter*
/// @param h int
///
void q_splitter_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QSplitter*
/// @param param1 QPointF*
///
QPointF* q_splitter_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QSplitter*
/// @param param1 QPoint*
///
QPoint* q_splitter_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QSplitter*
/// @param param1 QPointF*
///
QPointF* q_splitter_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QSplitter*
/// @param param1 QPoint*
///
QPoint* q_splitter_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QSplitter*
/// @param param1 QPointF*
///
QPointF* q_splitter_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QSplitter*
/// @param param1 QPoint*
///
QPoint* q_splitter_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QSplitter*
/// @param param1 QPointF*
///
QPointF* q_splitter_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QSplitter*
/// @param param1 QPoint*
///
QPoint* q_splitter_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QSplitter*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_splitter_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QSplitter*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_splitter_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QSplitter*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_splitter_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QSplitter*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_splitter_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QSplitter*
///
const QPalette* q_splitter_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QSplitter*
/// @param palette QPalette*
///
void q_splitter_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QSplitter*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_splitter_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QSplitter*
///
/// @return enum QPalette__ColorRole
///
int32_t q_splitter_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QSplitter*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_splitter_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QSplitter*
///
/// @return enum QPalette__ColorRole
///
int32_t q_splitter_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QSplitter*
///
const QFont* q_splitter_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QSplitter*
/// @param font QFont*
///
void q_splitter_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QSplitter*
///
QFontMetrics* q_splitter_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QSplitter*
///
QFontInfo* q_splitter_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QSplitter*
///
QCursor* q_splitter_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QSplitter*
/// @param cursor QCursor*
///
void q_splitter_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QSplitter*
///
void q_splitter_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QSplitter*
/// @param enable bool
///
void q_splitter_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QSplitter*
///
bool q_splitter_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QSplitter*
///
bool q_splitter_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QSplitter*
/// @param enable bool
///
void q_splitter_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QSplitter*
///
bool q_splitter_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QSplitter*
/// @param mask QBitmap*
///
void q_splitter_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QSplitter*
/// @param mask QRegion*
///
void q_splitter_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QSplitter*
///
QRegion* q_splitter_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QSplitter*
///
void q_splitter_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param target QPaintDevice*
///
void q_splitter_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param painter QPainter*
///
void q_splitter_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QSplitter*
///
QPixmap* q_splitter_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QSplitter*
///
QGraphicsEffect* q_splitter_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QSplitter*
/// @param effect QGraphicsEffect*
///
void q_splitter_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QSplitter*
/// @param type enum Qt__GestureType
///
void q_splitter_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QSplitter*
/// @param type enum Qt__GestureType
///
void q_splitter_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QSplitter*
/// @param windowTitle const char*
///
void q_splitter_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QSplitter*
/// @param styleSheet const char*
///
void q_splitter_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QSplitter*
/// @param icon QIcon*
///
void q_splitter_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QSplitter*
///
QIcon* q_splitter_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QSplitter*
/// @param windowIconText const char*
///
void q_splitter_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QSplitter*
/// @param windowRole const char*
///
void q_splitter_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QSplitter*
/// @param filePath const char*
///
void q_splitter_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QSplitter*
/// @param level double
///
void q_splitter_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QSplitter*
///
double q_splitter_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QSplitter*
///
bool q_splitter_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QSplitter*
/// @param toolTip const char*
///
void q_splitter_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QSplitter*
/// @param msec int
///
void q_splitter_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QSplitter*
///
int32_t q_splitter_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QSplitter*
/// @param statusTip const char*
///
void q_splitter_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QSplitter*
/// @param whatsThis const char*
///
void q_splitter_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QSplitter*
/// @param name const char*
///
void q_splitter_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QSplitter*
/// @param description const char*
///
void q_splitter_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QSplitter*
/// @param direction enum Qt__LayoutDirection
///
void q_splitter_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QSplitter*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_splitter_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QSplitter*
///
void q_splitter_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QSplitter*
/// @param locale QLocale*
///
void q_splitter_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QSplitter*
///
QLocale* q_splitter_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QSplitter*
///
void q_splitter_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QSplitter*
///
bool q_splitter_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QSplitter*
///
bool q_splitter_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QSplitter*
///
void q_splitter_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QSplitter*
///
bool q_splitter_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QSplitter*
///
void q_splitter_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QSplitter*
///
void q_splitter_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QSplitter*
/// @param reason enum Qt__FocusReason
///
void q_splitter_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QSplitter*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_splitter_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QSplitter*
/// @param policy enum Qt__FocusPolicy
///
void q_splitter_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QSplitter*
///
bool q_splitter_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_splitter_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QSplitter*
/// @param focusProxy QWidget*
///
void q_splitter_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QSplitter*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_splitter_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QSplitter*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_splitter_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QSplitter*
///
void q_splitter_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QSplitter*
/// @param param1 QCursor*
///
void q_splitter_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QSplitter*
///
void q_splitter_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QSplitter*
///
void q_splitter_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QSplitter*
///
void q_splitter_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QSplitter*
/// @param key QKeySequence*
///
int32_t q_splitter_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QSplitter*
/// @param id int
///
void q_splitter_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QSplitter*
/// @param id int
///
void q_splitter_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QSplitter*
/// @param id int
///
void q_splitter_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_splitter_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_splitter_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QSplitter*
///
bool q_splitter_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QSplitter*
/// @param enable bool
///
void q_splitter_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QSplitter*
///
QGraphicsProxyWidget* q_splitter_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitter*
///
void q_splitter_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitter*
///
void q_splitter_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_splitter_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitter*
/// @param param1 QRect*
///
void q_splitter_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitter*
/// @param param1 QRegion*
///
void q_splitter_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_splitter_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitter*
/// @param param1 QRect*
///
void q_splitter_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitter*
/// @param param1 QRegion*
///
void q_splitter_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QSplitter*
/// @param hidden bool
///
void q_splitter_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QSplitter*
///
void q_splitter_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QSplitter*
///
void q_splitter_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QSplitter*
///
void q_splitter_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QSplitter*
///
void q_splitter_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QSplitter*
///
void q_splitter_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QSplitter*
///
void q_splitter_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QSplitter*
///
bool q_splitter_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QSplitter*
///
void q_splitter_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QSplitter*
///
void q_splitter_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QSplitter*
/// @param param1 QWidget*
///
void q_splitter_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QSplitter*
/// @param x int
/// @param y int
///
void q_splitter_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QSplitter*
/// @param param1 QPoint*
///
void q_splitter_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QSplitter*
/// @param w int
/// @param h int
///
void q_splitter_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QSplitter*
/// @param param1 QSize*
///
void q_splitter_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QSplitter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_splitter_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QSplitter*
/// @param geometry QRect*
///
void q_splitter_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSplitter*
///
char* q_splitter_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QSplitter*
/// @param geometry char*
///
bool q_splitter_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QSplitter*
///
void q_splitter_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QSplitter*
///
bool q_splitter_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QSplitter*
/// @param param1 QWidget*
///
bool q_splitter_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QSplitter*
///
bool q_splitter_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QSplitter*
///
bool q_splitter_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QSplitter*
///
bool q_splitter_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QSplitter*
///
bool q_splitter_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QSplitter*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_splitter_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QSplitter*
/// @param state flag of enum Qt__WindowState
///
void q_splitter_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QSplitter*
/// @param state flag of enum Qt__WindowState
///
void q_splitter_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QSplitter*
///
QSizePolicy* q_splitter_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QSplitter*
/// @param sizePolicy QSizePolicy*
///
void q_splitter_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QSplitter*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_splitter_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QSplitter*
///
QRegion* q_splitter_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QSplitter*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_splitter_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QSplitter*
/// @param margins QMargins*
///
void q_splitter_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QSplitter*
///
QMargins* q_splitter_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QSplitter*
///
QRect* q_splitter_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QSplitter*
///
QLayout* q_splitter_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QSplitter*
/// @param layout QLayout*
///
void q_splitter_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QSplitter*
///
void q_splitter_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QSplitter*
/// @param parent QWidget*
///
void q_splitter_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QSplitter*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_splitter_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QSplitter*
/// @param dx int
/// @param dy int
///
void q_splitter_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QSplitter*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_splitter_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QSplitter*
///
bool q_splitter_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QSplitter*
/// @param on bool
///
void q_splitter_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitter*
/// @param action QAction*
///
void q_splitter_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QSplitter*
/// @param actions libqt_list of QAction*
///
void q_splitter_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QSplitter*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_splitter_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QSplitter*
/// @param before QAction*
/// @param action QAction*
///
void q_splitter_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QSplitter*
/// @param action QAction*
///
void q_splitter_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QSplitter*
///
/// @return libqt_list of QAction*
///
libqt_list q_splitter_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitter*
/// @param text const char*
///
QAction* q_splitter_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitter*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_splitter_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitter*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_splitter_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitter*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_splitter_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QSplitter*
///
QWidget* q_splitter_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QSplitter*
/// @param type flag of enum Qt__WindowType
///
void q_splitter_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QSplitter*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_splitter_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QSplitter*
/// @param param1 enum Qt__WindowType
///
void q_splitter_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QSplitter*
/// @param type flag of enum Qt__WindowType
///
void q_splitter_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QSplitter*
///
/// @return enum Qt__WindowType
///
int32_t q_splitter_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_splitter_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QSplitter*
/// @param x int
/// @param y int
///
QWidget* q_splitter_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QSplitter*
/// @param p QPoint*
///
QWidget* q_splitter_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QSplitter*
/// @param p QPointF*
///
QWidget* q_splitter_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QSplitter*
/// @param param1 enum Qt__WidgetAttribute
///
void q_splitter_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QSplitter*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_splitter_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QSplitter*
///
void q_splitter_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QSplitter*
/// @param child QWidget*
///
bool q_splitter_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QSplitter*
///
bool q_splitter_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QSplitter*
/// @param enabled bool
///
void q_splitter_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QSplitter*
///
QBackingStore* q_splitter_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QSplitter*
///
QWindow* q_splitter_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QSplitter*
///
QScreen* q_splitter_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QSplitter*
/// @param screen QScreen*
///
void q_splitter_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_splitter_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QSplitter*
/// @param title const char*
///
void q_splitter_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, const char* title)
///
void q_splitter_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QSplitter*
/// @param icon QIcon*
///
void q_splitter_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QIcon* icon)
///
void q_splitter_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QSplitter*
/// @param iconText const char*
///
void q_splitter_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, const char* iconText)
///
void q_splitter_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QSplitter*
/// @param pos QPoint*
///
void q_splitter_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QPoint* pos)
///
void q_splitter_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QSplitter*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_splitter_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QSplitter*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_splitter_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_splitter_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_splitter_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_splitter_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_splitter_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_splitter_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitter*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_splitter_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QSplitter*
/// @param rectangle QRect*
///
QPixmap* q_splitter_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QSplitter*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_splitter_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QSplitter*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_splitter_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QSplitter*
/// @param id int
/// @param enable bool
///
void q_splitter_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QSplitter*
/// @param id int
/// @param enable bool
///
void q_splitter_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QSplitter*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_splitter_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QSplitter*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_splitter_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_splitter_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_splitter_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitter*
///
const char* q_splitter_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSplitter*
/// @param name const char*
///
void q_splitter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QSplitter*
///
bool q_splitter_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSplitter*
///
bool q_splitter_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSplitter*
///
bool q_splitter_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSplitter*
///
bool q_splitter_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSplitter*
/// @param b bool
///
bool q_splitter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QSplitter*
///
QThread* q_splitter_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSplitter*
/// @param thread QThread*
///
bool q_splitter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitter*
/// @param interval int
///
int32_t q_splitter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitter*
/// @param time int64_t of nanoseconds
///
int32_t q_splitter_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSplitter*
/// @param id int
///
void q_splitter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSplitter*
/// @param id enum Qt__TimerId
///
void q_splitter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QSplitter*
///
/// @return libqt_list of QObject*
///
libqt_list q_splitter_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSplitter*
/// @param filterObj QObject*
///
void q_splitter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSplitter*
/// @param obj QObject*
///
void q_splitter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_splitter_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_splitter_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSplitter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_splitter_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_splitter_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_splitter_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitter*
///
bool q_splitter_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitter*
/// @param receiver QObject*
///
bool q_splitter_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_splitter_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSplitter*
///
void q_splitter_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSplitter*
///
void q_splitter_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSplitter*
/// @param name const char*
/// @param value QVariant*
///
bool q_splitter_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSplitter*
/// @param name const char*
///
QVariant* q_splitter_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSplitter*
///
const char** q_splitter_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSplitter*
///
QBindingStorage* q_splitter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QSplitter*
///
const QBindingStorage* q_splitter_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitter*
///
void q_splitter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self)
///
void q_splitter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QSplitter*
///
QObject* q_splitter_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QSplitter*
/// @param classname const char*
///
bool q_splitter_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSplitter*
///
void q_splitter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_splitter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_splitter_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_splitter_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_splitter_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSplitter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_splitter_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitter*
/// @param signal const char*
///
bool q_splitter_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitter*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_splitter_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitter*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_splitter_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitter*
/// @param receiver QObject*
/// @param member const char*
///
bool q_splitter_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitter*
/// @param param1 QObject*
///
void q_splitter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QObject* param1)
///
void q_splitter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QSplitter*
///
bool q_splitter_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QSplitter*
///
int32_t q_splitter_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QSplitter*
///
int32_t q_splitter_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QSplitter*
///
int32_t q_splitter_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QSplitter*
///
int32_t q_splitter_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QSplitter*
///
int32_t q_splitter_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QSplitter*
///
int32_t q_splitter_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QSplitter*
///
double q_splitter_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QSplitter*
///
double q_splitter_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QSplitter*
///
int32_t q_splitter_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QSplitter*
///
int32_t q_splitter_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_splitter_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_splitter_encode_metric_f(int32_t metric, double value);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param param1 QPaintEvent*
///
void q_splitter_paint_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param param1 QPaintEvent*
///
void q_splitter_super_paint_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QPaintEvent* param1)
///
void q_splitter_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param option QStyleOptionFrame*
///
void q_splitter_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param option QStyleOptionFrame*
///
void q_splitter_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback void func(QSplitter* self, QStyleOptionFrame* option)
///
void q_splitter_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
///
int32_t q_splitter_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
///
int32_t q_splitter_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback int32_t func(QSplitter* self)
///
void q_splitter_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param visible bool
///
void q_splitter_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param visible bool
///
void q_splitter_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, bool visible)
///
void q_splitter_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param param1 int
///
int32_t q_splitter_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param param1 int
///
int32_t q_splitter_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback int32_t func(QSplitter* self, int param1)
///
void q_splitter_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
///
bool q_splitter_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
///
bool q_splitter_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback bool func(QSplitter* self)
///
void q_splitter_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
///
QPaintEngine* q_splitter_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
///
QPaintEngine* q_splitter_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback QPaintEngine* func(QSplitter* self)
///
void q_splitter_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QMouseEvent* event)
///
void q_splitter_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QMouseEvent* event)
///
void q_splitter_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QMouseEvent* event)
///
void q_splitter_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QMouseEvent*
///
void q_splitter_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QMouseEvent* event)
///
void q_splitter_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QWheelEvent*
///
void q_splitter_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QWheelEvent*
///
void q_splitter_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QWheelEvent* event)
///
void q_splitter_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QKeyEvent*
///
void q_splitter_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QKeyEvent*
///
void q_splitter_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QKeyEvent* event)
///
void q_splitter_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QKeyEvent*
///
void q_splitter_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QKeyEvent*
///
void q_splitter_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QKeyEvent* event)
///
void q_splitter_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QFocusEvent*
///
void q_splitter_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QFocusEvent*
///
void q_splitter_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QFocusEvent* event)
///
void q_splitter_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QFocusEvent*
///
void q_splitter_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QFocusEvent*
///
void q_splitter_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QFocusEvent* event)
///
void q_splitter_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QEnterEvent*
///
void q_splitter_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QEnterEvent*
///
void q_splitter_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QEnterEvent* event)
///
void q_splitter_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QEvent*
///
void q_splitter_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QEvent*
///
void q_splitter_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QEvent* event)
///
void q_splitter_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QMoveEvent*
///
void q_splitter_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QMoveEvent*
///
void q_splitter_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QMoveEvent* event)
///
void q_splitter_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QCloseEvent*
///
void q_splitter_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QCloseEvent*
///
void q_splitter_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QCloseEvent* event)
///
void q_splitter_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QContextMenuEvent*
///
void q_splitter_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QContextMenuEvent*
///
void q_splitter_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QContextMenuEvent* event)
///
void q_splitter_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QTabletEvent*
///
void q_splitter_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QTabletEvent*
///
void q_splitter_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QTabletEvent* event)
///
void q_splitter_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QActionEvent*
///
void q_splitter_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QActionEvent*
///
void q_splitter_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QActionEvent* event)
///
void q_splitter_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QDragEnterEvent*
///
void q_splitter_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QDragEnterEvent*
///
void q_splitter_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QDragEnterEvent* event)
///
void q_splitter_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QDragMoveEvent*
///
void q_splitter_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QDragMoveEvent*
///
void q_splitter_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QDragMoveEvent* event)
///
void q_splitter_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QDragLeaveEvent*
///
void q_splitter_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QDragLeaveEvent*
///
void q_splitter_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QDragLeaveEvent* event)
///
void q_splitter_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QDropEvent*
///
void q_splitter_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QDropEvent*
///
void q_splitter_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QDropEvent* event)
///
void q_splitter_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QShowEvent*
///
void q_splitter_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QShowEvent*
///
void q_splitter_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QShowEvent* event)
///
void q_splitter_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QHideEvent*
///
void q_splitter_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QHideEvent*
///
void q_splitter_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QHideEvent* event)
///
void q_splitter_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_splitter_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_splitter_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback bool func(QSplitter* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_splitter_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_splitter_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_splitter_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback int32_t func(QSplitter* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_splitter_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param painter QPainter*
///
void q_splitter_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param painter QPainter*
///
void q_splitter_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback void func(QSplitter* self, QPainter* painter)
///
void q_splitter_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param offset QPoint*
///
QPaintDevice* q_splitter_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param offset QPoint*
///
QPaintDevice* q_splitter_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback QPaintDevice* func(QSplitter* self, QPoint* offset)
///
void q_splitter_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
///
QPainter* q_splitter_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
///
QPainter* q_splitter_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback QPainter* func(QSplitter* self)
///
void q_splitter_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param param1 QInputMethodEvent*
///
void q_splitter_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param param1 QInputMethodEvent*
///
void q_splitter_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QInputMethodEvent* param1)
///
void q_splitter_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_splitter_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_splitter_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback QVariant* func(QSplitter* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_splitter_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param next bool
///
bool q_splitter_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param next bool
///
bool q_splitter_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback bool func(QSplitter* self, bool next)
///
void q_splitter_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_splitter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_splitter_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback bool func(QSplitter* self, QObject* watched, QEvent* event)
///
void q_splitter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QTimerEvent*
///
void q_splitter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QTimerEvent*
///
void q_splitter_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QTimerEvent* event)
///
void q_splitter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param event QEvent*
///
void q_splitter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param event QEvent*
///
void q_splitter_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QEvent* event)
///
void q_splitter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param signal QMetaMethod*
///
void q_splitter_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param signal QMetaMethod*
///
void q_splitter_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QMetaMethod* signal)
///
void q_splitter_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param signal QMetaMethod*
///
void q_splitter_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param signal QMetaMethod*
///
void q_splitter_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QMetaMethod* signal)
///
void q_splitter_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
/// @param param1 QPainter*
///
void q_splitter_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
/// @param param1 QPainter*
///
void q_splitter_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, QPainter* param1)
///
void q_splitter_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
///
void q_splitter_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
///
void q_splitter_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self)
///
void q_splitter_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
///
void q_splitter_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
///
void q_splitter_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self)
///
void q_splitter_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
///
void q_splitter_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
///
void q_splitter_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self)
///
void q_splitter_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
///
bool q_splitter_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
///
bool q_splitter_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback bool func(QSplitter* self)
///
void q_splitter_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitter*
///
bool q_splitter_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitter*
///
bool q_splitter_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitter*
/// @param callback bool func(QSplitter* self)
///
void q_splitter_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
///
QObject* q_splitter_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
///
QObject* q_splitter_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback QObject* func(QSplitter* self)
///
void q_splitter_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
///
int32_t q_splitter_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
///
int32_t q_splitter_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback int32_t func(QSplitter* self)
///
void q_splitter_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param signal const char*
///
int32_t q_splitter_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param signal const char*
///
int32_t q_splitter_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback int32_t func(QSplitter* self, const char* signal)
///
void q_splitter_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param signal QMetaMethod*
///
bool q_splitter_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param signal QMetaMethod*
///
bool q_splitter_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback bool func(QSplitter* self, QMetaMethod* signal)
///
void q_splitter_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_splitter_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_splitter_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitter*
/// @param callback double func(QSplitter* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_splitter_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSplitter*
/// @param callback void func(QSplitter* self, const char* objectName)
///
void q_splitter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitter.html#dtor.QSplitter)
///
/// Delete this object from C++ memory.
///
/// @param self QSplitter*
///
void q_splitter_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html)

/// q_splitterhandle_new constructs a new QSplitterHandle object.
///
/// @param o enum Qt__Orientation
/// @param parent QSplitter*
///
QSplitterHandle* q_splitterhandle_new(int32_t o, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QSplitterHandle*
///
const QMetaObject* q_splitterhandle_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QSplitterHandle*
/// @param callback const QMetaObject* func(const QSplitterHandle* self)
///
void q_splitterhandle_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSplitterHandle*
///
const QMetaObject* q_splitterhandle_super_meta_object(const void* self);

/// @param self QSplitterHandle*
/// @param param1 const char*
///
void* q_splitterhandle_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback void* func(QSplitterHandle* self, const char* param1)
///
void q_splitterhandle_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 const char*
///
void* q_splitterhandle_super_metacast(void* self, const char* param1);

/// @param self QSplitterHandle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_splitterhandle_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback int32_t func(QSplitterHandle* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_splitterhandle_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_splitterhandle_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_splitterhandle_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#setOrientation)
///
/// @param self QSplitterHandle*
/// @param o enum Qt__Orientation
///
void q_splitterhandle_set_orientation(void* self, int32_t o);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#orientation)
///
/// @param self const QSplitterHandle*
///
/// @return enum Qt__Orientation
///
int32_t q_splitterhandle_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#opaqueResize)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_opaque_resize(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#splitter)
///
/// @param self const QSplitterHandle*
///
QSplitter* q_splitterhandle_splitter(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#sizeHint)
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QSplitterHandle*
/// @param callback QSize* func(const QSplitterHandle* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_splitterhandle_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#paintEvent)
///
/// @param self QSplitterHandle*
/// @param param1 QPaintEvent*
///
void q_splitterhandle_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QPaintEvent* param1)
///
void q_splitterhandle_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 QPaintEvent*
///
void q_splitterhandle_super_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mouseMoveEvent)
///
/// @param self QSplitterHandle*
/// @param param1 QMouseEvent*
///
void q_splitterhandle_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QMouseEvent* param1)
///
void q_splitterhandle_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 QMouseEvent*
///
void q_splitterhandle_super_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mousePressEvent)
///
/// @param self QSplitterHandle*
/// @param param1 QMouseEvent*
///
void q_splitterhandle_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QMouseEvent* param1)
///
void q_splitterhandle_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 QMouseEvent*
///
void q_splitterhandle_super_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mouseReleaseEvent)
///
/// @param self QSplitterHandle*
/// @param param1 QMouseEvent*
///
void q_splitterhandle_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QMouseEvent* param1)
///
void q_splitterhandle_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 QMouseEvent*
///
void q_splitterhandle_super_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#resizeEvent)
///
/// @param self QSplitterHandle*
/// @param param1 QResizeEvent*
///
void q_splitterhandle_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QResizeEvent* param1)
///
void q_splitterhandle_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 QResizeEvent*
///
void q_splitterhandle_super_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#event)
///
/// @param self QSplitterHandle*
/// @param param1 QEvent*
///
bool q_splitterhandle_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self, QEvent* param1)
///
void q_splitterhandle_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#event)
///
/// Base class method implementation
///
/// @param self QSplitterHandle*
/// @param param1 QEvent*
///
bool q_splitterhandle_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#moveSplitter)
///
/// @param self QSplitterHandle*
/// @param p int
///
void q_splitterhandle_move_splitter(void* self, int p);

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#closestLegalPosition)
///
/// @param self QSplitterHandle*
/// @param p int
///
int32_t q_splitterhandle_closest_legal_position(void* self, int p);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_splitterhandle_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_splitterhandle_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self QSplitterHandle*
///
QPaintDevice* q_splitterhandle_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a QSplitterHandle object
///
/// @param _qpaintdevice QPaintDevice*
///
QSplitterHandle* q_splitterhandle_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QSplitterHandle*
///
uintptr_t q_splitterhandle_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QSplitterHandle*
///
uintptr_t q_splitterhandle_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QSplitterHandle*
///
uintptr_t q_splitterhandle_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QSplitterHandle*
///
QStyle* q_splitterhandle_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QSplitterHandle*
/// @param style QStyle*
///
void q_splitterhandle_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QSplitterHandle*
///
/// @return enum Qt__WindowModality
///
int32_t q_splitterhandle_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QSplitterHandle*
/// @param windowModality enum Qt__WindowModality
///
void q_splitterhandle_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QSplitterHandle*
/// @param param1 QWidget*
///
bool q_splitterhandle_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QSplitterHandle*
/// @param enabled bool
///
void q_splitterhandle_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QSplitterHandle*
/// @param disabled bool
///
void q_splitterhandle_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QSplitterHandle*
/// @param windowModified bool
///
void q_splitterhandle_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QSplitterHandle*
///
QRect* q_splitterhandle_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QSplitterHandle*
///
const QRect* q_splitterhandle_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QSplitterHandle*
///
QRect* q_splitterhandle_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QSplitterHandle*
///
QPoint* q_splitterhandle_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QSplitterHandle*
///
QRect* q_splitterhandle_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QSplitterHandle*
///
QRect* q_splitterhandle_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QSplitterHandle*
///
QRegion* q_splitterhandle_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QSplitterHandle*
/// @param minimumSize QSize*
///
void q_splitterhandle_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QSplitterHandle*
/// @param minw int
/// @param minh int
///
void q_splitterhandle_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QSplitterHandle*
/// @param maximumSize QSize*
///
void q_splitterhandle_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QSplitterHandle*
/// @param maxw int
/// @param maxh int
///
void q_splitterhandle_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QSplitterHandle*
/// @param minw int
///
void q_splitterhandle_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QSplitterHandle*
/// @param minh int
///
void q_splitterhandle_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QSplitterHandle*
/// @param maxw int
///
void q_splitterhandle_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QSplitterHandle*
/// @param maxh int
///
void q_splitterhandle_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QSplitterHandle*
/// @param sizeIncrement QSize*
///
void q_splitterhandle_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QSplitterHandle*
/// @param w int
/// @param h int
///
void q_splitterhandle_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QSplitterHandle*
/// @param baseSize QSize*
///
void q_splitterhandle_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QSplitterHandle*
/// @param basew int
/// @param baseh int
///
void q_splitterhandle_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QSplitterHandle*
/// @param fixedSize QSize*
///
void q_splitterhandle_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QSplitterHandle*
/// @param w int
/// @param h int
///
void q_splitterhandle_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QSplitterHandle*
/// @param w int
///
void q_splitterhandle_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QSplitterHandle*
/// @param h int
///
void q_splitterhandle_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QSplitterHandle*
/// @param param1 QPointF*
///
QPointF* q_splitterhandle_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QSplitterHandle*
/// @param param1 QPoint*
///
QPoint* q_splitterhandle_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QSplitterHandle*
/// @param param1 QPointF*
///
QPointF* q_splitterhandle_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QSplitterHandle*
/// @param param1 QPoint*
///
QPoint* q_splitterhandle_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QSplitterHandle*
/// @param param1 QPointF*
///
QPointF* q_splitterhandle_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QSplitterHandle*
/// @param param1 QPoint*
///
QPoint* q_splitterhandle_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QSplitterHandle*
/// @param param1 QPointF*
///
QPointF* q_splitterhandle_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QSplitterHandle*
/// @param param1 QPoint*
///
QPoint* q_splitterhandle_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QSplitterHandle*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_splitterhandle_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QSplitterHandle*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_splitterhandle_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QSplitterHandle*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_splitterhandle_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QSplitterHandle*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_splitterhandle_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QSplitterHandle*
///
const QPalette* q_splitterhandle_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QSplitterHandle*
/// @param palette QPalette*
///
void q_splitterhandle_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QSplitterHandle*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_splitterhandle_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QSplitterHandle*
///
/// @return enum QPalette__ColorRole
///
int32_t q_splitterhandle_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QSplitterHandle*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_splitterhandle_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QSplitterHandle*
///
/// @return enum QPalette__ColorRole
///
int32_t q_splitterhandle_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QSplitterHandle*
///
const QFont* q_splitterhandle_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QSplitterHandle*
/// @param font QFont*
///
void q_splitterhandle_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QSplitterHandle*
///
QFontMetrics* q_splitterhandle_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QSplitterHandle*
///
QFontInfo* q_splitterhandle_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QSplitterHandle*
///
QCursor* q_splitterhandle_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QSplitterHandle*
/// @param cursor QCursor*
///
void q_splitterhandle_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QSplitterHandle*
/// @param enable bool
///
void q_splitterhandle_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QSplitterHandle*
/// @param enable bool
///
void q_splitterhandle_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QSplitterHandle*
/// @param mask QBitmap*
///
void q_splitterhandle_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QSplitterHandle*
/// @param mask QRegion*
///
void q_splitterhandle_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QSplitterHandle*
///
QRegion* q_splitterhandle_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param target QPaintDevice*
///
void q_splitterhandle_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param painter QPainter*
///
void q_splitterhandle_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QSplitterHandle*
///
QPixmap* q_splitterhandle_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QSplitterHandle*
///
QGraphicsEffect* q_splitterhandle_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QSplitterHandle*
/// @param effect QGraphicsEffect*
///
void q_splitterhandle_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QSplitterHandle*
/// @param type enum Qt__GestureType
///
void q_splitterhandle_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QSplitterHandle*
/// @param type enum Qt__GestureType
///
void q_splitterhandle_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QSplitterHandle*
/// @param windowTitle const char*
///
void q_splitterhandle_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QSplitterHandle*
/// @param styleSheet const char*
///
void q_splitterhandle_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QSplitterHandle*
/// @param icon QIcon*
///
void q_splitterhandle_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QSplitterHandle*
///
QIcon* q_splitterhandle_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QSplitterHandle*
/// @param windowIconText const char*
///
void q_splitterhandle_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QSplitterHandle*
/// @param windowRole const char*
///
void q_splitterhandle_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QSplitterHandle*
/// @param filePath const char*
///
void q_splitterhandle_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QSplitterHandle*
/// @param level double
///
void q_splitterhandle_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QSplitterHandle*
///
double q_splitterhandle_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QSplitterHandle*
/// @param toolTip const char*
///
void q_splitterhandle_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QSplitterHandle*
/// @param msec int
///
void q_splitterhandle_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QSplitterHandle*
/// @param statusTip const char*
///
void q_splitterhandle_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QSplitterHandle*
/// @param whatsThis const char*
///
void q_splitterhandle_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QSplitterHandle*
/// @param name const char*
///
void q_splitterhandle_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QSplitterHandle*
/// @param description const char*
///
void q_splitterhandle_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QSplitterHandle*
/// @param direction enum Qt__LayoutDirection
///
void q_splitterhandle_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QSplitterHandle*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_splitterhandle_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QSplitterHandle*
/// @param locale QLocale*
///
void q_splitterhandle_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QSplitterHandle*
///
QLocale* q_splitterhandle_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QSplitterHandle*
/// @param reason enum Qt__FocusReason
///
void q_splitterhandle_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QSplitterHandle*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_splitterhandle_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QSplitterHandle*
/// @param policy enum Qt__FocusPolicy
///
void q_splitterhandle_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_splitterhandle_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QSplitterHandle*
/// @param focusProxy QWidget*
///
void q_splitterhandle_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QSplitterHandle*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_splitterhandle_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QSplitterHandle*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_splitterhandle_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QSplitterHandle*
/// @param param1 QCursor*
///
void q_splitterhandle_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QSplitterHandle*
/// @param key QKeySequence*
///
int32_t q_splitterhandle_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QSplitterHandle*
/// @param id int
///
void q_splitterhandle_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QSplitterHandle*
/// @param id int
///
void q_splitterhandle_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QSplitterHandle*
/// @param id int
///
void q_splitterhandle_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_splitterhandle_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_splitterhandle_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QSplitterHandle*
/// @param enable bool
///
void q_splitterhandle_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QSplitterHandle*
///
QGraphicsProxyWidget* q_splitterhandle_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitterHandle*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_splitterhandle_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitterHandle*
/// @param param1 QRect*
///
void q_splitterhandle_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSplitterHandle*
/// @param param1 QRegion*
///
void q_splitterhandle_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitterHandle*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_splitterhandle_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitterHandle*
/// @param param1 QRect*
///
void q_splitterhandle_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSplitterHandle*
/// @param param1 QRegion*
///
void q_splitterhandle_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QSplitterHandle*
/// @param hidden bool
///
void q_splitterhandle_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QSplitterHandle*
///
bool q_splitterhandle_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QSplitterHandle*
/// @param param1 QWidget*
///
void q_splitterhandle_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QSplitterHandle*
/// @param x int
/// @param y int
///
void q_splitterhandle_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QSplitterHandle*
/// @param param1 QPoint*
///
void q_splitterhandle_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QSplitterHandle*
/// @param w int
/// @param h int
///
void q_splitterhandle_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QSplitterHandle*
/// @param param1 QSize*
///
void q_splitterhandle_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QSplitterHandle*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_splitterhandle_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QSplitterHandle*
/// @param geometry QRect*
///
void q_splitterhandle_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSplitterHandle*
///
char* q_splitterhandle_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QSplitterHandle*
/// @param geometry char*
///
bool q_splitterhandle_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QSplitterHandle*
/// @param param1 QWidget*
///
bool q_splitterhandle_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QSplitterHandle*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_splitterhandle_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QSplitterHandle*
/// @param state flag of enum Qt__WindowState
///
void q_splitterhandle_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QSplitterHandle*
/// @param state flag of enum Qt__WindowState
///
void q_splitterhandle_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QSplitterHandle*
///
QSizePolicy* q_splitterhandle_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QSplitterHandle*
/// @param sizePolicy QSizePolicy*
///
void q_splitterhandle_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QSplitterHandle*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_splitterhandle_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QSplitterHandle*
///
QRegion* q_splitterhandle_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QSplitterHandle*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_splitterhandle_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QSplitterHandle*
/// @param margins QMargins*
///
void q_splitterhandle_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QSplitterHandle*
///
QMargins* q_splitterhandle_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QSplitterHandle*
///
QRect* q_splitterhandle_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QSplitterHandle*
///
QLayout* q_splitterhandle_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QSplitterHandle*
/// @param layout QLayout*
///
void q_splitterhandle_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QSplitterHandle*
/// @param parent QWidget*
///
void q_splitterhandle_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QSplitterHandle*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_splitterhandle_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QSplitterHandle*
/// @param dx int
/// @param dy int
///
void q_splitterhandle_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QSplitterHandle*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_splitterhandle_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QSplitterHandle*
/// @param on bool
///
void q_splitterhandle_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitterHandle*
/// @param action QAction*
///
void q_splitterhandle_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QSplitterHandle*
/// @param actions libqt_list of QAction*
///
void q_splitterhandle_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QSplitterHandle*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_splitterhandle_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QSplitterHandle*
/// @param before QAction*
/// @param action QAction*
///
void q_splitterhandle_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QSplitterHandle*
/// @param action QAction*
///
void q_splitterhandle_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QSplitterHandle*
///
/// @return libqt_list of QAction*
///
libqt_list q_splitterhandle_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitterHandle*
/// @param text const char*
///
QAction* q_splitterhandle_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitterHandle*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_splitterhandle_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitterHandle*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_splitterhandle_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSplitterHandle*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_splitterhandle_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QSplitterHandle*
///
QWidget* q_splitterhandle_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QSplitterHandle*
/// @param type flag of enum Qt__WindowType
///
void q_splitterhandle_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QSplitterHandle*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_splitterhandle_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QSplitterHandle*
/// @param param1 enum Qt__WindowType
///
void q_splitterhandle_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QSplitterHandle*
/// @param type flag of enum Qt__WindowType
///
void q_splitterhandle_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QSplitterHandle*
///
/// @return enum Qt__WindowType
///
int32_t q_splitterhandle_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_splitterhandle_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QSplitterHandle*
/// @param x int
/// @param y int
///
QWidget* q_splitterhandle_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QSplitterHandle*
/// @param p QPoint*
///
QWidget* q_splitterhandle_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QSplitterHandle*
/// @param p QPointF*
///
QWidget* q_splitterhandle_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QSplitterHandle*
/// @param param1 enum Qt__WidgetAttribute
///
void q_splitterhandle_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QSplitterHandle*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_splitterhandle_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QSplitterHandle*
///
void q_splitterhandle_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QSplitterHandle*
/// @param child QWidget*
///
bool q_splitterhandle_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QSplitterHandle*
/// @param enabled bool
///
void q_splitterhandle_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QSplitterHandle*
///
QBackingStore* q_splitterhandle_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QSplitterHandle*
///
QWindow* q_splitterhandle_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QSplitterHandle*
///
QScreen* q_splitterhandle_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QSplitterHandle*
/// @param screen QScreen*
///
void q_splitterhandle_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_splitterhandle_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QSplitterHandle*
/// @param title const char*
///
void q_splitterhandle_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, const char* title)
///
void q_splitterhandle_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QSplitterHandle*
/// @param icon QIcon*
///
void q_splitterhandle_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QIcon* icon)
///
void q_splitterhandle_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QSplitterHandle*
/// @param iconText const char*
///
void q_splitterhandle_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, const char* iconText)
///
void q_splitterhandle_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QSplitterHandle*
/// @param pos QPoint*
///
void q_splitterhandle_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QPoint* pos)
///
void q_splitterhandle_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QSplitterHandle*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_splitterhandle_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QSplitterHandle*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_splitterhandle_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_splitterhandle_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_splitterhandle_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_splitterhandle_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_splitterhandle_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_splitterhandle_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSplitterHandle*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_splitterhandle_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QSplitterHandle*
/// @param rectangle QRect*
///
QPixmap* q_splitterhandle_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QSplitterHandle*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_splitterhandle_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QSplitterHandle*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_splitterhandle_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QSplitterHandle*
/// @param id int
/// @param enable bool
///
void q_splitterhandle_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QSplitterHandle*
/// @param id int
/// @param enable bool
///
void q_splitterhandle_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QSplitterHandle*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_splitterhandle_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QSplitterHandle*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_splitterhandle_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_splitterhandle_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_splitterhandle_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSplitterHandle*
///
const char* q_splitterhandle_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSplitterHandle*
/// @param name const char*
///
void q_splitterhandle_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSplitterHandle*
/// @param b bool
///
bool q_splitterhandle_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QSplitterHandle*
///
QThread* q_splitterhandle_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSplitterHandle*
/// @param thread QThread*
///
bool q_splitterhandle_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitterHandle*
/// @param interval int
///
int32_t q_splitterhandle_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitterHandle*
/// @param time int64_t of nanoseconds
///
int32_t q_splitterhandle_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSplitterHandle*
/// @param id int
///
void q_splitterhandle_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSplitterHandle*
/// @param id enum Qt__TimerId
///
void q_splitterhandle_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QSplitterHandle*
///
/// @return libqt_list of QObject*
///
libqt_list q_splitterhandle_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSplitterHandle*
/// @param filterObj QObject*
///
void q_splitterhandle_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSplitterHandle*
/// @param obj QObject*
///
void q_splitterhandle_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_splitterhandle_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_splitterhandle_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSplitterHandle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_splitterhandle_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_splitterhandle_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_splitterhandle_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitterHandle*
/// @param receiver QObject*
///
bool q_splitterhandle_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_splitterhandle_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSplitterHandle*
///
void q_splitterhandle_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSplitterHandle*
///
void q_splitterhandle_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSplitterHandle*
/// @param name const char*
/// @param value QVariant*
///
bool q_splitterhandle_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSplitterHandle*
/// @param name const char*
///
QVariant* q_splitterhandle_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSplitterHandle*
///
const char** q_splitterhandle_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSplitterHandle*
///
QBindingStorage* q_splitterhandle_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QSplitterHandle*
///
const QBindingStorage* q_splitterhandle_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self)
///
void q_splitterhandle_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QSplitterHandle*
///
QObject* q_splitterhandle_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QSplitterHandle*
/// @param classname const char*
///
bool q_splitterhandle_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitterHandle*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_splitterhandle_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplitterHandle*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_splitterhandle_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_splitterhandle_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_splitterhandle_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSplitterHandle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_splitterhandle_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitterHandle*
/// @param signal const char*
///
bool q_splitterhandle_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitterHandle*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_splitterhandle_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitterHandle*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_splitterhandle_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSplitterHandle*
/// @param receiver QObject*
/// @param member const char*
///
bool q_splitterhandle_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitterHandle*
/// @param param1 QObject*
///
void q_splitterhandle_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QObject* param1)
///
void q_splitterhandle_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QSplitterHandle*
///
double q_splitterhandle_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QSplitterHandle*
///
double q_splitterhandle_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_splitterhandle_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_splitterhandle_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback int32_t func(QSplitterHandle* self)
///
void q_splitterhandle_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param visible bool
///
void q_splitterhandle_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param visible bool
///
void q_splitterhandle_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, bool visible)
///
void q_splitterhandle_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
///
QSize* q_splitterhandle_super_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback QSize* func(QSplitterHandle* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_splitterhandle_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param param1 int
///
int32_t q_splitterhandle_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param param1 int
///
int32_t q_splitterhandle_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback int32_t func(QSplitterHandle* self, int param1)
///
void q_splitterhandle_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
///
bool q_splitterhandle_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self)
///
void q_splitterhandle_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
///
QPaintEngine* q_splitterhandle_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
///
QPaintEngine* q_splitterhandle_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback QPaintEngine* func(QSplitterHandle* self)
///
void q_splitterhandle_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QMouseEvent*
///
void q_splitterhandle_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QMouseEvent*
///
void q_splitterhandle_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QMouseEvent* event)
///
void q_splitterhandle_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QWheelEvent*
///
void q_splitterhandle_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QWheelEvent*
///
void q_splitterhandle_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QWheelEvent* event)
///
void q_splitterhandle_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QKeyEvent*
///
void q_splitterhandle_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QKeyEvent*
///
void q_splitterhandle_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QKeyEvent* event)
///
void q_splitterhandle_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QKeyEvent*
///
void q_splitterhandle_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QKeyEvent*
///
void q_splitterhandle_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QKeyEvent* event)
///
void q_splitterhandle_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QFocusEvent*
///
void q_splitterhandle_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QFocusEvent*
///
void q_splitterhandle_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QFocusEvent* event)
///
void q_splitterhandle_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QFocusEvent*
///
void q_splitterhandle_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QFocusEvent*
///
void q_splitterhandle_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QFocusEvent* event)
///
void q_splitterhandle_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QEnterEvent*
///
void q_splitterhandle_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QEnterEvent*
///
void q_splitterhandle_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QEnterEvent* event)
///
void q_splitterhandle_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QEvent*
///
void q_splitterhandle_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QEvent*
///
void q_splitterhandle_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QEvent* event)
///
void q_splitterhandle_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QMoveEvent*
///
void q_splitterhandle_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QMoveEvent*
///
void q_splitterhandle_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QMoveEvent* event)
///
void q_splitterhandle_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QCloseEvent*
///
void q_splitterhandle_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QCloseEvent*
///
void q_splitterhandle_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QCloseEvent* event)
///
void q_splitterhandle_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QContextMenuEvent*
///
void q_splitterhandle_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QContextMenuEvent*
///
void q_splitterhandle_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QContextMenuEvent* event)
///
void q_splitterhandle_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QTabletEvent*
///
void q_splitterhandle_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QTabletEvent*
///
void q_splitterhandle_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QTabletEvent* event)
///
void q_splitterhandle_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QActionEvent*
///
void q_splitterhandle_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QActionEvent*
///
void q_splitterhandle_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QActionEvent* event)
///
void q_splitterhandle_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDragEnterEvent*
///
void q_splitterhandle_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDragEnterEvent*
///
void q_splitterhandle_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QDragEnterEvent* event)
///
void q_splitterhandle_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDragMoveEvent*
///
void q_splitterhandle_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDragMoveEvent*
///
void q_splitterhandle_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QDragMoveEvent* event)
///
void q_splitterhandle_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDragLeaveEvent*
///
void q_splitterhandle_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDragLeaveEvent*
///
void q_splitterhandle_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QDragLeaveEvent* event)
///
void q_splitterhandle_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDropEvent*
///
void q_splitterhandle_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QDropEvent*
///
void q_splitterhandle_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QDropEvent* event)
///
void q_splitterhandle_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QShowEvent*
///
void q_splitterhandle_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QShowEvent*
///
void q_splitterhandle_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QShowEvent* event)
///
void q_splitterhandle_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QHideEvent*
///
void q_splitterhandle_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QHideEvent*
///
void q_splitterhandle_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QHideEvent* event)
///
void q_splitterhandle_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_splitterhandle_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_splitterhandle_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_splitterhandle_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param param1 QEvent*
///
void q_splitterhandle_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param param1 QEvent*
///
void q_splitterhandle_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QEvent* param1)
///
void q_splitterhandle_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_splitterhandle_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_splitterhandle_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback int32_t func(QSplitterHandle* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_splitterhandle_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param painter QPainter*
///
void q_splitterhandle_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param painter QPainter*
///
void q_splitterhandle_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QPainter* painter)
///
void q_splitterhandle_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param offset QPoint*
///
QPaintDevice* q_splitterhandle_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param offset QPoint*
///
QPaintDevice* q_splitterhandle_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback QPaintDevice* func(QSplitterHandle* self, QPoint* offset)
///
void q_splitterhandle_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
///
QPainter* q_splitterhandle_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
///
QPainter* q_splitterhandle_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback QPainter* func(QSplitterHandle* self)
///
void q_splitterhandle_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param param1 QInputMethodEvent*
///
void q_splitterhandle_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param param1 QInputMethodEvent*
///
void q_splitterhandle_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QInputMethodEvent* param1)
///
void q_splitterhandle_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_splitterhandle_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_splitterhandle_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback QVariant* func(QSplitterHandle* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_splitterhandle_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param next bool
///
bool q_splitterhandle_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param next bool
///
bool q_splitterhandle_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self, bool next)
///
void q_splitterhandle_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_splitterhandle_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_splitterhandle_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self, QObject* watched, QEvent* event)
///
void q_splitterhandle_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QTimerEvent*
///
void q_splitterhandle_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QTimerEvent*
///
void q_splitterhandle_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QTimerEvent* event)
///
void q_splitterhandle_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QChildEvent*
///
void q_splitterhandle_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QChildEvent*
///
void q_splitterhandle_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QChildEvent* event)
///
void q_splitterhandle_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QEvent*
///
void q_splitterhandle_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param event QEvent*
///
void q_splitterhandle_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QEvent* event)
///
void q_splitterhandle_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param signal QMetaMethod*
///
void q_splitterhandle_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param signal QMetaMethod*
///
void q_splitterhandle_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QMetaMethod* signal)
///
void q_splitterhandle_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
/// @param signal QMetaMethod*
///
void q_splitterhandle_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param signal QMetaMethod*
///
void q_splitterhandle_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, QMetaMethod* signal)
///
void q_splitterhandle_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self)
///
void q_splitterhandle_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self)
///
void q_splitterhandle_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self)
///
void q_splitterhandle_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
///
bool q_splitterhandle_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
///
bool q_splitterhandle_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self)
///
void q_splitterhandle_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplitterHandle*
///
bool q_splitterhandle_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplitterHandle*
///
bool q_splitterhandle_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self)
///
void q_splitterhandle_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
///
QObject* q_splitterhandle_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
///
QObject* q_splitterhandle_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback QObject* func(QSplitterHandle* self)
///
void q_splitterhandle_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
///
int32_t q_splitterhandle_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback int32_t func(QSplitterHandle* self)
///
void q_splitterhandle_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param signal const char*
///
int32_t q_splitterhandle_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param signal const char*
///
int32_t q_splitterhandle_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback int32_t func(QSplitterHandle* self, const char* signal)
///
void q_splitterhandle_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param signal QMetaMethod*
///
bool q_splitterhandle_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param signal QMetaMethod*
///
bool q_splitterhandle_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback bool func(QSplitterHandle* self, QMetaMethod* signal)
///
void q_splitterhandle_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_splitterhandle_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_splitterhandle_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSplitterHandle*
/// @param callback double func(QSplitterHandle* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_splitterhandle_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSplitterHandle*
/// @param callback void func(QSplitterHandle* self, const char* objectName)
///
void q_splitterhandle_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsplitterhandle.html#dtor.QSplitterHandle)
///
/// Delete this object from C++ memory.
///
/// @param self QSplitterHandle*
///
void q_splitterhandle_delete(void* self);

#endif
