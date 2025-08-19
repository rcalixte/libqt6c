#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html

/// q_candlesticklegendmarker_new constructs a new QCandlestickLegendMarker object.
///
/// @param series QCandlestickSeries*
/// @param legend QLegend*
QCandlestickLegendMarker* q_candlesticklegendmarker_new(void* series, void* legend);

/// q_candlesticklegendmarker_new2 constructs a new QCandlestickLegendMarker object.
///
/// @param series QCandlestickSeries*
/// @param legend QLegend*
/// @param parent QObject*
QCandlestickLegendMarker* q_candlesticklegendmarker_new2(void* series, void* legend, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCandlestickLegendMarker*
const QMetaObject* q_candlesticklegendmarker_meta_object(void* self);

/// @param self QCandlestickLegendMarker*
/// @param param1 const char*
void* q_candlesticklegendmarker_metacast(void* self, const char* param1);

/// @param self QCandlestickLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_candlesticklegendmarker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCandlestickLegendMarker*
/// @param callback int32_t fn(QCandlestickLegendMarker*, enum QMetaObject__Call, int, void*)
void q_candlesticklegendmarker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCandlestickLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_candlesticklegendmarker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_candlesticklegendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// @param self QCandlestickLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
int32_t q_candlesticklegendmarker_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QCandlestickLegendMarker*
/// @param callback int32_t fn()
void q_candlesticklegendmarker_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QCandlestickLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
int32_t q_candlesticklegendmarker_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// @param self QCandlestickLegendMarker*
QCandlestickSeries* q_candlesticklegendmarker_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// @param self QCandlestickLegendMarker*
/// @param callback QCandlestickSeries* fn()
void q_candlesticklegendmarker_on_series(void* self, QCandlestickSeries* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// @param self QCandlestickLegendMarker*
QCandlestickSeries* q_candlesticklegendmarker_qbase_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_candlesticklegendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_candlesticklegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCandlestickLegendMarker*
const char* q_candlesticklegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// @param self QCandlestickLegendMarker*
/// @param label const char*
void q_candlesticklegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// @param self QCandlestickLegendMarker*
QBrush* q_candlesticklegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// @param self QCandlestickLegendMarker*
/// @param brush QBrush*
void q_candlesticklegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// @param self QCandlestickLegendMarker*
QFont* q_candlesticklegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// @param self QCandlestickLegendMarker*
/// @param font QFont*
void q_candlesticklegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// @param self QCandlestickLegendMarker*
QPen* q_candlesticklegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// @param self QCandlestickLegendMarker*
/// @param pen QPen*
void q_candlesticklegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// @param self QCandlestickLegendMarker*
QBrush* q_candlesticklegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// @param self QCandlestickLegendMarker*
/// @param brush QBrush*
void q_candlesticklegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// @param self QCandlestickLegendMarker*
bool q_candlesticklegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// @param self QCandlestickLegendMarker*
/// @param visible bool
void q_candlesticklegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// @param self QCandlestickLegendMarker*
///
/// @return enum QLegend__MarkerShape
int32_t q_candlesticklegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// @param self QCandlestickLegendMarker*
/// @param shape enum QLegend__MarkerShape
void q_candlesticklegendmarker_set_shape(void* self, int32_t shape);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QCandlestickLegendMarker*
/// @param status bool
void q_candlesticklegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, bool)
void q_candlesticklegendmarker_on_hovered(void* self, void (*callback)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_label_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_label_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_font_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_pen_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_shape_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCandlestickLegendMarker*
const char* q_candlesticklegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCandlestickLegendMarker*
/// @param name char*
void q_candlesticklegendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCandlestickLegendMarker*
bool q_candlesticklegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCandlestickLegendMarker*
bool q_candlesticklegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCandlestickLegendMarker*
bool q_candlesticklegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCandlestickLegendMarker*
bool q_candlesticklegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCandlestickLegendMarker*
/// @param b bool
bool q_candlesticklegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCandlestickLegendMarker*
QThread* q_candlesticklegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickLegendMarker*
/// @param thread QThread*
bool q_candlesticklegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param interval int
int32_t q_candlesticklegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param id int
void q_candlesticklegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param id enum Qt__TimerId
void q_candlesticklegendmarker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCandlestickLegendMarker*
libqt_list /* of QObject* */ q_candlesticklegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCandlestickLegendMarker*
/// @param parent QObject*
void q_candlesticklegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCandlestickLegendMarker*
/// @param filterObj QObject*
void q_candlesticklegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCandlestickLegendMarker*
/// @param obj QObject*
void q_candlesticklegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_candlesticklegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCandlestickLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_candlesticklegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_candlesticklegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_candlesticklegendmarker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCandlestickLegendMarker*
/// @param name const char*
/// @param value QVariant*
bool q_candlesticklegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCandlestickLegendMarker*
/// @param name const char*
QVariant* q_candlesticklegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCandlestickLegendMarker*
const char** q_candlesticklegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickLegendMarker*
QBindingStorage* q_candlesticklegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickLegendMarker*
const QBindingStorage* q_candlesticklegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*)
void q_candlesticklegendmarker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCandlestickLegendMarker*
QObject* q_candlesticklegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCandlestickLegendMarker*
/// @param classname const char*
bool q_candlesticklegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickLegendMarker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_candlesticklegendmarker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickLegendMarker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_candlesticklegendmarker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_candlesticklegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCandlestickLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_candlesticklegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
/// @param param1 QObject*
void q_candlesticklegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, QObject*)
void q_candlesticklegendmarker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
bool q_candlesticklegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
bool q_candlesticklegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback bool fn(QCandlestickLegendMarker*, QEvent*)
void q_candlesticklegendmarker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
bool q_candlesticklegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
bool q_candlesticklegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback bool fn(QCandlestickLegendMarker*, QObject*, QEvent*)
void q_candlesticklegendmarker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QTimerEvent*
void q_candlesticklegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QTimerEvent*
void q_candlesticklegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, QTimerEvent*)
void q_candlesticklegendmarker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QChildEvent*
void q_candlesticklegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QChildEvent*
void q_candlesticklegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, QChildEvent*)
void q_candlesticklegendmarker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
void q_candlesticklegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param event QEvent*
void q_candlesticklegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, QEvent*)
void q_candlesticklegendmarker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
void q_candlesticklegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
void q_candlesticklegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, QMetaMethod*)
void q_candlesticklegendmarker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
void q_candlesticklegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
void q_candlesticklegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, QMetaMethod*)
void q_candlesticklegendmarker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
QObject* q_candlesticklegendmarker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
QObject* q_candlesticklegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback QObject* fn()
void q_candlesticklegendmarker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
int32_t q_candlesticklegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
int32_t q_candlesticklegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback int32_t fn()
void q_candlesticklegendmarker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal const char*
int32_t q_candlesticklegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal const char*
int32_t q_candlesticklegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback int32_t fn(QCandlestickLegendMarker*, const char*)
void q_candlesticklegendmarker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
bool q_candlesticklegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param signal QMetaMethod*
bool q_candlesticklegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickLegendMarker*
/// @param callback bool fn(QCandlestickLegendMarker*, QMetaMethod*)
void q_candlesticklegendmarker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCandlestickLegendMarker*
/// @param callback void fn(QCandlestickLegendMarker*, const char*)
void q_candlesticklegendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#dtor.QCandlestickLegendMarker)
///
/// Delete this object from C++ memory.
///
/// @param self QCandlestickLegendMarker*
void q_candlesticklegendmarker_delete(void* self);

#endif
