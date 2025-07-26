#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQAREALEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQAREALEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html

/// q_arealegendmarker_new constructs a new QAreaLegendMarker object.
///
/// ``` QAreaSeries* series, QLegend* legend ```
QAreaLegendMarker* q_arealegendmarker_new(void* series, void* legend);

/// q_arealegendmarker_new2 constructs a new QAreaLegendMarker object.
///
/// ``` QAreaSeries* series, QLegend* legend, QObject* parent ```
QAreaLegendMarker* q_arealegendmarker_new2(void* series, void* legend, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAreaLegendMarker* self ```
const QMetaObject* q_arealegendmarker_meta_object(void* self);

/// ``` QAreaLegendMarker* self, const char* param1 ```
void* q_arealegendmarker_metacast(void* self, const char* param1);

/// ``` QAreaLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_arealegendmarker_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAreaLegendMarker* self, int32_t (*slot)(QAreaLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_arealegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAreaLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_arealegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_arealegendmarker_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#type)
///
/// ``` QAreaLegendMarker* self ```
int64_t q_arealegendmarker_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QAreaLegendMarker* self, int64_t (*slot)() ```
void q_arealegendmarker_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QAreaLegendMarker* self ```
int64_t q_arealegendmarker_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#series)
///
/// ``` QAreaLegendMarker* self ```
QAreaSeries* q_arealegendmarker_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#series)
///
/// Allows for overriding the related default method
///
/// ``` QAreaLegendMarker* self, QAreaSeries* (*slot)() ```
void q_arealegendmarker_on_series(void* self, QAreaSeries* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#series)
///
/// Base class method implementation
///
/// ``` QAreaLegendMarker* self ```
QAreaSeries* q_arealegendmarker_qbase_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_arealegendmarker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_arealegendmarker_tr3(const char* s, const char* c, int n);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QAreaLegendMarker* self ```
const char* q_arealegendmarker_label(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QAreaLegendMarker* self, const char* label ```
void q_arealegendmarker_set_label(void* self, const char* label);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QAreaLegendMarker* self ```
QBrush* q_arealegendmarker_label_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QAreaLegendMarker* self, QBrush* brush ```
void q_arealegendmarker_set_label_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QAreaLegendMarker* self ```
QFont* q_arealegendmarker_font(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QAreaLegendMarker* self, QFont* font ```
void q_arealegendmarker_set_font(void* self, void* font);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QAreaLegendMarker* self ```
QPen* q_arealegendmarker_pen(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QAreaLegendMarker* self, QPen* pen ```
void q_arealegendmarker_set_pen(void* self, void* pen);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QAreaLegendMarker* self ```
QBrush* q_arealegendmarker_brush(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QAreaLegendMarker* self, QBrush* brush ```
void q_arealegendmarker_set_brush(void* self, void* brush);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_visible(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QAreaLegendMarker* self, bool visible ```
void q_arealegendmarker_set_visible(void* self, bool visible);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QAreaLegendMarker* self ```
int64_t q_arealegendmarker_shape(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QAreaLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_arealegendmarker_set_shape(void* self, int64_t shape);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_clicked(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_clicked(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QAreaLegendMarker* self, bool status ```
void q_arealegendmarker_hovered(void* self, bool status);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, bool) ```
void q_arealegendmarker_on_hovered(void* self, void (*slot)(void*, bool));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_label_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_label_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_label_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_label_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_font_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_font_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_pen_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_pen_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_brush_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_brush_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_visible_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_shape_changed(void* self);

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_shape_changed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAreaLegendMarker* self ```
const char* q_arealegendmarker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAreaLegendMarker* self, char* name ```
void q_arealegendmarker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAreaLegendMarker* self, bool b ```
bool q_arealegendmarker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAreaLegendMarker* self ```
QThread* q_arealegendmarker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAreaLegendMarker* self, QThread* thread ```
bool q_arealegendmarker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaLegendMarker* self, int interval ```
int32_t q_arealegendmarker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAreaLegendMarker* self, int id ```
void q_arealegendmarker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAreaLegendMarker* self, enum Qt__TimerId id ```
void q_arealegendmarker_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAreaLegendMarker* self ```
libqt_list /* of QObject* */ q_arealegendmarker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAreaLegendMarker* self, QObject* parent ```
void q_arealegendmarker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAreaLegendMarker* self, QObject* filterObj ```
void q_arealegendmarker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAreaLegendMarker* self, QObject* obj ```
void q_arealegendmarker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_arealegendmarker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_arealegendmarker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_arealegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_arealegendmarker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAreaLegendMarker* self, const char* name, QVariant* value ```
bool q_arealegendmarker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAreaLegendMarker* self, const char* name ```
QVariant* q_arealegendmarker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAreaLegendMarker* self ```
const char** q_arealegendmarker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAreaLegendMarker* self ```
QBindingStorage* q_arealegendmarker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAreaLegendMarker* self ```
const QBindingStorage* q_arealegendmarker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*) ```
void q_arealegendmarker_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAreaLegendMarker* self ```
QObject* q_arealegendmarker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAreaLegendMarker* self, const char* classname ```
bool q_arealegendmarker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAreaLegendMarker* self, QThread* thread, Disambiguated_t* param2 ```
bool q_arealegendmarker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_arealegendmarker_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_arealegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_arealegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaLegendMarker* self, QObject* param1 ```
void q_arealegendmarker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QObject*) ```
void q_arealegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
bool q_arealegendmarker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
bool q_arealegendmarker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, bool (*slot)(QAreaLegendMarker*, QEvent*) ```
void q_arealegendmarker_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QObject* watched, QEvent* event ```
bool q_arealegendmarker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QObject* watched, QEvent* event ```
bool q_arealegendmarker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, bool (*slot)(QAreaLegendMarker*, QObject*, QEvent*) ```
void q_arealegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QTimerEvent* event ```
void q_arealegendmarker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QTimerEvent* event ```
void q_arealegendmarker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QTimerEvent*) ```
void q_arealegendmarker_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QChildEvent* event ```
void q_arealegendmarker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QChildEvent* event ```
void q_arealegendmarker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QChildEvent*) ```
void q_arealegendmarker_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
void q_arealegendmarker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
void q_arealegendmarker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QEvent*) ```
void q_arealegendmarker_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QMetaMethod*) ```
void q_arealegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QMetaMethod*) ```
void q_arealegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
QObject* q_arealegendmarker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
QObject* q_arealegendmarker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QObject* (*slot)() ```
void q_arealegendmarker_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
int32_t q_arealegendmarker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
int32_t q_arealegendmarker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, int32_t (*slot)() ```
void q_arealegendmarker_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, const char* signal ```
int32_t q_arealegendmarker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, const char* signal ```
int32_t q_arealegendmarker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, int32_t (*slot)(QAreaLegendMarker*, const char*) ```
void q_arealegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
bool q_arealegendmarker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
bool q_arealegendmarker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, bool (*slot)(QAreaLegendMarker*, QMetaMethod*) ```
void q_arealegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, const char*) ```
void q_arealegendmarker_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker-qtcharts.html#dtor.QAreaLegendMarker)
///
/// Delete this object from C++ memory.
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_delete(void* self);

#endif
