#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html

/// q_vbarmodelmapper_new constructs a new QVBarModelMapper object.
///
QVBarModelMapper* q_vbarmodelmapper_new();

/// q_vbarmodelmapper_new2 constructs a new QVBarModelMapper object.
///
/// @param parent QObject*
QVBarModelMapper* q_vbarmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVBarModelMapper*
const QMetaObject* q_vbarmodelmapper_meta_object(void* self);

/// @param self QVBarModelMapper*
/// @param param1 const char*
void* q_vbarmodelmapper_metacast(void* self, const char* param1);

/// @param self QVBarModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_vbarmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn(QVBarModelMapper*, enum QMetaObject__Call, int, void*)
void q_vbarmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVBarModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_vbarmodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_vbarmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#model)
///
/// @param self QVBarModelMapper*
QAbstractItemModel* q_vbarmodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setModel)
///
/// @param self QVBarModelMapper*
/// @param model QAbstractItemModel*
void q_vbarmodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#series)
///
/// @param self QVBarModelMapper*
QAbstractBarSeries* q_vbarmodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setSeries)
///
/// @param self QVBarModelMapper*
/// @param series QAbstractBarSeries*
void q_vbarmodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstBarSetColumn)
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_first_bar_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setFirstBarSetColumn)
///
/// @param self QVBarModelMapper*
/// @param firstBarSetColumn int
void q_vbarmodelmapper_set_first_bar_set_column(void* self, int firstBarSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#lastBarSetColumn)
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_last_bar_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setLastBarSetColumn)
///
/// @param self QVBarModelMapper*
/// @param lastBarSetColumn int
void q_vbarmodelmapper_set_last_bar_set_column(void* self, int lastBarSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstRow)
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_first_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setFirstRow)
///
/// @param self QVBarModelMapper*
/// @param firstRow int
void q_vbarmodelmapper_set_first_row(void* self, int firstRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#rowCount)
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#setRowCount)
///
/// @param self QVBarModelMapper*
/// @param rowCount int
void q_vbarmodelmapper_set_row_count(void* self, int rowCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_series_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*)
void q_vbarmodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_model_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*)
void q_vbarmodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstBarSetColumnChanged)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_first_bar_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstBarSetColumnChanged)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*)
void q_vbarmodelmapper_on_first_bar_set_column_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#lastBarSetColumnChanged)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_last_bar_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#lastBarSetColumnChanged)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*)
void q_vbarmodelmapper_on_last_bar_set_column_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_first_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*)
void q_vbarmodelmapper_on_first_row_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_row_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*)
void q_vbarmodelmapper_on_row_count_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_vbarmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_vbarmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVBarModelMapper*
const char* q_vbarmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVBarModelMapper*
/// @param name char*
void q_vbarmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVBarModelMapper*
bool q_vbarmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVBarModelMapper*
bool q_vbarmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVBarModelMapper*
bool q_vbarmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVBarModelMapper*
bool q_vbarmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVBarModelMapper*
/// @param b bool
bool q_vbarmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVBarModelMapper*
QThread* q_vbarmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVBarModelMapper*
/// @param thread QThread*
bool q_vbarmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBarModelMapper*
/// @param interval int
int32_t q_vbarmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVBarModelMapper*
/// @param id int
void q_vbarmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVBarModelMapper*
/// @param id enum Qt__TimerId
void q_vbarmodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVBarModelMapper*
libqt_list /* of QObject* */ q_vbarmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVBarModelMapper*
/// @param parent QObject*
void q_vbarmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVBarModelMapper*
/// @param filterObj QObject*
void q_vbarmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVBarModelMapper*
/// @param obj QObject*
void q_vbarmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_vbarmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVBarModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_vbarmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_vbarmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_vbarmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVBarModelMapper*
/// @param name const char*
/// @param value QVariant*
bool q_vbarmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVBarModelMapper*
/// @param name const char*
QVariant* q_vbarmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVBarModelMapper*
const char** q_vbarmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVBarModelMapper*
QBindingStorage* q_vbarmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVBarModelMapper*
const QBindingStorage* q_vbarmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*)
void q_vbarmodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVBarModelMapper*
QObject* q_vbarmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVBarModelMapper*
/// @param classname const char*
bool q_vbarmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVBarModelMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_vbarmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBarModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_vbarmodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_vbarmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVBarModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_vbarmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBarModelMapper*
/// @param param1 QObject*
void q_vbarmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, QObject*)
void q_vbarmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QEvent*
bool q_vbarmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QEvent*
bool q_vbarmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback bool fn(QVBarModelMapper*, QEvent*)
void q_vbarmodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_vbarmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param watched QObject*
/// @param event QEvent*
bool q_vbarmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback bool fn(QVBarModelMapper*, QObject*, QEvent*)
void q_vbarmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QTimerEvent*
void q_vbarmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QTimerEvent*
void q_vbarmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, QTimerEvent*)
void q_vbarmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QChildEvent*
void q_vbarmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QChildEvent*
void q_vbarmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, QChildEvent*)
void q_vbarmodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QEvent*
void q_vbarmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param event QEvent*
void q_vbarmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, QEvent*)
void q_vbarmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal QMetaMethod*
void q_vbarmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal QMetaMethod*
void q_vbarmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, QMetaMethod*)
void q_vbarmodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal QMetaMethod*
void q_vbarmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal QMetaMethod*
void q_vbarmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, QMetaMethod*)
void q_vbarmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_first(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_qbase_first(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn()
void q_vbarmodelmapper_on_first(void* self, int32_t (*callback)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param first int
void q_vbarmodelmapper_set_first(void* self, int first);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param first int
void q_vbarmodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, int)
void q_vbarmodelmapper_on_set_first(void* self, void (*callback)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_count(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_qbase_count(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn()
void q_vbarmodelmapper_on_count(void* self, int32_t (*callback)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param count int
void q_vbarmodelmapper_set_count(void* self, int count);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param count int
void q_vbarmodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, int)
void q_vbarmodelmapper_on_set_count(void* self, void (*callback)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_first_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_qbase_first_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#firstBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn()
void q_vbarmodelmapper_on_first_bar_set_section(void* self, int32_t (*callback)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param firstBarSetSection int
void q_vbarmodelmapper_set_first_bar_set_section(void* self, int firstBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param firstBarSetSection int
void q_vbarmodelmapper_qbase_set_first_bar_set_section(void* self, int firstBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setFirstBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, int)
void q_vbarmodelmapper_on_set_first_bar_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_last_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_qbase_last_bar_set_section(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#lastBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn()
void q_vbarmodelmapper_on_last_bar_set_section(void* self, int32_t (*callback)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param lastBarSetSection int
void q_vbarmodelmapper_set_last_bar_set_section(void* self, int lastBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param lastBarSetSection int
void q_vbarmodelmapper_qbase_set_last_bar_set_section(void* self, int lastBarSetSection);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setLastBarSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, int)
void q_vbarmodelmapper_on_set_last_bar_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
///
/// @return enum Qt__Orientation
int32_t q_vbarmodelmapper_orientation(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
///
/// @return enum Qt__Orientation
int32_t q_vbarmodelmapper_qbase_orientation(void* self);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn()
void q_vbarmodelmapper_on_orientation(void* self, int32_t (*callback)());

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param orientation enum Qt__Orientation
void q_vbarmodelmapper_set_orientation(void* self, int32_t orientation);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param orientation enum Qt__Orientation
void q_vbarmodelmapper_qbase_set_orientation(void* self, int32_t orientation);

/// Inherited from QBarModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbarmodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, enum Qt__Orientation)
void q_vbarmodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
QObject* q_vbarmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
QObject* q_vbarmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback QObject* fn()
void q_vbarmodelmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
int32_t q_vbarmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn()
void q_vbarmodelmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal const char*
int32_t q_vbarmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal const char*
int32_t q_vbarmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback int32_t fn(QVBarModelMapper*, const char*)
void q_vbarmodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal QMetaMethod*
bool q_vbarmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param signal QMetaMethod*
bool q_vbarmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBarModelMapper*
/// @param callback bool fn(QVBarModelMapper*, QMetaMethod*)
void q_vbarmodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVBarModelMapper*
/// @param callback void fn(QVBarModelMapper*, const char*)
void q_vbarmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvbarmodelmapper-qtcharts.html#dtor.QVBarModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QVBarModelMapper*
void q_vbarmodelmapper_delete(void* self);

#endif
