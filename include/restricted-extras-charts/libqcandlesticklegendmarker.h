#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKLEGENDMARKER_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html)

/// q_candlesticklegendmarker_new constructs a new QCandlestickLegendMarker object.
///
/// @param series QCandlestickSeries*
/// @param legend QLegend*
///
QCandlestickLegendMarker* q_candlesticklegendmarker_new(void* series, void* legend);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html)

/// q_candlesticklegendmarker_new2 constructs a new QCandlestickLegendMarker object.
///
/// @param series QCandlestickSeries*
/// @param legend QLegend*
/// @param parent QObject*
///
QCandlestickLegendMarker* q_candlesticklegendmarker_new2(void* series, void* legend, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCandlestickLegendMarker*
///
const QMetaObject* q_candlesticklegendmarker_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QCandlestickLegendMarker*
/// @param callback const QMetaObject* func(const QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCandlestickLegendMarker*
///
const QMetaObject* q_candlesticklegendmarker_super_meta_object(const void* self);

/// @param self QCandlestickLegendMarker*
/// @param param1 const char*
///
void* q_candlesticklegendmarker_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void* func(QCandlestickLegendMarker* self, const char* param1)
///
void q_candlesticklegendmarker_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCandlestickLegendMarker*
/// @param param1 const char*
///
void* q_candlesticklegendmarker_super_metacast(void* self, const char* param1);

/// @param self QCandlestickLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlesticklegendmarker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCandlestickLegendMarker*
/// @param callback int32_t func(QCandlestickLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_candlesticklegendmarker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCandlestickLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlesticklegendmarker_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_candlesticklegendmarker_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// @param self QCandlestickLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
///
int32_t q_candlesticklegendmarker_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QCandlestickLegendMarker*
/// @param callback int32_t func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_type(void* self, int32_t (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QCandlestickLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
///
int32_t q_candlesticklegendmarker_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// @param self QCandlestickLegendMarker*
///
QCandlestickSeries* q_candlesticklegendmarker_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// @param self QCandlestickLegendMarker*
/// @param callback QCandlestickSeries* func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_series(void* self, QCandlestickSeries* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// @param self QCandlestickLegendMarker*
///
QCandlestickSeries* q_candlesticklegendmarker_super_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_candlesticklegendmarker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_candlesticklegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCandlestickLegendMarker*
///
const char* q_candlesticklegendmarker_label(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// @param self QCandlestickLegendMarker*
/// @param label const char*
///
void q_candlesticklegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// @param self const QCandlestickLegendMarker*
///
QBrush* q_candlesticklegendmarker_label_brush(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// @param self QCandlestickLegendMarker*
/// @param brush QBrush*
///
void q_candlesticklegendmarker_set_label_brush(void* self, const void* brush);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// @param self const QCandlestickLegendMarker*
///
QFont* q_candlesticklegendmarker_font(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// @param self QCandlestickLegendMarker*
/// @param font QFont*
///
void q_candlesticklegendmarker_set_font(void* self, const void* font);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// @param self const QCandlestickLegendMarker*
///
QPen* q_candlesticklegendmarker_pen(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// @param self QCandlestickLegendMarker*
/// @param pen QPen*
///
void q_candlesticklegendmarker_set_pen(void* self, const void* pen);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// @param self const QCandlestickLegendMarker*
///
QBrush* q_candlesticklegendmarker_brush(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// @param self QCandlestickLegendMarker*
/// @param brush QBrush*
///
void q_candlesticklegendmarker_set_brush(void* self, const void* brush);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// @param self const QCandlestickLegendMarker*
///
bool q_candlesticklegendmarker_is_visible(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// @param self QCandlestickLegendMarker*
/// @param visible bool
///
void q_candlesticklegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// @param self const QCandlestickLegendMarker*
///
/// @return enum QLegend__MarkerShape
///
int32_t q_candlesticklegendmarker_shape(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// @param self QCandlestickLegendMarker*
/// @param shape enum QLegend__MarkerShape
///
void q_candlesticklegendmarker_set_shape(void* self, int32_t shape);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QCandlestickLegendMarker*
/// @param status bool
///
void q_candlesticklegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, bool status)
///
void q_candlesticklegendmarker_on_hovered(void* self, void (*callback)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_label_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_label_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_font_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_pen_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_shape_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCandlestickLegendMarker*
///
const char* q_candlesticklegendmarker_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCandlestickLegendMarker*
/// @param name const char*
///
void q_candlesticklegendmarker_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QCandlestickLegendMarker*
///
bool q_candlesticklegendmarker_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCandlestickLegendMarker*
///
bool q_candlesticklegendmarker_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCandlestickLegendMarker*
///
bool q_candlesticklegendmarker_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCandlestickLegendMarker*
///
bool q_candlesticklegendmarker_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCandlestickLegendMarker*
/// @param b bool
///
bool q_candlesticklegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QCandlestickLegendMarker*
///
QThread* q_candlesticklegendmarker_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickLegendMarker*
/// @param thread QThread*
///
bool q_candlesticklegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param interval int
///
int32_t q_candlesticklegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param time int64_t of nanoseconds
///
int32_t q_candlesticklegendmarker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param id int
///
void q_candlesticklegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param id enum Qt__TimerId
///
void q_candlesticklegendmarker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QCandlestickLegendMarker*
///
/// @return libqt_list of QObject*
///
libqt_list q_candlesticklegendmarker_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCandlestickLegendMarker*
/// @param parent QObject*
///
void q_candlesticklegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCandlestickLegendMarker*
/// @param filterObj QObject*
///
void q_candlesticklegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCandlestickLegendMarker*
/// @param obj QObject*
///
void q_candlesticklegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_candlesticklegendmarker_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_candlesticklegendmarker_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCandlestickLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_candlesticklegendmarker_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_candlesticklegendmarker_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_candlesticklegendmarker_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickLegendMarker*
///
bool q_candlesticklegendmarker_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickLegendMarker*
/// @param receiver QObject*
///
bool q_candlesticklegendmarker_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_candlesticklegendmarker_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCandlestickLegendMarker*
/// @param name const char*
/// @param value QVariant*
///
bool q_candlesticklegendmarker_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCandlestickLegendMarker*
/// @param name const char*
///
QVariant* q_candlesticklegendmarker_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCandlestickLegendMarker*
///
const char** q_candlesticklegendmarker_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickLegendMarker*
///
QBindingStorage* q_candlesticklegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QCandlestickLegendMarker*
///
const QBindingStorage* q_candlesticklegendmarker_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QCandlestickLegendMarker*
///
QObject* q_candlesticklegendmarker_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCandlestickLegendMarker*
/// @param classname const char*
///
bool q_candlesticklegendmarker_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_candlesticklegendmarker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_candlesticklegendmarker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_candlesticklegendmarker_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_candlesticklegendmarker_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCandlestickLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_candlesticklegendmarker_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickLegendMarker*
/// @param signal const char*
///
bool q_candlesticklegendmarker_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickLegendMarker*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_candlesticklegendmarker_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickLegendMarker*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_candlesticklegendmarker_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickLegendMarker*
/// @param receiver QObject*
/// @param member const char*
///
bool q_candlesticklegendmarker_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
/// @param param1 QObject*
///
void q_candlesticklegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, QObject* param1)
///
void q_candlesticklegendmarker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
///
bool q_candlesticklegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
///
bool q_candlesticklegendmarker_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback bool func(QCandlestickLegendMarker* self, QEvent* event)
///
void q_candlesticklegendmarker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlesticklegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlesticklegendmarker_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback bool func(QCandlestickLegendMarker* self, QObject* watched, QEvent* event)
///
void q_candlesticklegendmarker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QTimerEvent*
///
void q_candlesticklegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QTimerEvent*
///
void q_candlesticklegendmarker_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, QTimerEvent* event)
///
void q_candlesticklegendmarker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QChildEvent*
///
void q_candlesticklegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QChildEvent*
///
void q_candlesticklegendmarker_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, QChildEvent* event)
///
void q_candlesticklegendmarker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
///
void q_candlesticklegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
///
void q_candlesticklegendmarker_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, QEvent* event)
///
void q_candlesticklegendmarker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
///
void q_candlesticklegendmarker_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
///
void q_candlesticklegendmarker_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, QMetaMethod* signal)
///
void q_candlesticklegendmarker_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
///
void q_candlesticklegendmarker_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
///
void q_candlesticklegendmarker_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, QMetaMethod* signal)
///
void q_candlesticklegendmarker_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
///
QObject* q_candlesticklegendmarker_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
///
QObject* q_candlesticklegendmarker_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param callback QObject* func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
///
int32_t q_candlesticklegendmarker_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
///
int32_t q_candlesticklegendmarker_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param callback int32_t func(QCandlestickLegendMarker* self)
///
void q_candlesticklegendmarker_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param signal const char*
///
int32_t q_candlesticklegendmarker_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param signal const char*
///
int32_t q_candlesticklegendmarker_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param callback int32_t func(QCandlestickLegendMarker* self, const char* signal)
///
void q_candlesticklegendmarker_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param signal QMetaMethod*
///
bool q_candlesticklegendmarker_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param signal QMetaMethod*
///
bool q_candlesticklegendmarker_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickLegendMarker*
/// @param callback bool func(QCandlestickLegendMarker* self, QMetaMethod* signal)
///
void q_candlesticklegendmarker_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCandlestickLegendMarker*
/// @param callback void func(QCandlestickLegendMarker* self, const char* objectName)
///
void q_candlesticklegendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#dtor.QCandlestickLegendMarker)
///
/// Delete this object from C++ memory.
///
/// @param self QCandlestickLegendMarker*
///
void q_candlesticklegendmarker_delete(void* self);

#endif
