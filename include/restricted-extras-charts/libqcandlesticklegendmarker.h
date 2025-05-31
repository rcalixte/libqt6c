#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqcandlestickseries.h"
#include "../libqevent.h"
#include "libqlegend.h"
#include "libqlegendmarker.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html

/// q_candlesticklegendmarker_new constructs a new QCandlestickLegendMarker object.
///
/// ``` QCandlestickSeries* series, QLegend* legend ```
QCandlestickLegendMarker* q_candlesticklegendmarker_new(void* series, void* legend);

/// q_candlesticklegendmarker_new2 constructs a new QCandlestickLegendMarker object.
///
/// ``` QCandlestickSeries* series, QLegend* legend, QObject* parent ```
QCandlestickLegendMarker* q_candlesticklegendmarker_new2(void* series, void* legend, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCandlestickLegendMarker* self ```
const QMetaObject* q_candlesticklegendmarker_meta_object(void* self);

/// ``` QCandlestickLegendMarker* self, const char* param1 ```
void* q_candlesticklegendmarker_metacast(void* self, const char* param1);

/// ``` QCandlestickLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlesticklegendmarker_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCandlestickLegendMarker* self, int32_t (*slot)(QCandlestickLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_candlesticklegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCandlestickLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlesticklegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_candlesticklegendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// ``` QCandlestickLegendMarker* self ```
int64_t q_candlesticklegendmarker_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QCandlestickLegendMarker* self, int64_t (*slot)() ```
void q_candlesticklegendmarker_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QCandlestickLegendMarker* self ```
int64_t q_candlesticklegendmarker_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// ``` QCandlestickLegendMarker* self ```
QCandlestickSeries* q_candlesticklegendmarker_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// ``` QCandlestickLegendMarker* self, QCandlestickSeries* (*slot)() ```
void q_candlesticklegendmarker_on_series(void* self, QCandlestickSeries* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// ``` QCandlestickLegendMarker* self ```
QCandlestickSeries* q_candlesticklegendmarker_qbase_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_candlesticklegendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_candlesticklegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QCandlestickLegendMarker* self ```
const char* q_candlesticklegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QCandlestickLegendMarker* self, const char* label ```
void q_candlesticklegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QCandlestickLegendMarker* self ```
QBrush* q_candlesticklegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QCandlestickLegendMarker* self, QBrush* brush ```
void q_candlesticklegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QCandlestickLegendMarker* self ```
QFont* q_candlesticklegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QCandlestickLegendMarker* self, QFont* font ```
void q_candlesticklegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QCandlestickLegendMarker* self ```
QPen* q_candlesticklegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QCandlestickLegendMarker* self, QPen* pen ```
void q_candlesticklegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QCandlestickLegendMarker* self ```
QBrush* q_candlesticklegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QCandlestickLegendMarker* self, QBrush* brush ```
void q_candlesticklegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QCandlestickLegendMarker* self ```
bool q_candlesticklegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QCandlestickLegendMarker* self, bool visible ```
void q_candlesticklegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QCandlestickLegendMarker* self ```
int64_t q_candlesticklegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QCandlestickLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_candlesticklegendmarker_set_shape(void* self, int64_t shape);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_clicked(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QCandlestickLegendMarker* self, bool status ```
void q_candlesticklegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_candlesticklegendmarker_on_hovered(void* self, void (*slot)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_label_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_label_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_font_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_pen_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_candlesticklegendmarker_on_shape_changed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCandlestickLegendMarker* self ```
const char* q_candlesticklegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCandlestickLegendMarker* self, char* name ```
void q_candlesticklegendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCandlestickLegendMarker* self ```
bool q_candlesticklegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCandlestickLegendMarker* self ```
bool q_candlesticklegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCandlestickLegendMarker* self ```
bool q_candlesticklegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCandlestickLegendMarker* self ```
bool q_candlesticklegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCandlestickLegendMarker* self, bool b ```
bool q_candlesticklegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCandlestickLegendMarker* self ```
QThread* q_candlesticklegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickLegendMarker* self, QThread* thread ```
void q_candlesticklegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickLegendMarker* self, int interval ```
int32_t q_candlesticklegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickLegendMarker* self, int id ```
void q_candlesticklegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCandlestickLegendMarker* self ```
const libqt_list /* of QObject* */ q_candlesticklegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCandlestickLegendMarker* self, QObject* parent ```
void q_candlesticklegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCandlestickLegendMarker* self, QObject* filterObj ```
void q_candlesticklegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCandlestickLegendMarker* self, QObject* obj ```
void q_candlesticklegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_candlesticklegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_candlesticklegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_candlesticklegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_candlesticklegendmarker_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCandlestickLegendMarker* self, const char* name, QVariant* value ```
bool q_candlesticklegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCandlestickLegendMarker* self, const char* name ```
QVariant* q_candlesticklegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCandlestickLegendMarker* self ```
const char** q_candlesticklegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickLegendMarker* self ```
QBindingStorage* q_candlesticklegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickLegendMarker* self ```
const QBindingStorage* q_candlesticklegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QObject*) ```
void q_candlesticklegendmarker_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCandlestickLegendMarker* self ```
QObject* q_candlesticklegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCandlestickLegendMarker* self, const char* classname ```
bool q_candlesticklegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_candlesticklegendmarker_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlesticklegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlesticklegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickLegendMarker* self, QObject* param1 ```
void q_candlesticklegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_candlesticklegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QEvent* event ```
bool q_candlesticklegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QEvent* event ```
bool q_candlesticklegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, bool (*slot)(QCandlestickLegendMarker*, QEvent*) ```
void q_candlesticklegendmarker_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QObject* watched, QEvent* event ```
bool q_candlesticklegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QObject* watched, QEvent* event ```
bool q_candlesticklegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, bool (*slot)(QCandlestickLegendMarker*, QObject*, QEvent*) ```
void q_candlesticklegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QTimerEvent* event ```
void q_candlesticklegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QTimerEvent* event ```
void q_candlesticklegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QCandlestickLegendMarker*, QTimerEvent*) ```
void q_candlesticklegendmarker_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QChildEvent* event ```
void q_candlesticklegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QChildEvent* event ```
void q_candlesticklegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QCandlestickLegendMarker*, QChildEvent*) ```
void q_candlesticklegendmarker_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QEvent* event ```
void q_candlesticklegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QEvent* event ```
void q_candlesticklegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QCandlestickLegendMarker*, QEvent*) ```
void q_candlesticklegendmarker_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QMetaMethod* signal ```
void q_candlesticklegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QMetaMethod* signal ```
void q_candlesticklegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QCandlestickLegendMarker*, QMetaMethod*) ```
void q_candlesticklegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QMetaMethod* signal ```
void q_candlesticklegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QMetaMethod* signal ```
void q_candlesticklegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QCandlestickLegendMarker*, QMetaMethod*) ```
void q_candlesticklegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self ```
QObject* q_candlesticklegendmarker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self ```
QObject* q_candlesticklegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QObject* (*slot)() ```
void q_candlesticklegendmarker_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self ```
int32_t q_candlesticklegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self ```
int32_t q_candlesticklegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, int32_t (*slot)() ```
void q_candlesticklegendmarker_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, const char* signal ```
int32_t q_candlesticklegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, const char* signal ```
int32_t q_candlesticklegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, int32_t (*slot)(QCandlestickLegendMarker*, const char*) ```
void q_candlesticklegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QMetaMethod* signal ```
bool q_candlesticklegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, QMetaMethod* signal ```
bool q_candlesticklegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickLegendMarker* self, bool (*slot)(QCandlestickLegendMarker*, QMetaMethod*) ```
void q_candlesticklegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QCandlestickLegendMarker* self, void (*slot)(QObject*, const char*) ```
void q_candlesticklegendmarker_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlesticklegendmarker-qtcharts.html#dtor.QCandlestickLegendMarker)
///
/// Delete this object from C++ memory.
///
/// ``` QCandlestickLegendMarker* self ```
void q_candlesticklegendmarker_delete(void* self);

#endif
