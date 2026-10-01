#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQVXYMODELMAPPER_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQVXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html)

/// q_vxymodelmapper_new constructs a new QVXYModelMapper object.
///
QVXYModelMapper* q_vxymodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html)

/// q_vxymodelmapper_new2 constructs a new QVXYModelMapper object.
///
/// @param parent QObject*
///
QVXYModelMapper* q_vxymodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QVXYModelMapper*
///
const QMetaObject* q_vxymodelmapper_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QVXYModelMapper*
/// @param callback const QMetaObject* func(const QVXYModelMapper* self)
///
void q_vxymodelmapper_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QVXYModelMapper*
///
const QMetaObject* q_vxymodelmapper_super_meta_object(const void* self);

/// @param self QVXYModelMapper*
/// @param param1 const char*
///
void* q_vxymodelmapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVXYModelMapper*
/// @param callback void* func(QVXYModelMapper* self, const char* param1)
///
void q_vxymodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVXYModelMapper*
/// @param param1 const char*
///
void* q_vxymodelmapper_super_metacast(void* self, const char* param1);

/// @param self QVXYModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vxymodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_vxymodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVXYModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vxymodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_vxymodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#model)
///
/// @param self const QVXYModelMapper*
///
QAbstractItemModel* q_vxymodelmapper_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setModel)
///
/// @param self QVXYModelMapper*
/// @param model QAbstractItemModel*
///
void q_vxymodelmapper_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#series)
///
/// @param self const QVXYModelMapper*
///
QXYSeries* q_vxymodelmapper_series(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setSeries)
///
/// @param self QVXYModelMapper*
/// @param series QXYSeries*
///
void q_vxymodelmapper_set_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumn)
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_x_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setXColumn)
///
/// @param self QVXYModelMapper*
/// @param xColumn int
///
void q_vxymodelmapper_set_x_column(void* self, int xColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumn)
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_y_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setYColumn)
///
/// @param self QVXYModelMapper*
/// @param yColumn int
///
void q_vxymodelmapper_set_y_column(void* self, int yColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRow)
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_first_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setFirstRow)
///
/// @param self QVXYModelMapper*
/// @param firstRow int
///
void q_vxymodelmapper_set_first_row(void* self, int firstRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCount)
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_row_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setRowCount)
///
/// @param self QVXYModelMapper*
/// @param rowCount int
///
void q_vxymodelmapper_set_row_count(void* self, int rowCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_series_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_model_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_x_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_x_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_y_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_y_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_first_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_first_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_row_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_row_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_vxymodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_vxymodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVXYModelMapper*
///
const char* q_vxymodelmapper_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVXYModelMapper*
/// @param name const char*
///
void q_vxymodelmapper_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QVXYModelMapper*
///
bool q_vxymodelmapper_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QVXYModelMapper*
///
bool q_vxymodelmapper_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QVXYModelMapper*
///
bool q_vxymodelmapper_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QVXYModelMapper*
///
bool q_vxymodelmapper_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVXYModelMapper*
/// @param b bool
///
bool q_vxymodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QVXYModelMapper*
///
QThread* q_vxymodelmapper_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVXYModelMapper*
/// @param thread QThread*
///
bool q_vxymodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param interval int
///
int32_t q_vxymodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_vxymodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVXYModelMapper*
/// @param id int
///
void q_vxymodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVXYModelMapper*
/// @param id enum Qt__TimerId
///
void q_vxymodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QVXYModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_vxymodelmapper_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVXYModelMapper*
/// @param parent QObject*
///
void q_vxymodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVXYModelMapper*
/// @param filterObj QObject*
///
void q_vxymodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVXYModelMapper*
/// @param obj QObject*
///
void q_vxymodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_vxymodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_vxymodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVXYModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_vxymodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_vxymodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_vxymodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVXYModelMapper*
///
bool q_vxymodelmapper_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVXYModelMapper*
/// @param receiver QObject*
///
bool q_vxymodelmapper_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_vxymodelmapper_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QVXYModelMapper*
///
void q_vxymodelmapper_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QVXYModelMapper*
///
void q_vxymodelmapper_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVXYModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_vxymodelmapper_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QVXYModelMapper*
/// @param name const char*
///
QVariant* q_vxymodelmapper_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVXYModelMapper*
///
const char** q_vxymodelmapper_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVXYModelMapper*
///
QBindingStorage* q_vxymodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QVXYModelMapper*
///
const QBindingStorage* q_vxymodelmapper_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QVXYModelMapper*
///
QObject* q_vxymodelmapper_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QVXYModelMapper*
/// @param classname const char*
///
bool q_vxymodelmapper_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_vxymodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_vxymodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_vxymodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_vxymodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVXYModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_vxymodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVXYModelMapper*
/// @param signal const char*
///
bool q_vxymodelmapper_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVXYModelMapper*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_vxymodelmapper_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVXYModelMapper*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_vxymodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVXYModelMapper*
/// @param receiver QObject*
/// @param member const char*
///
bool q_vxymodelmapper_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
/// @param param1 QObject*
///
void q_vxymodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QObject* param1)
///
void q_vxymodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
bool q_vxymodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
bool q_vxymodelmapper_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback bool func(QVXYModelMapper* self, QEvent* event)
///
void q_vxymodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vxymodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vxymodelmapper_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback bool func(QVXYModelMapper* self, QObject* watched, QEvent* event)
///
void q_vxymodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QTimerEvent*
///
void q_vxymodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QTimerEvent*
///
void q_vxymodelmapper_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QTimerEvent* event)
///
void q_vxymodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QChildEvent*
///
void q_vxymodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QChildEvent*
///
void q_vxymodelmapper_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QChildEvent* event)
///
void q_vxymodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
void q_vxymodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
void q_vxymodelmapper_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QEvent* event)
///
void q_vxymodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QMetaMethod* signal)
///
void q_vxymodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QMetaMethod* signal)
///
void q_vxymodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_first(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_super_first(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_first(const void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param first int
///
void q_vxymodelmapper_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param first int
///
void q_vxymodelmapper_super_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int first)
///
void q_vxymodelmapper_on_set_first(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_count(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_super_count(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_count(const void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param count int
///
void q_vxymodelmapper_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param count int
///
void q_vxymodelmapper_super_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int count)
///
void q_vxymodelmapper_on_set_count(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_vxymodelmapper_orientation(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_vxymodelmapper_super_orientation(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_orientation(const void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_vxymodelmapper_set_orientation(void* self, int32_t orientation);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_vxymodelmapper_super_set_orientation(void* self, int32_t orientation);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, enum Qt__Orientation orientation)
///
void q_vxymodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_x_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_super_x_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_x_section(const void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param xSection int
///
void q_vxymodelmapper_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param xSection int
///
void q_vxymodelmapper_super_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int xSection)
///
void q_vxymodelmapper_on_set_x_section(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_y_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_super_y_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_y_section(const void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param ySection int
///
void q_vxymodelmapper_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param ySection int
///
void q_vxymodelmapper_super_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int ySection)
///
void q_vxymodelmapper_on_set_y_section(void* self, void (*callback)(void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
///
QObject* q_vxymodelmapper_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
///
QObject* q_vxymodelmapper_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback QObject* func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
///
int32_t q_vxymodelmapper_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param signal const char*
///
int32_t q_vxymodelmapper_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param signal const char*
///
int32_t q_vxymodelmapper_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self, const char* signal)
///
void q_vxymodelmapper_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param signal QMetaMethod*
///
bool q_vxymodelmapper_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param signal QMetaMethod*
///
bool q_vxymodelmapper_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QVXYModelMapper*
/// @param callback bool func(QVXYModelMapper* self, QMetaMethod* signal)
///
void q_vxymodelmapper_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, const char* objectName)
///
void q_vxymodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#dtor.QVXYModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_delete(void* self);

#endif
