#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIELEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIELEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html

/// q_pielegendmarker_new constructs a new QPieLegendMarker object.
///
/// @param series QPieSeries*
/// @param slice QPieSlice*
/// @param legend QLegend*
QPieLegendMarker* q_pielegendmarker_new(void* series, void* slice, void* legend);

/// q_pielegendmarker_new2 constructs a new QPieLegendMarker object.
///
/// @param series QPieSeries*
/// @param slice QPieSlice*
/// @param legend QLegend*
/// @param parent QObject*
QPieLegendMarker* q_pielegendmarker_new2(void* series, void* slice, void* legend, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPieLegendMarker*
const QMetaObject* q_pielegendmarker_meta_object(void* self);

/// @param self QPieLegendMarker*
/// @param param1 const char*
void* q_pielegendmarker_metacast(void* self, const char* param1);

/// @param self QPieLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pielegendmarker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPieLegendMarker*
/// @param callback int32_t func(QPieLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_pielegendmarker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPieLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pielegendmarker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pielegendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#type)
///
/// @param self QPieLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
int32_t q_pielegendmarker_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPieLegendMarker*
/// @param callback int32_t func()
void q_pielegendmarker_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QPieLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
int32_t q_pielegendmarker_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#series)
///
/// @param self QPieLegendMarker*
QPieSeries* q_pielegendmarker_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// @param self QPieLegendMarker*
/// @param callback QPieSeries* func()
void q_pielegendmarker_on_series(void* self, QPieSeries* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// @param self QPieLegendMarker*
QPieSeries* q_pielegendmarker_qbase_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#slice)
///
/// @param self QPieLegendMarker*
QPieSlice* q_pielegendmarker_slice(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pielegendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pielegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieLegendMarker*
const char* q_pielegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// @param self QPieLegendMarker*
/// @param label const char*
void q_pielegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// @param self QPieLegendMarker*
QBrush* q_pielegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// @param self QPieLegendMarker*
/// @param brush QBrush*
void q_pielegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// @param self QPieLegendMarker*
QFont* q_pielegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// @param self QPieLegendMarker*
/// @param font QFont*
void q_pielegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// @param self QPieLegendMarker*
QPen* q_pielegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// @param self QPieLegendMarker*
/// @param pen QPen*
void q_pielegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// @param self QPieLegendMarker*
QBrush* q_pielegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// @param self QPieLegendMarker*
/// @param brush QBrush*
void q_pielegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// @param self QPieLegendMarker*
bool q_pielegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// @param self QPieLegendMarker*
/// @param visible bool
void q_pielegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// @param self QPieLegendMarker*
///
/// @return enum QLegend__MarkerShape
int32_t q_pielegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// @param self QPieLegendMarker*
/// @param shape enum QLegend__MarkerShape
void q_pielegendmarker_set_shape(void* self, int32_t shape);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QPieLegendMarker*
/// @param status bool
void q_pielegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, bool status)
void q_pielegendmarker_on_hovered(void* self, void (*callback)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_label_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_label_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_font_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_pen_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_shape_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieLegendMarker*
const char* q_pielegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPieLegendMarker*
/// @param name char*
void q_pielegendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPieLegendMarker*
bool q_pielegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPieLegendMarker*
bool q_pielegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPieLegendMarker*
bool q_pielegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPieLegendMarker*
bool q_pielegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPieLegendMarker*
/// @param b bool
bool q_pielegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPieLegendMarker*
QThread* q_pielegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPieLegendMarker*
/// @param thread QThread*
bool q_pielegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPieLegendMarker*
/// @param interval int
int32_t q_pielegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPieLegendMarker*
/// @param id int
void q_pielegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPieLegendMarker*
/// @param id enum Qt__TimerId
void q_pielegendmarker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPieLegendMarker*
libqt_list /* of QObject* */ q_pielegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPieLegendMarker*
/// @param parent QObject*
void q_pielegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPieLegendMarker*
/// @param filterObj QObject*
void q_pielegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPieLegendMarker*
/// @param obj QObject*
void q_pielegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pielegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPieLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pielegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pielegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pielegendmarker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPieLegendMarker*
/// @param name const char*
/// @param value QVariant*
bool q_pielegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPieLegendMarker*
/// @param name const char*
QVariant* q_pielegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieLegendMarker*
const char** q_pielegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPieLegendMarker*
QBindingStorage* q_pielegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPieLegendMarker*
const QBindingStorage* q_pielegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self)
void q_pielegendmarker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPieLegendMarker*
QObject* q_pielegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPieLegendMarker*
/// @param classname const char*
bool q_pielegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPieLegendMarker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pielegendmarker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPieLegendMarker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pielegendmarker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pielegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPieLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pielegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieLegendMarker*
/// @param param1 QObject*
void q_pielegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, QObject* param1)
void q_pielegendmarker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QEvent*
bool q_pielegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QEvent*
bool q_pielegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback bool func(QPieLegendMarker* self, QEvent* event)
void q_pielegendmarker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
bool q_pielegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
bool q_pielegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback bool func(QPieLegendMarker* self, QObject* watched, QEvent* event)
void q_pielegendmarker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QTimerEvent*
void q_pielegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QTimerEvent*
void q_pielegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, QTimerEvent* event)
void q_pielegendmarker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QChildEvent*
void q_pielegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QChildEvent*
void q_pielegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, QChildEvent* event)
void q_pielegendmarker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QEvent*
void q_pielegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param event QEvent*
void q_pielegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, QEvent* event)
void q_pielegendmarker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal QMetaMethod*
void q_pielegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal QMetaMethod*
void q_pielegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, QMetaMethod* signal)
void q_pielegendmarker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal QMetaMethod*
void q_pielegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal QMetaMethod*
void q_pielegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, QMetaMethod* signal)
void q_pielegendmarker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
QObject* q_pielegendmarker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
QObject* q_pielegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback QObject* func()
void q_pielegendmarker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
int32_t q_pielegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
int32_t q_pielegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback int32_t func()
void q_pielegendmarker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal const char*
int32_t q_pielegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal const char*
int32_t q_pielegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback int32_t func(QPieLegendMarker* self, const char* signal)
void q_pielegendmarker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal QMetaMethod*
bool q_pielegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param signal QMetaMethod*
bool q_pielegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieLegendMarker*
/// @param callback bool func(QPieLegendMarker* self, QMetaMethod* signal)
void q_pielegendmarker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPieLegendMarker*
/// @param callback void func(QPieLegendMarker* self, const char* objectName)
void q_pielegendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#dtor.QPieLegendMarker)
///
/// Delete this object from C++ memory.
///
/// @param self QPieLegendMarker*
void q_pielegendmarker_delete(void* self);

#endif
