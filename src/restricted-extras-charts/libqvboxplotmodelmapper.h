#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html

/// q_vboxplotmodelmapper_new constructs a new QVBoxPlotModelMapper object.
///
QVBoxPlotModelMapper* q_vboxplotmodelmapper_new();

/// q_vboxplotmodelmapper_new2 constructs a new QVBoxPlotModelMapper object.
///
/// @param parent QObject*
QVBoxPlotModelMapper* q_vboxplotmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVBoxPlotModelMapper*
const QMetaObject* q_vboxplotmodelmapper_meta_object(void* self);

/// @param self QVBoxPlotModelMapper*
/// @param param1 const char*
void* q_vboxplotmodelmapper_metacast(void* self, const char* param1);

/// @param self QVBoxPlotModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_vboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int32_t fn(QVBoxPlotModelMapper*, enum QMetaObject__Call, int, void*)
void q_vboxplotmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QVBoxPlotModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_vboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_vboxplotmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#model)
///
/// @param self QVBoxPlotModelMapper*
QAbstractItemModel* q_vboxplotmodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setModel)
///
/// @param self QVBoxPlotModelMapper*
/// @param model QAbstractItemModel*
void q_vboxplotmodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#series)
///
/// @param self QVBoxPlotModelMapper*
QBoxPlotSeries* q_vboxplotmodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setSeries)
///
/// @param self QVBoxPlotModelMapper*
/// @param series QBoxPlotSeries*
void q_vboxplotmodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumn)
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_first_box_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstBoxSetColumn)
///
/// @param self QVBoxPlotModelMapper*
/// @param firstBoxSetColumn int
void q_vboxplotmodelmapper_set_first_box_set_column(void* self, int firstBoxSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumn)
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_last_box_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setLastBoxSetColumn)
///
/// @param self QVBoxPlotModelMapper*
/// @param lastBoxSetColumn int
void q_vboxplotmodelmapper_set_last_box_set_column(void* self, int lastBoxSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRow)
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_first_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstRow)
///
/// @param self QVBoxPlotModelMapper*
/// @param firstRow int
void q_vboxplotmodelmapper_set_first_row(void* self, int firstRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCount)
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setRowCount)
///
/// @param self QVBoxPlotModelMapper*
/// @param rowCount int
void q_vboxplotmodelmapper_set_row_count(void* self, int rowCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_series_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*)
void q_vboxplotmodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_model_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*)
void q_vboxplotmodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_first_box_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*)
void q_vboxplotmodelmapper_on_first_box_set_column_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_last_box_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*)
void q_vboxplotmodelmapper_on_last_box_set_column_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_first_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*)
void q_vboxplotmodelmapper_on_first_row_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_row_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*)
void q_vboxplotmodelmapper_on_row_count_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_vboxplotmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_vboxplotmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVBoxPlotModelMapper*
const char* q_vboxplotmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVBoxPlotModelMapper*
/// @param name char*
void q_vboxplotmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVBoxPlotModelMapper*
bool q_vboxplotmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVBoxPlotModelMapper*
bool q_vboxplotmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVBoxPlotModelMapper*
bool q_vboxplotmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVBoxPlotModelMapper*
bool q_vboxplotmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVBoxPlotModelMapper*
/// @param b bool
bool q_vboxplotmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVBoxPlotModelMapper*
QThread* q_vboxplotmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVBoxPlotModelMapper*
/// @param thread QThread*
bool q_vboxplotmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBoxPlotModelMapper*
/// @param interval int
int32_t q_vboxplotmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVBoxPlotModelMapper*
/// @param id int
void q_vboxplotmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVBoxPlotModelMapper*
/// @param id enum Qt__TimerId
void q_vboxplotmodelmapper_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVBoxPlotModelMapper*
libqt_list /* of QObject* */ q_vboxplotmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVBoxPlotModelMapper*
/// @param parent QObject*
void q_vboxplotmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVBoxPlotModelMapper*
/// @param filterObj QObject*
void q_vboxplotmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVBoxPlotModelMapper*
/// @param obj QObject*
void q_vboxplotmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_vboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVBoxPlotModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_vboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_vboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_vboxplotmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVBoxPlotModelMapper*
/// @param name const char*
/// @param value QVariant*
bool q_vboxplotmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVBoxPlotModelMapper*
/// @param name const char*
QVariant* q_vboxplotmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVBoxPlotModelMapper*
const char** q_vboxplotmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVBoxPlotModelMapper*
QBindingStorage* q_vboxplotmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVBoxPlotModelMapper*
const QBindingStorage* q_vboxplotmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*)
void q_vboxplotmodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVBoxPlotModelMapper*
QObject* q_vboxplotmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVBoxPlotModelMapper*
/// @param classname const char*
bool q_vboxplotmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVBoxPlotModelMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_vboxplotmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBoxPlotModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_vboxplotmodelmapper_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_vboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVBoxPlotModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_vboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxPlotModelMapper*
/// @param param1 QObject*
void q_vboxplotmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, QObject*)
void q_vboxplotmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QEvent*
bool q_vboxplotmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QEvent*
bool q_vboxplotmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback bool fn(QVBoxPlotModelMapper*, QEvent*)
void q_vboxplotmodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_vboxplotmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_vboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback bool fn(QVBoxPlotModelMapper*, QObject*, QEvent*)
void q_vboxplotmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QTimerEvent*
void q_vboxplotmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QTimerEvent*
void q_vboxplotmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, QTimerEvent*)
void q_vboxplotmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QChildEvent*
void q_vboxplotmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QChildEvent*
void q_vboxplotmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, QChildEvent*)
void q_vboxplotmodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QEvent*
void q_vboxplotmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param event QEvent*
void q_vboxplotmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, QEvent*)
void q_vboxplotmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal QMetaMethod*
void q_vboxplotmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal QMetaMethod*
void q_vboxplotmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, QMetaMethod*)
void q_vboxplotmodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal QMetaMethod*
void q_vboxplotmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal QMetaMethod*
void q_vboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, QMetaMethod*)
void q_vboxplotmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_qbase_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int32_t fn()
void q_vboxplotmodelmapper_on_first(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param first int
void q_vboxplotmodelmapper_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param first int
void q_vboxplotmodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, int)
void q_vboxplotmodelmapper_on_set_first(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_qbase_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int32_t fn()
void q_vboxplotmodelmapper_on_count(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param count int
void q_vboxplotmodelmapper_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param count int
void q_vboxplotmodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, int)
void q_vboxplotmodelmapper_on_set_count(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_qbase_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int32_t fn()
void q_vboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param firstBoxSetSection int
void q_vboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param firstBoxSetSection int
void q_vboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, int)
void q_vboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_qbase_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int32_t fn()
void q_vboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param lastBoxSetSection int
void q_vboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param lastBoxSetSection int
void q_vboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, int)
void q_vboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
///
/// @return enum Qt__Orientation
int64_t q_vboxplotmodelmapper_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
///
/// @return enum Qt__Orientation
int64_t q_vboxplotmodelmapper_qbase_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int64_t fn()
void q_vboxplotmodelmapper_on_orientation(void* self, int64_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param orientation enum Qt__Orientation
void q_vboxplotmodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param orientation enum Qt__Orientation
void q_vboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, enum Qt__Orientation)
void q_vboxplotmodelmapper_on_set_orientation(void* self, void (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
QObject* q_vboxplotmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
QObject* q_vboxplotmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback QObject* fn()
void q_vboxplotmodelmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
int32_t q_vboxplotmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int32_t fn()
void q_vboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal const char*
int32_t q_vboxplotmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal const char*
int32_t q_vboxplotmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback int32_t fn(QVBoxPlotModelMapper*, const char*)
void q_vboxplotmodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal QMetaMethod*
bool q_vboxplotmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param signal QMetaMethod*
bool q_vboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxPlotModelMapper*
/// @param callback bool fn(QVBoxPlotModelMapper*, QMetaMethod*)
void q_vboxplotmodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVBoxPlotModelMapper*
/// @param callback void fn(QVBoxPlotModelMapper*, const char*)
void q_vboxplotmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#dtor.QVBoxPlotModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QVBoxPlotModelMapper*
void q_vboxplotmodelmapper_delete(void* self);

#endif
