#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBOXPLOTLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBOXPLOTLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html)

/// q_boxplotlegendmarker_new constructs a new QBoxPlotLegendMarker object.
///
/// @param series QBoxPlotSeries*
/// @param legend QLegend*
///
QBoxPlotLegendMarker* q_boxplotlegendmarker_new(void* series, void* legend);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html)

/// q_boxplotlegendmarker_new2 constructs a new QBoxPlotLegendMarker object.
///
/// @param series QBoxPlotSeries*
/// @param legend QLegend*
/// @param parent QObject*
///
QBoxPlotLegendMarker* q_boxplotlegendmarker_new2(void* series, void* legend, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBoxPlotLegendMarker*
///
const QMetaObject* q_boxplotlegendmarker_meta_object(void* self);

/// @param self QBoxPlotLegendMarker*
/// @param param1 const char*
///
void* q_boxplotlegendmarker_metacast(void* self, const char* param1);

/// @param self QBoxPlotLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxplotlegendmarker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback int32_t func(QBoxPlotLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_boxplotlegendmarker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBoxPlotLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxplotlegendmarker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_boxplotlegendmarker_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html#type)
///
/// @param self QBoxPlotLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
///
int32_t q_boxplotlegendmarker_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback int32_t func()
///
void q_boxplotlegendmarker_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QBoxPlotLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
///
int32_t q_boxplotlegendmarker_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html#series)
///
/// @param self QBoxPlotLegendMarker*
///
QBoxPlotSeries* q_boxplotlegendmarker_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback QBoxPlotSeries* func()
///
void q_boxplotlegendmarker_on_series(void* self, QBoxPlotSeries* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// @param self QBoxPlotLegendMarker*
///
QBoxPlotSeries* q_boxplotlegendmarker_qbase_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_boxplotlegendmarker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_boxplotlegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBoxPlotLegendMarker*
///
const char* q_boxplotlegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// @param self QBoxPlotLegendMarker*
/// @param label const char*
///
void q_boxplotlegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// @param self QBoxPlotLegendMarker*
///
QBrush* q_boxplotlegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// @param self QBoxPlotLegendMarker*
/// @param brush QBrush*
///
void q_boxplotlegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// @param self QBoxPlotLegendMarker*
///
QFont* q_boxplotlegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// @param self QBoxPlotLegendMarker*
/// @param font QFont*
///
void q_boxplotlegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// @param self QBoxPlotLegendMarker*
///
QPen* q_boxplotlegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// @param self QBoxPlotLegendMarker*
/// @param pen QPen*
///
void q_boxplotlegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// @param self QBoxPlotLegendMarker*
///
QBrush* q_boxplotlegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// @param self QBoxPlotLegendMarker*
/// @param brush QBrush*
///
void q_boxplotlegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// @param self QBoxPlotLegendMarker*
///
bool q_boxplotlegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// @param self QBoxPlotLegendMarker*
/// @param visible bool
///
void q_boxplotlegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// @param self QBoxPlotLegendMarker*
///
/// @return enum QLegend__MarkerShape
///
int32_t q_boxplotlegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// @param self QBoxPlotLegendMarker*
/// @param shape enum QLegend__MarkerShape
///
void q_boxplotlegendmarker_set_shape(void* self, int32_t shape);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QBoxPlotLegendMarker*
/// @param status bool
///
void q_boxplotlegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, bool status)
///
void q_boxplotlegendmarker_on_hovered(void* self, void (*callback)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_label_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_label_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_font_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_pen_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_shape_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBoxPlotLegendMarker*
///
const char* q_boxplotlegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBoxPlotLegendMarker*
/// @param name char*
///
void q_boxplotlegendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBoxPlotLegendMarker*
///
bool q_boxplotlegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBoxPlotLegendMarker*
///
bool q_boxplotlegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBoxPlotLegendMarker*
///
bool q_boxplotlegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBoxPlotLegendMarker*
///
bool q_boxplotlegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBoxPlotLegendMarker*
/// @param b bool
///
bool q_boxplotlegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBoxPlotLegendMarker*
///
QThread* q_boxplotlegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBoxPlotLegendMarker*
/// @param thread QThread*
///
bool q_boxplotlegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotLegendMarker*
/// @param interval int
///
int32_t q_boxplotlegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotLegendMarker*
/// @param time int64_t of nanoseconds
///
int32_t q_boxplotlegendmarker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxPlotLegendMarker*
/// @param id int
///
void q_boxplotlegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxPlotLegendMarker*
/// @param id enum Qt__TimerId
///
void q_boxplotlegendmarker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBoxPlotLegendMarker*
///
/// @return libqt_list of QObject*
///
libqt_list q_boxplotlegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBoxPlotLegendMarker*
/// @param parent QObject*
///
void q_boxplotlegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBoxPlotLegendMarker*
/// @param filterObj QObject*
///
void q_boxplotlegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBoxPlotLegendMarker*
/// @param obj QObject*
///
void q_boxplotlegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_boxplotlegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBoxPlotLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_boxplotlegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_boxplotlegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_boxplotlegendmarker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBoxPlotLegendMarker*
/// @param name const char*
/// @param value QVariant*
///
bool q_boxplotlegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBoxPlotLegendMarker*
/// @param name const char*
///
QVariant* q_boxplotlegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBoxPlotLegendMarker*
///
const char** q_boxplotlegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBoxPlotLegendMarker*
///
QBindingStorage* q_boxplotlegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBoxPlotLegendMarker*
///
const QBindingStorage* q_boxplotlegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self)
///
void q_boxplotlegendmarker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBoxPlotLegendMarker*
///
QObject* q_boxplotlegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBoxPlotLegendMarker*
/// @param classname const char*
///
bool q_boxplotlegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBoxPlotLegendMarker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_boxplotlegendmarker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotLegendMarker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_boxplotlegendmarker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxPlotLegendMarker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_boxplotlegendmarker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_boxplotlegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBoxPlotLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_boxplotlegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotLegendMarker*
/// @param param1 QObject*
///
void q_boxplotlegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, QObject* param1)
///
void q_boxplotlegendmarker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QEvent*
///
bool q_boxplotlegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QEvent*
///
bool q_boxplotlegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback bool func(QBoxPlotLegendMarker* self, QEvent* event)
///
void q_boxplotlegendmarker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxplotlegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxplotlegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback bool func(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event)
///
void q_boxplotlegendmarker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QTimerEvent*
///
void q_boxplotlegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QTimerEvent*
///
void q_boxplotlegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, QTimerEvent* event)
///
void q_boxplotlegendmarker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QChildEvent*
///
void q_boxplotlegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QChildEvent*
///
void q_boxplotlegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, QChildEvent* event)
///
void q_boxplotlegendmarker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QEvent*
///
void q_boxplotlegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param event QEvent*
///
void q_boxplotlegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, QEvent* event)
///
void q_boxplotlegendmarker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal QMetaMethod*
///
void q_boxplotlegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal QMetaMethod*
///
void q_boxplotlegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, QMetaMethod* signal)
///
void q_boxplotlegendmarker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal QMetaMethod*
///
void q_boxplotlegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal QMetaMethod*
///
void q_boxplotlegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, QMetaMethod* signal)
///
void q_boxplotlegendmarker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
///
QObject* q_boxplotlegendmarker_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
///
QObject* q_boxplotlegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback QObject* func()
///
void q_boxplotlegendmarker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
///
int32_t q_boxplotlegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
///
int32_t q_boxplotlegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback int32_t func()
///
void q_boxplotlegendmarker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal const char*
///
int32_t q_boxplotlegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal const char*
///
int32_t q_boxplotlegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback int32_t func(QBoxPlotLegendMarker* self, const char* signal)
///
void q_boxplotlegendmarker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal QMetaMethod*
///
bool q_boxplotlegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param signal QMetaMethod*
///
bool q_boxplotlegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxPlotLegendMarker*
/// @param callback bool func(QBoxPlotLegendMarker* self, QMetaMethod* signal)
///
void q_boxplotlegendmarker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBoxPlotLegendMarker*
/// @param callback void func(QBoxPlotLegendMarker* self, const char* objectName)
///
void q_boxplotlegendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotlegendmarker-qtcharts.html#dtor.QBoxPlotLegendMarker)
///
/// Delete this object from C++ memory.
///
/// @param self QBoxPlotLegendMarker*
///
void q_boxplotlegendmarker_delete(void* self);

#endif
