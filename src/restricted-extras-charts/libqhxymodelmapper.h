#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html

/// q_hxymodelmapper_new constructs a new QHXYModelMapper object.
///
///
QHXYModelMapper* q_hxymodelmapper_new();

/// q_hxymodelmapper_new2 constructs a new QHXYModelMapper object.
///
/// ``` QObject* parent ```
QHXYModelMapper* q_hxymodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHXYModelMapper* self ```
const QMetaObject* q_hxymodelmapper_meta_object(void* self);

/// ``` QHXYModelMapper* self, const char* param1 ```
void* q_hxymodelmapper_metacast(void* self, const char* param1);

/// ``` QHXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hxymodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)(QHXYModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hxymodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QHXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hxymodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hxymodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#model)
///
/// ``` QHXYModelMapper* self ```
QAbstractItemModel* q_hxymodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setModel)
///
/// ``` QHXYModelMapper* self, QAbstractItemModel* model ```
void q_hxymodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#series)
///
/// ``` QHXYModelMapper* self ```
QXYSeries* q_hxymodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setSeries)
///
/// ``` QHXYModelMapper* self, QXYSeries* series ```
void q_hxymodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRow)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_x_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setXRow)
///
/// ``` QHXYModelMapper* self, int xRow ```
void q_hxymodelmapper_set_x_row(void* self, int xRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRow)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_y_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setYRow)
///
/// ``` QHXYModelMapper* self, int yRow ```
void q_hxymodelmapper_set_y_row(void* self, int yRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumn)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_first_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setFirstColumn)
///
/// ``` QHXYModelMapper* self, int firstColumn ```
void q_hxymodelmapper_set_first_column(void* self, int firstColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCount)
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setColumnCount)
///
/// ``` QHXYModelMapper* self, int columnCount ```
void q_hxymodelmapper_set_column_count(void* self, int columnCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_series_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_model_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_x_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_x_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_y_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_y_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_first_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_first_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_column_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*) ```
void q_hxymodelmapper_on_column_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hxymodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hxymodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHXYModelMapper* self ```
const char* q_hxymodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHXYModelMapper* self, char* name ```
void q_hxymodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHXYModelMapper* self ```
bool q_hxymodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHXYModelMapper* self, bool b ```
bool q_hxymodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHXYModelMapper* self ```
QThread* q_hxymodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHXYModelMapper* self, QThread* thread ```
bool q_hxymodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHXYModelMapper* self, int interval ```
int32_t q_hxymodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHXYModelMapper* self, int id ```
void q_hxymodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHXYModelMapper* self, enum Qt__TimerId id ```
void q_hxymodelmapper_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHXYModelMapper* self ```
libqt_list /* of QObject* */ q_hxymodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHXYModelMapper* self, QObject* parent ```
void q_hxymodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHXYModelMapper* self, QObject* filterObj ```
void q_hxymodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHXYModelMapper* self, QObject* obj ```
void q_hxymodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHXYModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hxymodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHXYModelMapper* self, const char* name, QVariant* value ```
bool q_hxymodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHXYModelMapper* self, const char* name ```
QVariant* q_hxymodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHXYModelMapper* self ```
const char** q_hxymodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHXYModelMapper* self ```
QBindingStorage* q_hxymodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHXYModelMapper* self ```
const QBindingStorage* q_hxymodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHXYModelMapper* self, void (*slot)(QObject*) ```
void q_hxymodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHXYModelMapper* self ```
QObject* q_hxymodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHXYModelMapper* self, const char* classname ```
bool q_hxymodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHXYModelMapper* self, QThread* thread, Disambiguated_t* param2 ```
bool q_hxymodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHXYModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hxymodelmapper_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHXYModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHXYModelMapper* self, QObject* param1 ```
void q_hxymodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHXYModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hxymodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
bool q_hxymodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
bool q_hxymodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, bool (*slot)(QHXYModelMapper*, QEvent*) ```
void q_hxymodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_hxymodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_hxymodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, bool (*slot)(QHXYModelMapper*, QObject*, QEvent*) ```
void q_hxymodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QTimerEvent* event ```
void q_hxymodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QTimerEvent* event ```
void q_hxymodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QTimerEvent*) ```
void q_hxymodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QChildEvent* event ```
void q_hxymodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QChildEvent* event ```
void q_hxymodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QChildEvent*) ```
void q_hxymodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
void q_hxymodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QEvent* event ```
void q_hxymodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QEvent*) ```
void q_hxymodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QMetaMethod*) ```
void q_hxymodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
void q_hxymodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, QMetaMethod*) ```
void q_hxymodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_first(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_first(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_first(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int first ```
void q_hxymodelmapper_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int first ```
void q_hxymodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_first(void* self, void (*slot)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_count(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_count(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_count(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int count ```
void q_hxymodelmapper_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int count ```
void q_hxymodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_count(void* self, void (*slot)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int64_t q_hxymodelmapper_orientation(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int64_t q_hxymodelmapper_qbase_orientation(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int64_t (*slot)() ```
void q_hxymodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, enum Qt__Orientation orientation ```
void q_hxymodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, enum Qt__Orientation orientation ```
void q_hxymodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, enum Qt__Orientation) ```
void q_hxymodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_x_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_x_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_x_section(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int xSection ```
void q_hxymodelmapper_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int xSection ```
void q_hxymodelmapper_qbase_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_x_section(void* self, void (*slot)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_y_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_y_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_y_section(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, int ySection ```
void q_hxymodelmapper_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int ySection ```
void q_hxymodelmapper_qbase_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, void (*slot)(QHXYModelMapper*, int) ```
void q_hxymodelmapper_on_set_y_section(void* self, void (*slot)(void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
QObject* q_hxymodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
QObject* q_hxymodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QObject* (*slot)() ```
void q_hxymodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self ```
int32_t q_hxymodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)() ```
void q_hxymodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, const char* signal ```
int32_t q_hxymodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, const char* signal ```
int32_t q_hxymodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, int32_t (*slot)(QHXYModelMapper*, const char*) ```
void q_hxymodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
bool q_hxymodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHXYModelMapper* self, QMetaMethod* signal ```
bool q_hxymodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHXYModelMapper* self, bool (*slot)(QHXYModelMapper*, QMetaMethod*) ```
void q_hxymodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QHXYModelMapper* self, void (*slot)(QObject*, const char*) ```
void q_hxymodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#dtor.QHXYModelMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QHXYModelMapper* self ```
void q_hxymodelmapper_delete(void* self);

#endif
