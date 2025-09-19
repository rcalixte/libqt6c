#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html

/// q_barlegendmarker_new constructs a new QBarLegendMarker object.
///
/// @param series QAbstractBarSeries*
/// @param barset QBarSet*
/// @param legend QLegend*
QBarLegendMarker* q_barlegendmarker_new(void* series, void* barset, void* legend);

/// q_barlegendmarker_new2 constructs a new QBarLegendMarker object.
///
/// @param series QAbstractBarSeries*
/// @param barset QBarSet*
/// @param legend QLegend*
/// @param parent QObject*
QBarLegendMarker* q_barlegendmarker_new2(void* series, void* barset, void* legend, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBarLegendMarker*
const QMetaObject* q_barlegendmarker_meta_object(void* self);

/// @param self QBarLegendMarker*
/// @param param1 const char*
void* q_barlegendmarker_metacast(void* self, const char* param1);

/// @param self QBarLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_barlegendmarker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func(QBarLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_barlegendmarker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBarLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_barlegendmarker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_barlegendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
///
/// @param self QBarLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
int32_t q_barlegendmarker_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func()
void q_barlegendmarker_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QBarLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
int32_t q_barlegendmarker_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
///
/// @param self QBarLegendMarker*
QAbstractBarSeries* q_barlegendmarker_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback QAbstractBarSeries* func()
void q_barlegendmarker_on_series(void* self, QAbstractBarSeries* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// @param self QBarLegendMarker*
QAbstractBarSeries* q_barlegendmarker_qbase_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#barset)
///
/// @param self QBarLegendMarker*
QBarSet* q_barlegendmarker_barset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_barlegendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_barlegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBarLegendMarker*
const char* q_barlegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// @param self QBarLegendMarker*
/// @param label const char*
void q_barlegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// @param self QBarLegendMarker*
QBrush* q_barlegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// @param self QBarLegendMarker*
/// @param brush QBrush*
void q_barlegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// @param self QBarLegendMarker*
QFont* q_barlegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// @param self QBarLegendMarker*
/// @param font QFont*
void q_barlegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// @param self QBarLegendMarker*
QPen* q_barlegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// @param self QBarLegendMarker*
/// @param pen QPen*
void q_barlegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// @param self QBarLegendMarker*
QBrush* q_barlegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// @param self QBarLegendMarker*
/// @param brush QBrush*
void q_barlegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// @param self QBarLegendMarker*
bool q_barlegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// @param self QBarLegendMarker*
/// @param visible bool
void q_barlegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// @param self QBarLegendMarker*
///
/// @return enum QLegend__MarkerShape
int32_t q_barlegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// @param self QBarLegendMarker*
/// @param shape enum QLegend__MarkerShape
void q_barlegendmarker_set_shape(void* self, int32_t shape);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QBarLegendMarker*
/// @param status bool
void q_barlegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, bool status)
void q_barlegendmarker_on_hovered(void* self, void (*callback)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_label_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_label_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_font_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_pen_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_shape_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBarLegendMarker*
const char* q_barlegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBarLegendMarker*
/// @param name char*
void q_barlegendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBarLegendMarker*
bool q_barlegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBarLegendMarker*
bool q_barlegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBarLegendMarker*
bool q_barlegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBarLegendMarker*
bool q_barlegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBarLegendMarker*
/// @param b bool
bool q_barlegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBarLegendMarker*
QThread* q_barlegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarLegendMarker*
/// @param thread QThread*
bool q_barlegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarLegendMarker*
/// @param interval int
int32_t q_barlegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarLegendMarker*
/// @param id int
void q_barlegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarLegendMarker*
/// @param id enum Qt__TimerId
void q_barlegendmarker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBarLegendMarker*
libqt_list /* of QObject* */ q_barlegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBarLegendMarker*
/// @param parent QObject*
void q_barlegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBarLegendMarker*
/// @param filterObj QObject*
void q_barlegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBarLegendMarker*
/// @param obj QObject*
void q_barlegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_barlegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_barlegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_barlegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_barlegendmarker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBarLegendMarker*
/// @param name const char*
/// @param value QVariant*
bool q_barlegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBarLegendMarker*
/// @param name const char*
QVariant* q_barlegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBarLegendMarker*
const char** q_barlegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarLegendMarker*
QBindingStorage* q_barlegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarLegendMarker*
const QBindingStorage* q_barlegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
void q_barlegendmarker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBarLegendMarker*
QObject* q_barlegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBarLegendMarker*
/// @param classname const char*
bool q_barlegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarLegendMarker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_barlegendmarker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarLegendMarker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_barlegendmarker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_barlegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_barlegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
/// @param param1 QObject*
void q_barlegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QObject* param1)
void q_barlegendmarker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
bool q_barlegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
bool q_barlegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback bool func(QBarLegendMarker* self, QEvent* event)
void q_barlegendmarker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
bool q_barlegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
bool q_barlegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback bool func(QBarLegendMarker* self, QObject* watched, QEvent* event)
void q_barlegendmarker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QTimerEvent*
void q_barlegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QTimerEvent*
void q_barlegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QTimerEvent* event)
void q_barlegendmarker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QChildEvent*
void q_barlegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QChildEvent*
void q_barlegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QChildEvent* event)
void q_barlegendmarker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
void q_barlegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
void q_barlegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QEvent* event)
void q_barlegendmarker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
void q_barlegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
void q_barlegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QMetaMethod* signal)
void q_barlegendmarker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
void q_barlegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
void q_barlegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QMetaMethod* signal)
void q_barlegendmarker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
QObject* q_barlegendmarker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
QObject* q_barlegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback QObject* func()
void q_barlegendmarker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
int32_t q_barlegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
int32_t q_barlegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func()
void q_barlegendmarker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal const char*
int32_t q_barlegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal const char*
int32_t q_barlegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func(QBarLegendMarker* self, const char* signal)
void q_barlegendmarker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
bool q_barlegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
bool q_barlegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback bool func(QBarLegendMarker* self, QMetaMethod* signal)
void q_barlegendmarker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, const char* objectName)
void q_barlegendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#dtor.QBarLegendMarker)
///
/// Delete this object from C++ memory.
///
/// @param self QBarLegendMarker*
void q_barlegendmarker_delete(void* self);

#endif
