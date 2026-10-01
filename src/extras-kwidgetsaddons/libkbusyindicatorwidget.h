#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKBUSYINDICATORWIDGET_H
#define EXTRAS_KWIDGETSADDONS_LIBKBUSYINDICATORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html)

/// k_busyindicatorwidget_new constructs a new KBusyIndicatorWidget object.
///
/// @param parent QWidget*
///
KBusyIndicatorWidget* k_busyindicatorwidget_new(void* parent);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html)

/// k_busyindicatorwidget_new2 constructs a new KBusyIndicatorWidget object.
///
KBusyIndicatorWidget* k_busyindicatorwidget_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KBusyIndicatorWidget*
///
const QMetaObject* k_busyindicatorwidget_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback const QMetaObject* func(const KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KBusyIndicatorWidget*
///
const QMetaObject* k_busyindicatorwidget_super_meta_object(const void* self);

/// @param self KBusyIndicatorWidget*
/// @param param1 const char*
///
void* k_busyindicatorwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void* func(KBusyIndicatorWidget* self, const char* param1)
///
void k_busyindicatorwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KBusyIndicatorWidget*
/// @param param1 const char*
///
void* k_busyindicatorwidget_super_metacast(void* self, const char* param1);

/// @param self KBusyIndicatorWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_busyindicatorwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KBusyIndicatorWidget*
/// @param callback int32_t func(KBusyIndicatorWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_busyindicatorwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KBusyIndicatorWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_busyindicatorwidget_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_busyindicatorwidget_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#minimumSizeHint)
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_minimum_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback QSize* func(const KBusyIndicatorWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_busyindicatorwidget_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#isRunning)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_running(const void* self);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#start)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_start(void* self);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#stop)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_stop(void* self);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#setRunning)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_set_running(void* self);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#showEvent)
///
/// @param self KBusyIndicatorWidget*
/// @param event QShowEvent*
///
void k_busyindicatorwidget_show_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QShowEvent* event)
///
void k_busyindicatorwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#showEvent)
///
/// Base class method implementation
///
/// @param self KBusyIndicatorWidget*
/// @param event QShowEvent*
///
void k_busyindicatorwidget_super_show_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#hideEvent)
///
/// @param self KBusyIndicatorWidget*
/// @param event QHideEvent*
///
void k_busyindicatorwidget_hide_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QHideEvent* event)
///
void k_busyindicatorwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#hideEvent)
///
/// Base class method implementation
///
/// @param self KBusyIndicatorWidget*
/// @param event QHideEvent*
///
void k_busyindicatorwidget_super_hide_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#resizeEvent)
///
/// @param self KBusyIndicatorWidget*
/// @param event QResizeEvent*
///
void k_busyindicatorwidget_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QResizeEvent* event)
///
void k_busyindicatorwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KBusyIndicatorWidget*
/// @param event QResizeEvent*
///
void k_busyindicatorwidget_super_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#paintEvent)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QPaintEvent*
///
void k_busyindicatorwidget_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QPaintEvent* param1)
///
void k_busyindicatorwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QPaintEvent*
///
void k_busyindicatorwidget_super_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#event)
///
/// @param self KBusyIndicatorWidget*
/// @param event QEvent*
///
bool k_busyindicatorwidget_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self, QEvent* event)
///
void k_busyindicatorwidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#event)
///
/// Base class method implementation
///
/// @param self KBusyIndicatorWidget*
/// @param event QEvent*
///
bool k_busyindicatorwidget_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_busyindicatorwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_busyindicatorwidget_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#setRunning)
///
/// @param self KBusyIndicatorWidget*
/// @param enable bool
///
void k_busyindicatorwidget_set_running1(void* self, bool enable);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self KBusyIndicatorWidget*
///
QPaintDevice* k_busyindicatorwidget_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a KBusyIndicatorWidget object
///
/// @param _qpaintdevice QPaintDevice*
///
KBusyIndicatorWidget* k_busyindicatorwidget_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KBusyIndicatorWidget*
///
uintptr_t k_busyindicatorwidget_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KBusyIndicatorWidget*
///
uintptr_t k_busyindicatorwidget_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KBusyIndicatorWidget*
///
uintptr_t k_busyindicatorwidget_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KBusyIndicatorWidget*
///
QStyle* k_busyindicatorwidget_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KBusyIndicatorWidget*
/// @param style QStyle*
///
void k_busyindicatorwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_busyindicatorwidget_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KBusyIndicatorWidget*
/// @param windowModality enum Qt__WindowModality
///
void k_busyindicatorwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QWidget*
///
bool k_busyindicatorwidget_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KBusyIndicatorWidget*
/// @param enabled bool
///
void k_busyindicatorwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KBusyIndicatorWidget*
/// @param disabled bool
///
void k_busyindicatorwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KBusyIndicatorWidget*
/// @param windowModified bool
///
void k_busyindicatorwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KBusyIndicatorWidget*
///
QRect* k_busyindicatorwidget_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KBusyIndicatorWidget*
///
const QRect* k_busyindicatorwidget_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KBusyIndicatorWidget*
///
QRect* k_busyindicatorwidget_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KBusyIndicatorWidget*
///
QPoint* k_busyindicatorwidget_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KBusyIndicatorWidget*
///
QRect* k_busyindicatorwidget_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KBusyIndicatorWidget*
///
QRect* k_busyindicatorwidget_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KBusyIndicatorWidget*
///
QRegion* k_busyindicatorwidget_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KBusyIndicatorWidget*
/// @param minimumSize QSize*
///
void k_busyindicatorwidget_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KBusyIndicatorWidget*
/// @param minw int
/// @param minh int
///
void k_busyindicatorwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KBusyIndicatorWidget*
/// @param maximumSize QSize*
///
void k_busyindicatorwidget_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KBusyIndicatorWidget*
/// @param maxw int
/// @param maxh int
///
void k_busyindicatorwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KBusyIndicatorWidget*
/// @param minw int
///
void k_busyindicatorwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KBusyIndicatorWidget*
/// @param minh int
///
void k_busyindicatorwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KBusyIndicatorWidget*
/// @param maxw int
///
void k_busyindicatorwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KBusyIndicatorWidget*
/// @param maxh int
///
void k_busyindicatorwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KBusyIndicatorWidget*
/// @param sizeIncrement QSize*
///
void k_busyindicatorwidget_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KBusyIndicatorWidget*
/// @param w int
/// @param h int
///
void k_busyindicatorwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KBusyIndicatorWidget*
/// @param baseSize QSize*
///
void k_busyindicatorwidget_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KBusyIndicatorWidget*
/// @param basew int
/// @param baseh int
///
void k_busyindicatorwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KBusyIndicatorWidget*
/// @param fixedSize QSize*
///
void k_busyindicatorwidget_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KBusyIndicatorWidget*
/// @param w int
/// @param h int
///
void k_busyindicatorwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KBusyIndicatorWidget*
/// @param w int
///
void k_busyindicatorwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KBusyIndicatorWidget*
/// @param h int
///
void k_busyindicatorwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPointF*
///
QPointF* k_busyindicatorwidget_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPoint*
///
QPoint* k_busyindicatorwidget_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPointF*
///
QPointF* k_busyindicatorwidget_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPoint*
///
QPoint* k_busyindicatorwidget_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPointF*
///
QPointF* k_busyindicatorwidget_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPoint*
///
QPoint* k_busyindicatorwidget_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPointF*
///
QPointF* k_busyindicatorwidget_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QPoint*
///
QPoint* k_busyindicatorwidget_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_busyindicatorwidget_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_busyindicatorwidget_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_busyindicatorwidget_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_busyindicatorwidget_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KBusyIndicatorWidget*
///
const QPalette* k_busyindicatorwidget_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KBusyIndicatorWidget*
/// @param palette QPalette*
///
void k_busyindicatorwidget_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KBusyIndicatorWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_busyindicatorwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_busyindicatorwidget_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KBusyIndicatorWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_busyindicatorwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_busyindicatorwidget_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KBusyIndicatorWidget*
///
const QFont* k_busyindicatorwidget_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KBusyIndicatorWidget*
/// @param font QFont*
///
void k_busyindicatorwidget_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KBusyIndicatorWidget*
///
QFontMetrics* k_busyindicatorwidget_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KBusyIndicatorWidget*
///
QFontInfo* k_busyindicatorwidget_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KBusyIndicatorWidget*
///
QCursor* k_busyindicatorwidget_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KBusyIndicatorWidget*
/// @param cursor QCursor*
///
void k_busyindicatorwidget_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KBusyIndicatorWidget*
/// @param enable bool
///
void k_busyindicatorwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KBusyIndicatorWidget*
/// @param enable bool
///
void k_busyindicatorwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KBusyIndicatorWidget*
/// @param mask QBitmap*
///
void k_busyindicatorwidget_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KBusyIndicatorWidget*
/// @param mask QRegion*
///
void k_busyindicatorwidget_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KBusyIndicatorWidget*
///
QRegion* k_busyindicatorwidget_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param target QPaintDevice*
///
void k_busyindicatorwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param painter QPainter*
///
void k_busyindicatorwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KBusyIndicatorWidget*
///
QPixmap* k_busyindicatorwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KBusyIndicatorWidget*
///
QGraphicsEffect* k_busyindicatorwidget_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KBusyIndicatorWidget*
/// @param effect QGraphicsEffect*
///
void k_busyindicatorwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KBusyIndicatorWidget*
/// @param type enum Qt__GestureType
///
void k_busyindicatorwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KBusyIndicatorWidget*
/// @param type enum Qt__GestureType
///
void k_busyindicatorwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KBusyIndicatorWidget*
/// @param windowTitle const char*
///
void k_busyindicatorwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KBusyIndicatorWidget*
/// @param styleSheet const char*
///
void k_busyindicatorwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KBusyIndicatorWidget*
/// @param icon QIcon*
///
void k_busyindicatorwidget_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KBusyIndicatorWidget*
///
QIcon* k_busyindicatorwidget_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KBusyIndicatorWidget*
/// @param windowIconText const char*
///
void k_busyindicatorwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KBusyIndicatorWidget*
/// @param windowRole const char*
///
void k_busyindicatorwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KBusyIndicatorWidget*
/// @param filePath const char*
///
void k_busyindicatorwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KBusyIndicatorWidget*
/// @param level double
///
void k_busyindicatorwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KBusyIndicatorWidget*
///
double k_busyindicatorwidget_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KBusyIndicatorWidget*
/// @param toolTip const char*
///
void k_busyindicatorwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KBusyIndicatorWidget*
/// @param msec int
///
void k_busyindicatorwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KBusyIndicatorWidget*
/// @param statusTip const char*
///
void k_busyindicatorwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KBusyIndicatorWidget*
/// @param whatsThis const char*
///
void k_busyindicatorwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KBusyIndicatorWidget*
/// @param name const char*
///
void k_busyindicatorwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KBusyIndicatorWidget*
/// @param description const char*
///
void k_busyindicatorwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KBusyIndicatorWidget*
/// @param direction enum Qt__LayoutDirection
///
void k_busyindicatorwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_busyindicatorwidget_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KBusyIndicatorWidget*
/// @param locale QLocale*
///
void k_busyindicatorwidget_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KBusyIndicatorWidget*
///
QLocale* k_busyindicatorwidget_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KBusyIndicatorWidget*
/// @param reason enum Qt__FocusReason
///
void k_busyindicatorwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_busyindicatorwidget_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KBusyIndicatorWidget*
/// @param policy enum Qt__FocusPolicy
///
void k_busyindicatorwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_busyindicatorwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KBusyIndicatorWidget*
/// @param focusProxy QWidget*
///
void k_busyindicatorwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_busyindicatorwidget_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KBusyIndicatorWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_busyindicatorwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QCursor*
///
void k_busyindicatorwidget_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KBusyIndicatorWidget*
/// @param key QKeySequence*
///
int32_t k_busyindicatorwidget_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KBusyIndicatorWidget*
/// @param id int
///
void k_busyindicatorwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KBusyIndicatorWidget*
/// @param id int
///
void k_busyindicatorwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KBusyIndicatorWidget*
/// @param id int
///
void k_busyindicatorwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_busyindicatorwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_busyindicatorwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KBusyIndicatorWidget*
/// @param enable bool
///
void k_busyindicatorwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KBusyIndicatorWidget*
///
QGraphicsProxyWidget* k_busyindicatorwidget_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBusyIndicatorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_busyindicatorwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QRect*
///
void k_busyindicatorwidget_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QRegion*
///
void k_busyindicatorwidget_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBusyIndicatorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_busyindicatorwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QRect*
///
void k_busyindicatorwidget_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QRegion*
///
void k_busyindicatorwidget_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KBusyIndicatorWidget*
/// @param hidden bool
///
void k_busyindicatorwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QWidget*
///
void k_busyindicatorwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KBusyIndicatorWidget*
/// @param x int
/// @param y int
///
void k_busyindicatorwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QPoint*
///
void k_busyindicatorwidget_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KBusyIndicatorWidget*
/// @param w int
/// @param h int
///
void k_busyindicatorwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QSize*
///
void k_busyindicatorwidget_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KBusyIndicatorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_busyindicatorwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KBusyIndicatorWidget*
/// @param geometry QRect*
///
void k_busyindicatorwidget_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KBusyIndicatorWidget*
///
char* k_busyindicatorwidget_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KBusyIndicatorWidget*
/// @param geometry char*
///
bool k_busyindicatorwidget_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 QWidget*
///
bool k_busyindicatorwidget_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_busyindicatorwidget_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KBusyIndicatorWidget*
/// @param state flag of enum Qt__WindowState
///
void k_busyindicatorwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KBusyIndicatorWidget*
/// @param state flag of enum Qt__WindowState
///
void k_busyindicatorwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KBusyIndicatorWidget*
///
QSizePolicy* k_busyindicatorwidget_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KBusyIndicatorWidget*
/// @param sizePolicy QSizePolicy*
///
void k_busyindicatorwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KBusyIndicatorWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_busyindicatorwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KBusyIndicatorWidget*
///
QRegion* k_busyindicatorwidget_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KBusyIndicatorWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_busyindicatorwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KBusyIndicatorWidget*
/// @param margins QMargins*
///
void k_busyindicatorwidget_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KBusyIndicatorWidget*
///
QMargins* k_busyindicatorwidget_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KBusyIndicatorWidget*
///
QRect* k_busyindicatorwidget_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KBusyIndicatorWidget*
///
QLayout* k_busyindicatorwidget_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KBusyIndicatorWidget*
/// @param layout QLayout*
///
void k_busyindicatorwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KBusyIndicatorWidget*
/// @param parent QWidget*
///
void k_busyindicatorwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KBusyIndicatorWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_busyindicatorwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KBusyIndicatorWidget*
/// @param dx int
/// @param dy int
///
void k_busyindicatorwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KBusyIndicatorWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_busyindicatorwidget_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KBusyIndicatorWidget*
/// @param on bool
///
void k_busyindicatorwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBusyIndicatorWidget*
/// @param action QAction*
///
void k_busyindicatorwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KBusyIndicatorWidget*
/// @param actions libqt_list of QAction*
///
void k_busyindicatorwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KBusyIndicatorWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_busyindicatorwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KBusyIndicatorWidget*
/// @param before QAction*
/// @param action QAction*
///
void k_busyindicatorwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KBusyIndicatorWidget*
/// @param action QAction*
///
void k_busyindicatorwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_busyindicatorwidget_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBusyIndicatorWidget*
/// @param text const char*
///
QAction* k_busyindicatorwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBusyIndicatorWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_busyindicatorwidget_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBusyIndicatorWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_busyindicatorwidget_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBusyIndicatorWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_busyindicatorwidget_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KBusyIndicatorWidget*
///
QWidget* k_busyindicatorwidget_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KBusyIndicatorWidget*
/// @param type flag of enum Qt__WindowType
///
void k_busyindicatorwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_busyindicatorwidget_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 enum Qt__WindowType
///
void k_busyindicatorwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KBusyIndicatorWidget*
/// @param type flag of enum Qt__WindowType
///
void k_busyindicatorwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return enum Qt__WindowType
///
int32_t k_busyindicatorwidget_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_busyindicatorwidget_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBusyIndicatorWidget*
/// @param x int
/// @param y int
///
QWidget* k_busyindicatorwidget_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBusyIndicatorWidget*
/// @param p QPoint*
///
QWidget* k_busyindicatorwidget_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBusyIndicatorWidget*
/// @param p QPointF*
///
QWidget* k_busyindicatorwidget_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void k_busyindicatorwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_busyindicatorwidget_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KBusyIndicatorWidget*
///
void k_busyindicatorwidget_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KBusyIndicatorWidget*
/// @param child QWidget*
///
bool k_busyindicatorwidget_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KBusyIndicatorWidget*
/// @param enabled bool
///
void k_busyindicatorwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KBusyIndicatorWidget*
///
QBackingStore* k_busyindicatorwidget_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KBusyIndicatorWidget*
///
QWindow* k_busyindicatorwidget_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KBusyIndicatorWidget*
///
QScreen* k_busyindicatorwidget_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KBusyIndicatorWidget*
/// @param screen QScreen*
///
void k_busyindicatorwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_busyindicatorwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KBusyIndicatorWidget*
/// @param title const char*
///
void k_busyindicatorwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, const char* title)
///
void k_busyindicatorwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KBusyIndicatorWidget*
/// @param icon QIcon*
///
void k_busyindicatorwidget_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QIcon* icon)
///
void k_busyindicatorwidget_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KBusyIndicatorWidget*
/// @param iconText const char*
///
void k_busyindicatorwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, const char* iconText)
///
void k_busyindicatorwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KBusyIndicatorWidget*
/// @param pos QPoint*
///
void k_busyindicatorwidget_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QPoint* pos)
///
void k_busyindicatorwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_busyindicatorwidget_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KBusyIndicatorWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_busyindicatorwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_busyindicatorwidget_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_busyindicatorwidget_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_busyindicatorwidget_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_busyindicatorwidget_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_busyindicatorwidget_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBusyIndicatorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_busyindicatorwidget_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KBusyIndicatorWidget*
/// @param rectangle QRect*
///
QPixmap* k_busyindicatorwidget_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KBusyIndicatorWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_busyindicatorwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KBusyIndicatorWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_busyindicatorwidget_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KBusyIndicatorWidget*
/// @param id int
/// @param enable bool
///
void k_busyindicatorwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KBusyIndicatorWidget*
/// @param id int
/// @param enable bool
///
void k_busyindicatorwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_busyindicatorwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_busyindicatorwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_busyindicatorwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_busyindicatorwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char* k_busyindicatorwidget_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KBusyIndicatorWidget*
/// @param name const char*
///
void k_busyindicatorwidget_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KBusyIndicatorWidget*
/// @param b bool
///
bool k_busyindicatorwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KBusyIndicatorWidget*
///
QThread* k_busyindicatorwidget_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBusyIndicatorWidget*
/// @param thread QThread*
///
bool k_busyindicatorwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBusyIndicatorWidget*
/// @param interval int
///
int32_t k_busyindicatorwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBusyIndicatorWidget*
/// @param time int64_t of nanoseconds
///
int32_t k_busyindicatorwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBusyIndicatorWidget*
/// @param id int
///
void k_busyindicatorwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBusyIndicatorWidget*
/// @param id enum Qt__TimerId
///
void k_busyindicatorwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KBusyIndicatorWidget*
///
/// @return libqt_list of QObject*
///
libqt_list k_busyindicatorwidget_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KBusyIndicatorWidget*
/// @param filterObj QObject*
///
void k_busyindicatorwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KBusyIndicatorWidget*
/// @param obj QObject*
///
void k_busyindicatorwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_busyindicatorwidget_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_busyindicatorwidget_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KBusyIndicatorWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_busyindicatorwidget_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_busyindicatorwidget_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_busyindicatorwidget_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBusyIndicatorWidget*
/// @param receiver QObject*
///
bool k_busyindicatorwidget_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_busyindicatorwidget_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KBusyIndicatorWidget*
///
void k_busyindicatorwidget_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KBusyIndicatorWidget*
///
void k_busyindicatorwidget_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KBusyIndicatorWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_busyindicatorwidget_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KBusyIndicatorWidget*
/// @param name const char*
///
QVariant* k_busyindicatorwidget_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KBusyIndicatorWidget*
///
const char** k_busyindicatorwidget_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBusyIndicatorWidget*
///
QBindingStorage* k_busyindicatorwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KBusyIndicatorWidget*
///
const QBindingStorage* k_busyindicatorwidget_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KBusyIndicatorWidget*
///
QObject* k_busyindicatorwidget_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KBusyIndicatorWidget*
/// @param classname const char*
///
bool k_busyindicatorwidget_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBusyIndicatorWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_busyindicatorwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBusyIndicatorWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_busyindicatorwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_busyindicatorwidget_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_busyindicatorwidget_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KBusyIndicatorWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_busyindicatorwidget_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBusyIndicatorWidget*
/// @param signal const char*
///
bool k_busyindicatorwidget_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBusyIndicatorWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_busyindicatorwidget_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBusyIndicatorWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_busyindicatorwidget_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBusyIndicatorWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool k_busyindicatorwidget_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QObject*
///
void k_busyindicatorwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QObject* param1)
///
void k_busyindicatorwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KBusyIndicatorWidget*
///
double k_busyindicatorwidget_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KBusyIndicatorWidget*
///
double k_busyindicatorwidget_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_busyindicatorwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_busyindicatorwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback int32_t func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param visible bool
///
void k_busyindicatorwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param visible bool
///
void k_busyindicatorwidget_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, bool visible)
///
void k_busyindicatorwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QSize* k_busyindicatorwidget_super_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback QSize* func(KBusyIndicatorWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_busyindicatorwidget_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 int
///
int32_t k_busyindicatorwidget_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 int
///
int32_t k_busyindicatorwidget_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback int32_t func(KBusyIndicatorWidget* self, int param1)
///
void k_busyindicatorwidget_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QPaintEngine* k_busyindicatorwidget_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QPaintEngine* k_busyindicatorwidget_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback QPaintEngine* func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QMouseEvent* event)
///
void k_busyindicatorwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QMouseEvent* event)
///
void k_busyindicatorwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QMouseEvent* event)
///
void k_busyindicatorwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMouseEvent*
///
void k_busyindicatorwidget_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QMouseEvent* event)
///
void k_busyindicatorwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QWheelEvent*
///
void k_busyindicatorwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QWheelEvent*
///
void k_busyindicatorwidget_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QWheelEvent* event)
///
void k_busyindicatorwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QKeyEvent*
///
void k_busyindicatorwidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QKeyEvent*
///
void k_busyindicatorwidget_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QKeyEvent* event)
///
void k_busyindicatorwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QKeyEvent*
///
void k_busyindicatorwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QKeyEvent*
///
void k_busyindicatorwidget_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QKeyEvent* event)
///
void k_busyindicatorwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QFocusEvent*
///
void k_busyindicatorwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QFocusEvent*
///
void k_busyindicatorwidget_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QFocusEvent* event)
///
void k_busyindicatorwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QFocusEvent*
///
void k_busyindicatorwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QFocusEvent*
///
void k_busyindicatorwidget_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QFocusEvent* event)
///
void k_busyindicatorwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QEnterEvent*
///
void k_busyindicatorwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QEnterEvent*
///
void k_busyindicatorwidget_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QEnterEvent* event)
///
void k_busyindicatorwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QEvent*
///
void k_busyindicatorwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QEvent*
///
void k_busyindicatorwidget_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QEvent* event)
///
void k_busyindicatorwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMoveEvent*
///
void k_busyindicatorwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QMoveEvent*
///
void k_busyindicatorwidget_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QMoveEvent* event)
///
void k_busyindicatorwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QCloseEvent*
///
void k_busyindicatorwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QCloseEvent*
///
void k_busyindicatorwidget_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QCloseEvent* event)
///
void k_busyindicatorwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QContextMenuEvent*
///
void k_busyindicatorwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QContextMenuEvent*
///
void k_busyindicatorwidget_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QContextMenuEvent* event)
///
void k_busyindicatorwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QTabletEvent*
///
void k_busyindicatorwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QTabletEvent*
///
void k_busyindicatorwidget_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QTabletEvent* event)
///
void k_busyindicatorwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QActionEvent*
///
void k_busyindicatorwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QActionEvent*
///
void k_busyindicatorwidget_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QActionEvent* event)
///
void k_busyindicatorwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDragEnterEvent*
///
void k_busyindicatorwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDragEnterEvent*
///
void k_busyindicatorwidget_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QDragEnterEvent* event)
///
void k_busyindicatorwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDragMoveEvent*
///
void k_busyindicatorwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDragMoveEvent*
///
void k_busyindicatorwidget_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QDragMoveEvent* event)
///
void k_busyindicatorwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDragLeaveEvent*
///
void k_busyindicatorwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDragLeaveEvent*
///
void k_busyindicatorwidget_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QDragLeaveEvent* event)
///
void k_busyindicatorwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDropEvent*
///
void k_busyindicatorwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QDropEvent*
///
void k_busyindicatorwidget_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QDropEvent* event)
///
void k_busyindicatorwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_busyindicatorwidget_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_busyindicatorwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_busyindicatorwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QEvent*
///
void k_busyindicatorwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QEvent*
///
void k_busyindicatorwidget_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QEvent* param1)
///
void k_busyindicatorwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_busyindicatorwidget_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_busyindicatorwidget_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback int32_t func(KBusyIndicatorWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_busyindicatorwidget_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param painter QPainter*
///
void k_busyindicatorwidget_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param painter QPainter*
///
void k_busyindicatorwidget_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QPainter* painter)
///
void k_busyindicatorwidget_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param offset QPoint*
///
QPaintDevice* k_busyindicatorwidget_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param offset QPoint*
///
QPaintDevice* k_busyindicatorwidget_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback QPaintDevice* func(KBusyIndicatorWidget* self, QPoint* offset)
///
void k_busyindicatorwidget_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QPainter* k_busyindicatorwidget_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QPainter* k_busyindicatorwidget_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback QPainter* func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QInputMethodEvent*
///
void k_busyindicatorwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param param1 QInputMethodEvent*
///
void k_busyindicatorwidget_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QInputMethodEvent* param1)
///
void k_busyindicatorwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_busyindicatorwidget_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_busyindicatorwidget_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback QVariant* func(KBusyIndicatorWidget* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_busyindicatorwidget_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param next bool
///
bool k_busyindicatorwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param next bool
///
bool k_busyindicatorwidget_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self, bool next)
///
void k_busyindicatorwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_busyindicatorwidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_busyindicatorwidget_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self, QObject* watched, QEvent* event)
///
void k_busyindicatorwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QTimerEvent*
///
void k_busyindicatorwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QTimerEvent*
///
void k_busyindicatorwidget_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QTimerEvent* event)
///
void k_busyindicatorwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QChildEvent*
///
void k_busyindicatorwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QChildEvent*
///
void k_busyindicatorwidget_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QChildEvent* event)
///
void k_busyindicatorwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QEvent*
///
void k_busyindicatorwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param event QEvent*
///
void k_busyindicatorwidget_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QEvent* event)
///
void k_busyindicatorwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param signal QMetaMethod*
///
void k_busyindicatorwidget_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param signal QMetaMethod*
///
void k_busyindicatorwidget_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QMetaMethod* signal)
///
void k_busyindicatorwidget_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param signal QMetaMethod*
///
void k_busyindicatorwidget_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param signal QMetaMethod*
///
void k_busyindicatorwidget_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, QMetaMethod* signal)
///
void k_busyindicatorwidget_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
///
bool k_busyindicatorwidget_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QObject* k_busyindicatorwidget_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
QObject* k_busyindicatorwidget_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback QObject* func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
///
int32_t k_busyindicatorwidget_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback int32_t func(KBusyIndicatorWidget* self)
///
void k_busyindicatorwidget_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param signal const char*
///
int32_t k_busyindicatorwidget_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param signal const char*
///
int32_t k_busyindicatorwidget_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback int32_t func(KBusyIndicatorWidget* self, const char* signal)
///
void k_busyindicatorwidget_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param signal QMetaMethod*
///
bool k_busyindicatorwidget_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param signal QMetaMethod*
///
bool k_busyindicatorwidget_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback bool func(KBusyIndicatorWidget* self, QMetaMethod* signal)
///
void k_busyindicatorwidget_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_busyindicatorwidget_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_busyindicatorwidget_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KBusyIndicatorWidget*
/// @param callback double func(KBusyIndicatorWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_busyindicatorwidget_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KBusyIndicatorWidget*
/// @param callback void func(KBusyIndicatorWidget* self, const char* objectName)
///
void k_busyindicatorwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kbusyindicatorwidget.html#dtor.KBusyIndicatorWidget)
///
/// Delete this object from C++ memory.
///
/// @param self KBusyIndicatorWidget*
///
void k_busyindicatorwidget_delete(void* self);

#endif
