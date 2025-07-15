#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html

/// q_hbarmodelmapper_new constructs a new QHBarModelMapper object.
///
///
QHBarModelMapper* q_hbarmodelmapper_new();

/// q_hbarmodelmapper_new2 constructs a new QHBarModelMapper object.
///
/// ``` QObject* parent ```
QHBarModelMapper* q_hbarmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHBarModelMapper* self ```
const QMetaObject* q_hbarmodelmapper_meta_object(void* self);

/// ``` QHBarModelMapper* self, const char* param1 ```
void* q_hbarmodelmapper_metacast(void* self, const char* param1);

/// ``` QHBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hbarmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)(QHBarModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hbarmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QHBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hbarmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hbarmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#model)
///
/// ``` QHBarModelMapper* self ```
QAbstractItemModel* q_hbarmodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#setModel)
///
/// ``` QHBarModelMapper* self, QAbstractItemModel* model ```
void q_hbarmodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#series)
///
/// ``` QHBarModelMapper* self ```
QAbstractBarSeries* q_hbarmodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#setSeries)
///
/// ``` QHBarModelMapper* self, QAbstractBarSeries* series ```
void q_hbarmodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#firstBarSetRow)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first_bar_set_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#setFirstBarSetRow)
///
/// ``` QHBarModelMapper* self, int firstBarSetRow ```
void q_hbarmodelmapper_set_first_bar_set_row(void* self, int firstBarSetRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#lastBarSetRow)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_last_bar_set_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#setLastBarSetRow)
///
/// ``` QHBarModelMapper* self, int lastBarSetRow ```
void q_hbarmodelmapper_set_last_bar_set_row(void* self, int lastBarSetRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#firstColumn)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#setFirstColumn)
///
/// ``` QHBarModelMapper* self, int firstColumn ```
void q_hbarmodelmapper_set_first_column(void* self, int firstColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#columnCount)
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#setColumnCount)
///
/// ``` QHBarModelMapper* self, int columnCount ```
void q_hbarmodelmapper_set_column_count(void* self, int columnCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_series_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_model_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#firstBarSetRowChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_first_bar_set_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#firstBarSetRowChanged)
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_first_bar_set_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#lastBarSetRowChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_last_bar_set_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#lastBarSetRowChanged)
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_last_bar_set_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#firstColumnChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_first_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#firstColumnChanged)
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_first_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#columnCountChanged)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_column_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#columnCountChanged)
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*) ```
void q_hbarmodelmapper_on_column_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hbarmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hbarmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHBarModelMapper* self ```
const char* q_hbarmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHBarModelMapper* self, char* name ```
void q_hbarmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHBarModelMapper* self ```
bool q_hbarmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHBarModelMapper* self, bool b ```
bool q_hbarmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHBarModelMapper* self ```
QThread* q_hbarmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHBarModelMapper* self, QThread* thread ```
bool q_hbarmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBarModelMapper* self, int interval ```
int32_t q_hbarmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHBarModelMapper* self, int id ```
void q_hbarmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHBarModelMapper* self, enum Qt__TimerId id ```
void q_hbarmodelmapper_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHBarModelMapper* self ```
libqt_list /* of QObject* */ q_hbarmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHBarModelMapper* self, QObject* parent ```
void q_hbarmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHBarModelMapper* self, QObject* filterObj ```
void q_hbarmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHBarModelMapper* self, QObject* obj ```
void q_hbarmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBarModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hbarmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHBarModelMapper* self, const char* name, QVariant* value ```
bool q_hbarmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHBarModelMapper* self, const char* name ```
QVariant* q_hbarmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHBarModelMapper* self ```
const char** q_hbarmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHBarModelMapper* self ```
QBindingStorage* q_hbarmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHBarModelMapper* self ```
const QBindingStorage* q_hbarmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBarModelMapper* self, void (*slot)(QObject*) ```
void q_hbarmodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHBarModelMapper* self ```
QObject* q_hbarmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHBarModelMapper* self, const char* classname ```
bool q_hbarmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHBarModelMapper* self, QThread* thread, Disambiguated_t* param2 ```
bool q_hbarmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBarModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hbarmodelmapper_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBarModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBarModelMapper* self, QObject* param1 ```
void q_hbarmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBarModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hbarmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
bool q_hbarmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
bool q_hbarmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, bool (*slot)(QHBarModelMapper*, QEvent*) ```
void q_hbarmodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_hbarmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_hbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, bool (*slot)(QHBarModelMapper*, QObject*, QEvent*) ```
void q_hbarmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QTimerEvent* event ```
void q_hbarmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QTimerEvent* event ```
void q_hbarmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QTimerEvent*) ```
void q_hbarmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QChildEvent* event ```
void q_hbarmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QChildEvent* event ```
void q_hbarmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QChildEvent*) ```
void q_hbarmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
void q_hbarmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QEvent* event ```
void q_hbarmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QEvent*) ```
void q_hbarmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QMetaMethod*) ```
void q_hbarmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
void q_hbarmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, QMetaMethod*) ```
void q_hbarmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_first(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_first(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int first ```
void q_hbarmodelmapper_set_first(void* self, int first);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int first ```
void q_hbarmodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_first(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_count(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_count(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_count(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int count ```
void q_hbarmodelmapper_set_count(void* self, int count);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int count ```
void q_hbarmodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_count(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_first_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_first_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int firstBarSetSection ```
void q_hbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int firstBarSetSection ```
void q_hbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_first_bar_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_last_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_last_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, int lastBarSetSection ```
void q_hbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int lastBarSetSection ```
void q_hbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, int) ```
void q_hbarmodelmapper_on_set_last_bar_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int64_t q_hbarmodelmapper_orientation(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int64_t q_hbarmodelmapper_qbase_orientation(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int64_t (*slot)() ```
void q_hbarmodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, enum Qt__Orientation orientation ```
void q_hbarmodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, enum Qt__Orientation orientation ```
void q_hbarmodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, void (*slot)(QHBarModelMapper*, enum Qt__Orientation) ```
void q_hbarmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
QObject* q_hbarmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
QObject* q_hbarmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QObject* (*slot)() ```
void q_hbarmodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self ```
int32_t q_hbarmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)() ```
void q_hbarmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, const char* signal ```
int32_t q_hbarmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, const char* signal ```
int32_t q_hbarmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, int32_t (*slot)(QHBarModelMapper*, const char*) ```
void q_hbarmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
bool q_hbarmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBarModelMapper* self, QMetaMethod* signal ```
bool q_hbarmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBarModelMapper* self, bool (*slot)(QHBarModelMapper*, QMetaMethod*) ```
void q_hbarmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QHBarModelMapper* self, void (*slot)(QObject*, const char*) ```
void q_hbarmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhbarmodelmapper-qtcharts.html#dtor.QHBarModelMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QHBarModelMapper* self ```
void q_hbarmodelmapper_delete(void* self);

#endif
