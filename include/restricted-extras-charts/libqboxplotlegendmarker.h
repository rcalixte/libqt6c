#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXPLOTLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqboxplotseries.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqfont.h"
#include "libqlegend.h"
#include "libqlegendmarker.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qboxplotlegendmarker.html

/// q_boxplotlegendmarker_new constructs a new QBoxPlotLegendMarker object.
///
/// ``` QBoxPlotSeries* series, QLegend* legend ```
QBoxPlotLegendMarker* q_boxplotlegendmarker_new(void* series, void* legend);

/// q_boxplotlegendmarker_new2 constructs a new QBoxPlotLegendMarker object.
///
/// ``` QBoxPlotSeries* series, QLegend* legend, QObject* parent ```
QBoxPlotLegendMarker* q_boxplotlegendmarker_new2(void* series, void* legend, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBoxPlotLegendMarker* self ```
QMetaObject* q_boxplotlegendmarker_meta_object(void* self);

/// ``` QBoxPlotLegendMarker* self, const char* param1 ```
void* q_boxplotlegendmarker_metacast(void* self, const char* param1);

/// ``` QBoxPlotLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotlegendmarker_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QBoxPlotLegendMarker* self, int32_t (*slot)(QBoxPlotLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_boxplotlegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QBoxPlotLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotlegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_boxplotlegendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotlegendmarker.html#type)
///
/// ``` QBoxPlotLegendMarker* self ```
int64_t q_boxplotlegendmarker_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QBoxPlotLegendMarker* self, int64_t (*slot)() ```
void q_boxplotlegendmarker_on_type(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QBoxPlotLegendMarker* self ```
int64_t q_boxplotlegendmarker_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotlegendmarker.html#series)
///
/// ``` QBoxPlotLegendMarker* self ```
QBoxPlotSeries* q_boxplotlegendmarker_series(void* self);

/// Allows for overriding the related default method
///
/// ``` QBoxPlotLegendMarker* self, QBoxPlotSeries* (*slot)() ```
void q_boxplotlegendmarker_on_series(void* self, QBoxPlotSeries* (*slot)());

/// Base class method implementation
///
/// ``` QBoxPlotLegendMarker* self ```
QBoxPlotSeries* q_boxplotlegendmarker_qbase_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_boxplotlegendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_boxplotlegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QBoxPlotLegendMarker* self ```
const char* q_boxplotlegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QBoxPlotLegendMarker* self, const char* label ```
void q_boxplotlegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QBoxPlotLegendMarker* self ```
QBrush* q_boxplotlegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QBoxPlotLegendMarker* self, QBrush* brush ```
void q_boxplotlegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QBoxPlotLegendMarker* self ```
QFont* q_boxplotlegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QBoxPlotLegendMarker* self, QFont* font ```
void q_boxplotlegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QBoxPlotLegendMarker* self ```
QPen* q_boxplotlegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QBoxPlotLegendMarker* self, QPen* pen ```
void q_boxplotlegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QBoxPlotLegendMarker* self ```
QBrush* q_boxplotlegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QBoxPlotLegendMarker* self, QBrush* brush ```
void q_boxplotlegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QBoxPlotLegendMarker* self, bool visible ```
void q_boxplotlegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QBoxPlotLegendMarker* self ```
int64_t q_boxplotlegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QBoxPlotLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_boxplotlegendmarker_set_shape(void* self, int64_t shape);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_clicked(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QBoxPlotLegendMarker* self, bool status ```
void q_boxplotlegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_boxplotlegendmarker_on_hovered(void* self, void (*slot)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_label_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_label_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_font_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_pen_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_shape_changed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBoxPlotLegendMarker* self ```
const char* q_boxplotlegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBoxPlotLegendMarker* self, const char* name ```
void q_boxplotlegendmarker_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBoxPlotLegendMarker* self, bool b ```
bool q_boxplotlegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBoxPlotLegendMarker* self ```
QThread* q_boxplotlegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBoxPlotLegendMarker* self, QThread* thread ```
void q_boxplotlegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotLegendMarker* self, int interval ```
int32_t q_boxplotlegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBoxPlotLegendMarker* self, int id ```
void q_boxplotlegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBoxPlotLegendMarker* self ```
libqt_list /* of QObject* */ q_boxplotlegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBoxPlotLegendMarker* self, QObject* parent ```
void q_boxplotlegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBoxPlotLegendMarker* self, QObject* filterObj ```
void q_boxplotlegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBoxPlotLegendMarker* self, QObject* obj ```
void q_boxplotlegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_boxplotlegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_boxplotlegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_boxplotlegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_boxplotlegendmarker_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBoxPlotLegendMarker* self, const char* name, QVariant* value ```
bool q_boxplotlegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBoxPlotLegendMarker* self, const char* name ```
QVariant* q_boxplotlegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBoxPlotLegendMarker* self ```
const char** q_boxplotlegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxPlotLegendMarker* self ```
QBindingStorage* q_boxplotlegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxPlotLegendMarker* self ```
QBindingStorage* q_boxplotlegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QObject*) ```
void q_boxplotlegendmarker_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBoxPlotLegendMarker* self ```
QObject* q_boxplotlegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBoxPlotLegendMarker* self, const char* classname ```
bool q_boxplotlegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_boxplotlegendmarker_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotlegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotlegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotLegendMarker* self, QObject* param1 ```
void q_boxplotlegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_boxplotlegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
bool q_boxplotlegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
bool q_boxplotlegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, bool (*slot)(QBoxPlotLegendMarker*, QEvent*) ```
void q_boxplotlegendmarker_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QObject* watched, QEvent* event ```
bool q_boxplotlegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QObject* watched, QEvent* event ```
bool q_boxplotlegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, bool (*slot)(QBoxPlotLegendMarker*, QObject*, QEvent*) ```
void q_boxplotlegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QTimerEvent* event ```
void q_boxplotlegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QTimerEvent* event ```
void q_boxplotlegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QTimerEvent*) ```
void q_boxplotlegendmarker_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QChildEvent* event ```
void q_boxplotlegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QChildEvent* event ```
void q_boxplotlegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QChildEvent*) ```
void q_boxplotlegendmarker_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
void q_boxplotlegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
void q_boxplotlegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QEvent*) ```
void q_boxplotlegendmarker_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QMetaMethod*) ```
void q_boxplotlegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QMetaMethod*) ```
void q_boxplotlegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
QObject* q_boxplotlegendmarker_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
QObject* q_boxplotlegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QObject* (*slot)() ```
void q_boxplotlegendmarker_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
int32_t q_boxplotlegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
int32_t q_boxplotlegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, int32_t (*slot)() ```
void q_boxplotlegendmarker_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, const char* signal ```
int32_t q_boxplotlegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, const char* signal ```
int32_t q_boxplotlegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, int32_t (*slot)(QBoxPlotLegendMarker*, const char*) ```
void q_boxplotlegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
bool q_boxplotlegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
bool q_boxplotlegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, bool (*slot)(QBoxPlotLegendMarker*, QMetaMethod*) ```
void q_boxplotlegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_delete(void* self);

#endif
