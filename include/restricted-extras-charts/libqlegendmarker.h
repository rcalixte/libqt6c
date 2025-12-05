#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLegendMarker*
///
const QMetaObject* q_legendmarker_meta_object(void* self);

/// @param self QLegendMarker*
/// @param param1 const char*
///
void* q_legendmarker_metacast(void* self, const char* param1);

/// @param self QLegendMarker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_legendmarker_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_legendmarker_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#type)
///
/// @param self QLegendMarker*
///
/// @return enum QLegendMarker__LegendMarkerType
///
int32_t q_legendmarker_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLegendMarker*
///
const char* q_legendmarker_label(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#setLabel)
///
/// @param self QLegendMarker*
/// @param label const char*
///
void q_legendmarker_set_label(void* self, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#labelBrush)
///
/// @param self QLegendMarker*
///
QBrush* q_legendmarker_label_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#setLabelBrush)
///
/// @param self QLegendMarker*
/// @param brush QBrush*
///
void q_legendmarker_set_label_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#font)
///
/// @param self QLegendMarker*
///
QFont* q_legendmarker_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#setFont)
///
/// @param self QLegendMarker*
/// @param font QFont*
///
void q_legendmarker_set_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#pen)
///
/// @param self QLegendMarker*
///
QPen* q_legendmarker_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#setPen)
///
/// @param self QLegendMarker*
/// @param pen QPen*
///
void q_legendmarker_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#brush)
///
/// @param self QLegendMarker*
///
QBrush* q_legendmarker_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#setBrush)
///
/// @param self QLegendMarker*
/// @param brush QBrush*
///
void q_legendmarker_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#isVisible)
///
/// @param self QLegendMarker*
///
bool q_legendmarker_is_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#setVisible)
///
/// @param self QLegendMarker*
/// @param visible bool
///
void q_legendmarker_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#shape)
///
/// @param self QLegendMarker*
///
/// @return enum QLegend__MarkerShape
///
int32_t q_legendmarker_shape(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#setShape)
///
/// @param self QLegendMarker*
/// @param shape enum QLegend__MarkerShape
///
void q_legendmarker_set_shape(void* self, int32_t shape);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#series)
///
/// @param self QLegendMarker*
///
QAbstractSeries* q_legendmarker_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#clicked)
///
/// @param self QLegendMarker*
///
void q_legendmarker_clicked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#clicked)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#hovered)
///
/// @param self QLegendMarker*
/// @param status bool
///
void q_legendmarker_hovered(void* self, bool status);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#hovered)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self, bool status)
///
void q_legendmarker_on_hovered(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#labelChanged)
///
/// @param self QLegendMarker*
///
void q_legendmarker_label_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#labelChanged)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_label_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#labelBrushChanged)
///
/// @param self QLegendMarker*
///
void q_legendmarker_label_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#labelBrushChanged)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_label_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#fontChanged)
///
/// @param self QLegendMarker*
///
void q_legendmarker_font_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#fontChanged)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_font_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#penChanged)
///
/// @param self QLegendMarker*
///
void q_legendmarker_pen_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#penChanged)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_pen_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#brushChanged)
///
/// @param self QLegendMarker*
///
void q_legendmarker_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#brushChanged)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#visibleChanged)
///
/// @param self QLegendMarker*
///
void q_legendmarker_visible_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#visibleChanged)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_visible_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#shapeChanged)
///
/// @param self QLegendMarker*
///
void q_legendmarker_shape_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#shapeChanged)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_shape_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_legendmarker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_legendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QLegendMarker*
/// @param event QEvent*
///
bool q_legendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QLegendMarker*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_legendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLegendMarker*
///
const char* q_legendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLegendMarker*
/// @param name char*
///
void q_legendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLegendMarker*
///
bool q_legendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLegendMarker*
///
bool q_legendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLegendMarker*
///
bool q_legendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLegendMarker*
///
bool q_legendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLegendMarker*
/// @param b bool
///
bool q_legendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLegendMarker*
///
QThread* q_legendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLegendMarker*
/// @param thread QThread*
///
bool q_legendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLegendMarker*
/// @param interval int
///
int32_t q_legendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLegendMarker*
/// @param id int
///
void q_legendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLegendMarker*
/// @param id enum Qt__TimerId
///
void q_legendmarker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLegendMarker*
///
libqt_list /* of QObject* */ q_legendmarker_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLegendMarker*
/// @param parent QObject*
///
void q_legendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLegendMarker*
/// @param filterObj QObject*
///
void q_legendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLegendMarker*
/// @param obj QObject*
///
void q_legendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_legendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_legendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_legendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_legendmarker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLegendMarker*
///
void q_legendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLegendMarker*
///
void q_legendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLegendMarker*
/// @param name const char*
/// @param value QVariant*
///
bool q_legendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLegendMarker*
/// @param name const char*
///
QVariant* q_legendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLegendMarker*
///
const char** q_legendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLegendMarker*
///
QBindingStorage* q_legendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLegendMarker*
///
const QBindingStorage* q_legendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegendMarker*
///
void q_legendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self)
///
void q_legendmarker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLegendMarker*
///
QObject* q_legendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLegendMarker*
/// @param classname const char*
///
bool q_legendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLegendMarker*
///
void q_legendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLegendMarker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_legendmarker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLegendMarker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_legendmarker_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_legendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLegendMarker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_legendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegendMarker*
/// @param param1 QObject*
///
void q_legendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self, QObject* param1)
///
void q_legendmarker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLegendMarker*
/// @param callback void func(QLegendMarker* self, const char* objectName)
///
void q_legendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#dtor.QLegendMarker)
///
/// Delete this object from C++ memory.
///
/// @param self QLegendMarker*
///
void q_legendmarker_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlegendmarker-qtcharts.html#public-types)

typedef enum {
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEAREA = 0,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEBAR = 1,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEPIE = 2,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEXY = 3,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPEBOXPLOT = 4,
    QLEGENDMARKER_LEGENDMARKERTYPE_LEGENDMARKERTYPECANDLESTICK = 5
} QLegendMarker__LegendMarkerType;

#endif
