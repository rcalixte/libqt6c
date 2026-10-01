#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBARLEGENDMARKER_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQBARLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html)

/// q_barlegendmarker_new constructs a new QBarLegendMarker object.
///
/// @param series QAbstractBarSeries*
/// @param barset QBarSet*
/// @param legend QLegend*
///
QBarLegendMarker* q_barlegendmarker_new(void* series, void* barset, void* legend);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html)

/// q_barlegendmarker_new2 constructs a new QBarLegendMarker object.
///
/// @param series QAbstractBarSeries*
/// @param barset QBarSet*
/// @param legend QLegend*
/// @param parent QObject*
///
QBarLegendMarker* q_barlegendmarker_new2(void* series, void* barset, void* legend, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QBarLegendMarker*
///
const QMetaObject* q_barlegendmarker_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback const QMetaObject* func(const QBarLegendMarker* self)
///
void q_barlegendmarker_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QBarLegendMarker*
///
const QMetaObject* q_barlegendmarker_super_meta_object(const void* self);

/// @param self QBarLegendMarker*
/// @param param1 const char*
///
void* q_barlegendmarker_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback void* func(QBarLegendMarker* self, const char* param1)
///
void q_barlegendmarker_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBarLegendMarker*
/// @param param1 const char*
///
void* q_barlegendmarker_super_metacast(void* self, const char* param1);

/// @param self QBarLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barlegendmarker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func(QBarLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_barlegendmarker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBarLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barlegendmarker_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_barlegendmarker_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
///
/// @param self QBarLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
///
int32_t q_barlegendmarker_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_type(void* self, int32_t (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QBarLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
///
int32_t q_barlegendmarker_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
///
/// @param self QBarLegendMarker*
///
QAbstractBarSeries* q_barlegendmarker_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// @param self QBarLegendMarker*
/// @param callback QAbstractBarSeries* func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_series(void* self, QAbstractBarSeries* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// @param self QBarLegendMarker*
///
QAbstractBarSeries* q_barlegendmarker_super_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#barset)
///
/// @param self QBarLegendMarker*
///
QBarSet* q_barlegendmarker_barset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_barlegendmarker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_barlegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBarLegendMarker*
///
const char* q_barlegendmarker_label(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// @param self QBarLegendMarker*
/// @param label const char*
///
void q_barlegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// @param self const QBarLegendMarker*
///
QBrush* q_barlegendmarker_label_brush(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// @param self QBarLegendMarker*
/// @param brush QBrush*
///
void q_barlegendmarker_set_label_brush(void* self, const void* brush);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// @param self const QBarLegendMarker*
///
QFont* q_barlegendmarker_font(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// @param self QBarLegendMarker*
/// @param font QFont*
///
void q_barlegendmarker_set_font(void* self, const void* font);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// @param self const QBarLegendMarker*
///
QPen* q_barlegendmarker_pen(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// @param self QBarLegendMarker*
/// @param pen QPen*
///
void q_barlegendmarker_set_pen(void* self, const void* pen);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// @param self const QBarLegendMarker*
///
QBrush* q_barlegendmarker_brush(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// @param self QBarLegendMarker*
/// @param brush QBrush*
///
void q_barlegendmarker_set_brush(void* self, const void* brush);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// @param self const QBarLegendMarker*
///
bool q_barlegendmarker_is_visible(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// @param self QBarLegendMarker*
/// @param visible bool
///
void q_barlegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// @param self const QBarLegendMarker*
///
/// @return enum QLegend__MarkerShape
///
int32_t q_barlegendmarker_shape(const void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// @param self QBarLegendMarker*
/// @param shape enum QLegend__MarkerShape
///
void q_barlegendmarker_set_shape(void* self, int32_t shape);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QBarLegendMarker*
/// @param status bool
///
void q_barlegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, bool status)
///
void q_barlegendmarker_on_hovered(void* self, void (*callback)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_label_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_label_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_font_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_pen_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_brush_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_shape_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBarLegendMarker*
///
const char* q_barlegendmarker_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBarLegendMarker*
/// @param name const char*
///
void q_barlegendmarker_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QBarLegendMarker*
///
bool q_barlegendmarker_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QBarLegendMarker*
///
bool q_barlegendmarker_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QBarLegendMarker*
///
bool q_barlegendmarker_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QBarLegendMarker*
///
bool q_barlegendmarker_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBarLegendMarker*
/// @param b bool
///
bool q_barlegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QBarLegendMarker*
///
QThread* q_barlegendmarker_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarLegendMarker*
/// @param thread QThread*
///
bool q_barlegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarLegendMarker*
/// @param interval int
///
int32_t q_barlegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarLegendMarker*
/// @param time int64_t of nanoseconds
///
int32_t q_barlegendmarker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarLegendMarker*
/// @param id int
///
void q_barlegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarLegendMarker*
/// @param id enum Qt__TimerId
///
void q_barlegendmarker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QBarLegendMarker*
///
/// @return libqt_list of QObject*
///
libqt_list q_barlegendmarker_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBarLegendMarker*
/// @param parent QObject*
///
void q_barlegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBarLegendMarker*
/// @param filterObj QObject*
///
void q_barlegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBarLegendMarker*
/// @param obj QObject*
///
void q_barlegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_barlegendmarker_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_barlegendmarker_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBarLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_barlegendmarker_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barlegendmarker_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_barlegendmarker_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarLegendMarker*
///
bool q_barlegendmarker_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarLegendMarker*
/// @param receiver QObject*
///
bool q_barlegendmarker_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_barlegendmarker_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QBarLegendMarker*
///
void q_barlegendmarker_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QBarLegendMarker*
///
void q_barlegendmarker_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBarLegendMarker*
/// @param name const char*
/// @param value QVariant*
///
bool q_barlegendmarker_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QBarLegendMarker*
/// @param name const char*
///
QVariant* q_barlegendmarker_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBarLegendMarker*
///
const char** q_barlegendmarker_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarLegendMarker*
///
QBindingStorage* q_barlegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QBarLegendMarker*
///
const QBindingStorage* q_barlegendmarker_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QBarLegendMarker*
///
QObject* q_barlegendmarker_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QBarLegendMarker*
/// @param classname const char*
///
bool q_barlegendmarker_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarLegendMarker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_barlegendmarker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarLegendMarker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_barlegendmarker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_barlegendmarker_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_barlegendmarker_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBarLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_barlegendmarker_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarLegendMarker*
/// @param signal const char*
///
bool q_barlegendmarker_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarLegendMarker*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_barlegendmarker_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarLegendMarker*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barlegendmarker_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarLegendMarker*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barlegendmarker_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
/// @param param1 QObject*
///
void q_barlegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QObject* param1)
///
void q_barlegendmarker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
///
bool q_barlegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
///
bool q_barlegendmarker_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback bool func(QBarLegendMarker* self, QEvent* event)
///
void q_barlegendmarker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barlegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barlegendmarker_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback bool func(QBarLegendMarker* self, QObject* watched, QEvent* event)
///
void q_barlegendmarker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QTimerEvent*
///
void q_barlegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QTimerEvent*
///
void q_barlegendmarker_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QTimerEvent* event)
///
void q_barlegendmarker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QChildEvent*
///
void q_barlegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QChildEvent*
///
void q_barlegendmarker_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QChildEvent* event)
///
void q_barlegendmarker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
///
void q_barlegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param event QEvent*
///
void q_barlegendmarker_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QEvent* event)
///
void q_barlegendmarker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
///
void q_barlegendmarker_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
///
void q_barlegendmarker_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QMetaMethod* signal)
///
void q_barlegendmarker_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
///
void q_barlegendmarker_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param signal QMetaMethod*
///
void q_barlegendmarker_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, QMetaMethod* signal)
///
void q_barlegendmarker_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarLegendMarker*
///
QObject* q_barlegendmarker_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarLegendMarker*
///
QObject* q_barlegendmarker_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback QObject* func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarLegendMarker*
///
int32_t q_barlegendmarker_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarLegendMarker*
///
int32_t q_barlegendmarker_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func(QBarLegendMarker* self)
///
void q_barlegendmarker_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarLegendMarker*
/// @param signal const char*
///
int32_t q_barlegendmarker_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarLegendMarker*
/// @param signal const char*
///
int32_t q_barlegendmarker_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback int32_t func(QBarLegendMarker* self, const char* signal)
///
void q_barlegendmarker_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarLegendMarker*
/// @param signal QMetaMethod*
///
bool q_barlegendmarker_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarLegendMarker*
/// @param signal QMetaMethod*
///
bool q_barlegendmarker_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarLegendMarker*
/// @param callback bool func(QBarLegendMarker* self, QMetaMethod* signal)
///
void q_barlegendmarker_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBarLegendMarker*
/// @param callback void func(QBarLegendMarker* self, const char* objectName)
///
void q_barlegendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarlegendmarker-qtcharts.html#dtor.QBarLegendMarker)
///
/// Delete this object from C++ memory.
///
/// @param self QBarLegendMarker*
///
void q_barlegendmarker_delete(void* self);

#endif
