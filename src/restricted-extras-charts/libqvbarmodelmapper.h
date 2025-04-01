#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractbarseries.h"
#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "libqbarmodelmapper.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qvbarmodelmapper.html

/// q_vbarmodelmapper_new constructs a new QVBarModelMapper object.
///
///
QVBarModelMapper* q_vbarmodelmapper_new();

/// q_vbarmodelmapper_new2 constructs a new QVBarModelMapper object.
///
/// ``` QObject* parent ```
QVBarModelMapper* q_vbarmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVBarModelMapper* self ```
QMetaObject* q_vbarmodelmapper_meta_object(void* self);

/// ``` QVBarModelMapper* self, const char* param1 ```
void* q_vbarmodelmapper_metacast(void* self, const char* param1);

/// ``` QVBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vbarmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)(QVBarModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vbarmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVBarModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vbarmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vbarmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#model)
///
/// ``` QVBarModelMapper* self ```
QAbstractItemModel* q_vbarmodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setModel)
///
/// ``` QVBarModelMapper* self, QAbstractItemModel* model ```
void q_vbarmodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#series)
///
/// ``` QVBarModelMapper* self ```
QAbstractBarSeries* q_vbarmodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setSeries)
///
/// ``` QVBarModelMapper* self, QAbstractBarSeries* series ```
void q_vbarmodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstBarSetColumn)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first_bar_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setFirstBarSetColumn)
///
/// ``` QVBarModelMapper* self, int firstBarSetColumn ```
void q_vbarmodelmapper_set_first_bar_set_column(void* self, int firstBarSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#lastBarSetColumn)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_last_bar_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setLastBarSetColumn)
///
/// ``` QVBarModelMapper* self, int lastBarSetColumn ```
void q_vbarmodelmapper_set_last_bar_set_column(void* self, int lastBarSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstRow)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setFirstRow)
///
/// ``` QVBarModelMapper* self, int firstRow ```
void q_vbarmodelmapper_set_first_row(void* self, int firstRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#rowCount)
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#setRowCount)
///
/// ``` QVBarModelMapper* self, int rowCount ```
void q_vbarmodelmapper_set_row_count(void* self, int rowCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#seriesReplaced)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_series_replaced(void* self);

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#modelReplaced)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_model_replaced(void* self);

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstBarSetColumnChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_first_bar_set_column_changed(void* self);

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_first_bar_set_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#lastBarSetColumnChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_last_bar_set_column_changed(void* self);

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_last_bar_set_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#firstRowChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_first_row_changed(void* self);

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_first_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper.html#rowCountChanged)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_row_count_changed(void* self);

/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*) ```
void q_vbarmodelmapper_on_row_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vbarmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vbarmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVBarModelMapper* self ```
const char* q_vbarmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVBarModelMapper* self, const char* name ```
void q_vbarmodelmapper_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVBarModelMapper* self ```
bool q_vbarmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVBarModelMapper* self, bool b ```
bool q_vbarmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVBarModelMapper* self ```
QThread* q_vbarmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVBarModelMapper* self, QThread* thread ```
void q_vbarmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBarModelMapper* self, int interval ```
int32_t q_vbarmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVBarModelMapper* self, int id ```
void q_vbarmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVBarModelMapper* self ```
libqt_list /* of QObject* */ q_vbarmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVBarModelMapper* self, QObject* parent ```
void q_vbarmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVBarModelMapper* self, QObject* filterObj ```
void q_vbarmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVBarModelMapper* self, QObject* obj ```
void q_vbarmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBarModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vbarmodelmapper_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVBarModelMapper* self, const char* name, QVariant* value ```
bool q_vbarmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVBarModelMapper* self, const char* name ```
QVariant* q_vbarmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVBarModelMapper* self ```
const char** q_vbarmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVBarModelMapper* self ```
QBindingStorage* q_vbarmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVBarModelMapper* self ```
QBindingStorage* q_vbarmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QVBarModelMapper* self, void (*slot)(QObject*) ```
void q_vbarmodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVBarModelMapper* self ```
QObject* q_vbarmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVBarModelMapper* self, const char* classname ```
bool q_vbarmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBarModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vbarmodelmapper_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBarModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBarModelMapper* self, QObject* param1 ```
void q_vbarmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QVBarModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_vbarmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
bool q_vbarmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
bool q_vbarmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, bool (*slot)(QVBarModelMapper*, QEvent*) ```
void q_vbarmodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_vbarmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QObject* watched, QEvent* event ```
bool q_vbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, bool (*slot)(QVBarModelMapper*, QObject*, QEvent*) ```
void q_vbarmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QTimerEvent* event ```
void q_vbarmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QTimerEvent* event ```
void q_vbarmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QTimerEvent*) ```
void q_vbarmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QChildEvent* event ```
void q_vbarmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QChildEvent* event ```
void q_vbarmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QChildEvent*) ```
void q_vbarmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
void q_vbarmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QEvent* event ```
void q_vbarmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QEvent*) ```
void q_vbarmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QMetaMethod*) ```
void q_vbarmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
void q_vbarmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, QMetaMethod*) ```
void q_vbarmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_first(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_first(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int first ```
void q_vbarmodelmapper_set_first(void* self, int first);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int first ```
void q_vbarmodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_first(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_count(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_count(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_count(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int count ```
void q_vbarmodelmapper_set_count(void* self, int count);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int count ```
void q_vbarmodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_count(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_first_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_first_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int firstBarSetSection ```
void q_vbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int firstBarSetSection ```
void q_vbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_first_bar_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_last_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_last_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, int lastBarSetSection ```
void q_vbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int lastBarSetSection ```
void q_vbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, int) ```
void q_vbarmodelmapper_on_set_last_bar_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int64_t q_vbarmodelmapper_orientation(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int64_t q_vbarmodelmapper_qbase_orientation(void* self);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int64_t (*slot)() ```
void q_vbarmodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, enum Qt__Orientation orientation ```
void q_vbarmodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, enum Qt__Orientation orientation ```
void q_vbarmodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QBarModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, void (*slot)(QVBarModelMapper*, enum Qt__Orientation) ```
void q_vbarmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
QObject* q_vbarmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
QObject* q_vbarmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QObject* (*slot)() ```
void q_vbarmodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self ```
int32_t q_vbarmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)() ```
void q_vbarmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, const char* signal ```
int32_t q_vbarmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, const char* signal ```
int32_t q_vbarmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, int32_t (*slot)(QVBarModelMapper*, const char*) ```
void q_vbarmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
bool q_vbarmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBarModelMapper* self, QMetaMethod* signal ```
bool q_vbarmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBarModelMapper* self, bool (*slot)(QVBarModelMapper*, QMetaMethod*) ```
void q_vbarmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QVBarModelMapper* self ```
void q_vbarmodelmapper_delete(void* self);

#endif
