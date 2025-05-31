#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIELEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIELEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "libqlegend.h"
#include "libqlegendmarker.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "libqpieseries.h"
#include "libqpieslice.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html

/// q_pielegendmarker_new constructs a new QPieLegendMarker object.
///
/// ``` QPieSeries* series, QPieSlice* slice, QLegend* legend ```
QPieLegendMarker* q_pielegendmarker_new(void* series, void* slice, void* legend);

/// q_pielegendmarker_new2 constructs a new QPieLegendMarker object.
///
/// ``` QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent ```
QPieLegendMarker* q_pielegendmarker_new2(void* series, void* slice, void* legend, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPieLegendMarker* self ```
const QMetaObject* q_pielegendmarker_meta_object(void* self);

/// ``` QPieLegendMarker* self, const char* param1 ```
void* q_pielegendmarker_metacast(void* self, const char* param1);

/// ``` QPieLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pielegendmarker_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPieLegendMarker* self, int32_t (*slot)(QPieLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_pielegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPieLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pielegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pielegendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#type)
///
/// ``` QPieLegendMarker* self ```
int64_t q_pielegendmarker_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QPieLegendMarker* self, int64_t (*slot)() ```
void q_pielegendmarker_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QPieLegendMarker* self ```
int64_t q_pielegendmarker_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#series)
///
/// ``` QPieLegendMarker* self ```
QPieSeries* q_pielegendmarker_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// ``` QPieLegendMarker* self, QPieSeries* (*slot)() ```
void q_pielegendmarker_on_series(void* self, QPieSeries* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// ``` QPieLegendMarker* self ```
QPieSeries* q_pielegendmarker_qbase_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#slice)
///
/// ``` QPieLegendMarker* self ```
QPieSlice* q_pielegendmarker_slice(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pielegendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pielegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QPieLegendMarker* self ```
const char* q_pielegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QPieLegendMarker* self, const char* label ```
void q_pielegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QPieLegendMarker* self ```
QBrush* q_pielegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QPieLegendMarker* self, QBrush* brush ```
void q_pielegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QPieLegendMarker* self ```
QFont* q_pielegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QPieLegendMarker* self, QFont* font ```
void q_pielegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QPieLegendMarker* self ```
QPen* q_pielegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QPieLegendMarker* self, QPen* pen ```
void q_pielegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QPieLegendMarker* self ```
QBrush* q_pielegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QPieLegendMarker* self, QBrush* brush ```
void q_pielegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QPieLegendMarker* self, bool visible ```
void q_pielegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QPieLegendMarker* self ```
int64_t q_pielegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QPieLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_pielegendmarker_set_shape(void* self, int64_t shape);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_clicked(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QPieLegendMarker* self, bool status ```
void q_pielegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_pielegendmarker_on_hovered(void* self, void (*slot)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_label_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_label_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_font_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_pen_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_shape_changed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPieLegendMarker* self ```
const char* q_pielegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPieLegendMarker* self, char* name ```
void q_pielegendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPieLegendMarker* self, bool b ```
bool q_pielegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPieLegendMarker* self ```
QThread* q_pielegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPieLegendMarker* self, QThread* thread ```
void q_pielegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieLegendMarker* self, int interval ```
int32_t q_pielegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPieLegendMarker* self, int id ```
void q_pielegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPieLegendMarker* self ```
const libqt_list /* of QObject* */ q_pielegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPieLegendMarker* self, QObject* parent ```
void q_pielegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPieLegendMarker* self, QObject* filterObj ```
void q_pielegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPieLegendMarker* self, QObject* obj ```
void q_pielegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pielegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pielegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pielegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pielegendmarker_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPieLegendMarker* self, const char* name, QVariant* value ```
bool q_pielegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPieLegendMarker* self, const char* name ```
QVariant* q_pielegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPieLegendMarker* self ```
const char** q_pielegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieLegendMarker* self ```
QBindingStorage* q_pielegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieLegendMarker* self ```
const QBindingStorage* q_pielegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieLegendMarker* self, void (*slot)(QObject*) ```
void q_pielegendmarker_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPieLegendMarker* self ```
QObject* q_pielegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPieLegendMarker* self, const char* classname ```
bool q_pielegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pielegendmarker_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pielegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pielegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieLegendMarker* self, QObject* param1 ```
void q_pielegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_pielegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
bool q_pielegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
bool q_pielegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, bool (*slot)(QPieLegendMarker*, QEvent*) ```
void q_pielegendmarker_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QObject* watched, QEvent* event ```
bool q_pielegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QObject* watched, QEvent* event ```
bool q_pielegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, bool (*slot)(QPieLegendMarker*, QObject*, QEvent*) ```
void q_pielegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QTimerEvent* event ```
void q_pielegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QTimerEvent* event ```
void q_pielegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QTimerEvent*) ```
void q_pielegendmarker_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QChildEvent* event ```
void q_pielegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QChildEvent* event ```
void q_pielegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QChildEvent*) ```
void q_pielegendmarker_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
void q_pielegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
void q_pielegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QEvent*) ```
void q_pielegendmarker_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QMetaMethod*) ```
void q_pielegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QMetaMethod*) ```
void q_pielegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self ```
QObject* q_pielegendmarker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self ```
QObject* q_pielegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QObject* (*slot)() ```
void q_pielegendmarker_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self ```
int32_t q_pielegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self ```
int32_t q_pielegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, int32_t (*slot)() ```
void q_pielegendmarker_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, const char* signal ```
int32_t q_pielegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, const char* signal ```
int32_t q_pielegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, int32_t (*slot)(QPieLegendMarker*, const char*) ```
void q_pielegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
bool q_pielegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
bool q_pielegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, bool (*slot)(QPieLegendMarker*, QMetaMethod*) ```
void q_pielegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPieLegendMarker* self, void (*slot)(QObject*, const char*) ```
void q_pielegendmarker_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker-qtcharts.html#dtor.QPieLegendMarker)
///
/// Delete this object from C++ memory.
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_delete(void* self);

#endif
