#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHXYMODELMAPPER_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQHXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html)

/// q_hxymodelmapper_new constructs a new QHXYModelMapper object.
///
QHXYModelMapper* q_hxymodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html)

/// q_hxymodelmapper_new2 constructs a new QHXYModelMapper object.
///
/// @param parent QObject*
///
QHXYModelMapper* q_hxymodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QHXYModelMapper*
///
const QMetaObject* q_hxymodelmapper_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHXYModelMapper*
/// @param callback const QMetaObject* func(const QHXYModelMapper* self)
///
void q_hxymodelmapper_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QHXYModelMapper*
///
const QMetaObject* q_hxymodelmapper_super_meta_object(const void* self);

/// @param self QHXYModelMapper*
/// @param param1 const char*
///
void* q_hxymodelmapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHXYModelMapper*
/// @param callback void* func(QHXYModelMapper* self, const char* param1)
///
void q_hxymodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHXYModelMapper*
/// @param param1 const char*
///
void* q_hxymodelmapper_super_metacast(void* self, const char* param1);

/// @param self QHXYModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hxymodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_hxymodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHXYModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hxymodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_hxymodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#model)
///
/// @param self const QHXYModelMapper*
///
QAbstractItemModel* q_hxymodelmapper_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setModel)
///
/// @param self QHXYModelMapper*
/// @param model QAbstractItemModel*
///
void q_hxymodelmapper_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#series)
///
/// @param self const QHXYModelMapper*
///
QXYSeries* q_hxymodelmapper_series(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setSeries)
///
/// @param self QHXYModelMapper*
/// @param series QXYSeries*
///
void q_hxymodelmapper_set_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRow)
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_x_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setXRow)
///
/// @param self QHXYModelMapper*
/// @param xRow int
///
void q_hxymodelmapper_set_x_row(void* self, int xRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRow)
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_y_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setYRow)
///
/// @param self QHXYModelMapper*
/// @param yRow int
///
void q_hxymodelmapper_set_y_row(void* self, int yRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumn)
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_first_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setFirstColumn)
///
/// @param self QHXYModelMapper*
/// @param firstColumn int
///
void q_hxymodelmapper_set_first_column(void* self, int firstColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCount)
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_column_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setColumnCount)
///
/// @param self QHXYModelMapper*
/// @param columnCount int
///
void q_hxymodelmapper_set_column_count(void* self, int columnCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_series_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_model_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_x_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_x_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_y_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_y_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_first_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_first_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_column_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_column_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_hxymodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_hxymodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QHXYModelMapper*
///
const char* q_hxymodelmapper_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHXYModelMapper*
/// @param name const char*
///
void q_hxymodelmapper_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QHXYModelMapper*
///
bool q_hxymodelmapper_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QHXYModelMapper*
///
bool q_hxymodelmapper_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QHXYModelMapper*
///
bool q_hxymodelmapper_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QHXYModelMapper*
///
bool q_hxymodelmapper_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHXYModelMapper*
/// @param b bool
///
bool q_hxymodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QHXYModelMapper*
///
QThread* q_hxymodelmapper_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHXYModelMapper*
/// @param thread QThread*
///
bool q_hxymodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHXYModelMapper*
/// @param interval int
///
int32_t q_hxymodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHXYModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_hxymodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHXYModelMapper*
/// @param id int
///
void q_hxymodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHXYModelMapper*
/// @param id enum Qt__TimerId
///
void q_hxymodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QHXYModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_hxymodelmapper_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHXYModelMapper*
/// @param parent QObject*
///
void q_hxymodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHXYModelMapper*
/// @param filterObj QObject*
///
void q_hxymodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHXYModelMapper*
/// @param obj QObject*
///
void q_hxymodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_hxymodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_hxymodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QHXYModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_hxymodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_hxymodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_hxymodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHXYModelMapper*
///
bool q_hxymodelmapper_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHXYModelMapper*
/// @param receiver QObject*
///
bool q_hxymodelmapper_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_hxymodelmapper_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QHXYModelMapper*
///
void q_hxymodelmapper_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QHXYModelMapper*
///
void q_hxymodelmapper_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHXYModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_hxymodelmapper_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QHXYModelMapper*
/// @param name const char*
///
QVariant* q_hxymodelmapper_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QHXYModelMapper*
///
const char** q_hxymodelmapper_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHXYModelMapper*
///
QBindingStorage* q_hxymodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QHXYModelMapper*
///
const QBindingStorage* q_hxymodelmapper_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QHXYModelMapper*
///
QObject* q_hxymodelmapper_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QHXYModelMapper*
/// @param classname const char*
///
bool q_hxymodelmapper_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHXYModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_hxymodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHXYModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_hxymodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_hxymodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_hxymodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QHXYModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_hxymodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHXYModelMapper*
/// @param signal const char*
///
bool q_hxymodelmapper_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHXYModelMapper*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_hxymodelmapper_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHXYModelMapper*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_hxymodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHXYModelMapper*
/// @param receiver QObject*
/// @param member const char*
///
bool q_hxymodelmapper_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHXYModelMapper*
/// @param param1 QObject*
///
void q_hxymodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, QObject* param1)
///
void q_hxymodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QEvent*
///
bool q_hxymodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QEvent*
///
bool q_hxymodelmapper_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback bool func(QHXYModelMapper* self, QEvent* event)
///
void q_hxymodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hxymodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hxymodelmapper_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback bool func(QHXYModelMapper* self, QObject* watched, QEvent* event)
///
void q_hxymodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QTimerEvent*
///
void q_hxymodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QTimerEvent*
///
void q_hxymodelmapper_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, QTimerEvent* event)
///
void q_hxymodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QChildEvent*
///
void q_hxymodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QChildEvent*
///
void q_hxymodelmapper_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, QChildEvent* event)
///
void q_hxymodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QEvent*
///
void q_hxymodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param event QEvent*
///
void q_hxymodelmapper_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, QEvent* event)
///
void q_hxymodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param signal QMetaMethod*
///
void q_hxymodelmapper_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param signal QMetaMethod*
///
void q_hxymodelmapper_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, QMetaMethod* signal)
///
void q_hxymodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param signal QMetaMethod*
///
void q_hxymodelmapper_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param signal QMetaMethod*
///
void q_hxymodelmapper_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, QMetaMethod* signal)
///
void q_hxymodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_first(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_super_first(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_first(void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param first int
///
void q_hxymodelmapper_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param first int
///
void q_hxymodelmapper_super_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, int first)
///
void q_hxymodelmapper_on_set_first(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_count(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_super_count(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_count(void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param count int
///
void q_hxymodelmapper_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param count int
///
void q_hxymodelmapper_super_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, int count)
///
void q_hxymodelmapper_on_set_count(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hxymodelmapper_orientation(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hxymodelmapper_super_orientation(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_orientation(void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_hxymodelmapper_set_orientation(void* self, int32_t orientation);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_hxymodelmapper_super_set_orientation(void* self, int32_t orientation);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, enum Qt__Orientation orientation)
///
void q_hxymodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_x_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_super_x_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_x_section(void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param xSection int
///
void q_hxymodelmapper_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param xSection int
///
void q_hxymodelmapper_super_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, int xSection)
///
void q_hxymodelmapper_on_set_x_section(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_y_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_super_y_section(const void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_y_section(void* self, int32_t (*callback)(const void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param ySection int
///
void q_hxymodelmapper_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param ySection int
///
void q_hxymodelmapper_super_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, int ySection)
///
void q_hxymodelmapper_on_set_y_section(void* self, void (*callback)(void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
///
QObject* q_hxymodelmapper_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
///
QObject* q_hxymodelmapper_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback QObject* func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
///
int32_t q_hxymodelmapper_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self)
///
void q_hxymodelmapper_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
/// @param signal const char*
///
int32_t q_hxymodelmapper_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
/// @param signal const char*
///
int32_t q_hxymodelmapper_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback int32_t func(QHXYModelMapper* self, const char* signal)
///
void q_hxymodelmapper_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHXYModelMapper*
/// @param signal QMetaMethod*
///
bool q_hxymodelmapper_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHXYModelMapper*
/// @param signal QMetaMethod*
///
bool q_hxymodelmapper_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHXYModelMapper*
/// @param callback bool func(QHXYModelMapper* self, QMetaMethod* signal)
///
void q_hxymodelmapper_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHXYModelMapper*
/// @param callback void func(QHXYModelMapper* self, const char* objectName)
///
void q_hxymodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#dtor.QHXYModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QHXYModelMapper*
///
void q_hxymodelmapper_delete(void* self);

#endif
