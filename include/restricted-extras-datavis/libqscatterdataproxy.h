#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html)

/// q_scatterdataproxy_new constructs a new QScatterDataProxy object.
///
QScatterDataProxy* q_scatterdataproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html)

/// q_scatterdataproxy_new2 constructs a new QScatterDataProxy object.
///
/// @param parent QObject*
///
QScatterDataProxy* q_scatterdataproxy_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QScatterDataProxy*
///
const QMetaObject* q_scatterdataproxy_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QScatterDataProxy*
/// @param callback const QMetaObject* func(const QScatterDataProxy* self)
///
void q_scatterdataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QScatterDataProxy*
///
const QMetaObject* q_scatterdataproxy_super_meta_object(const void* self);

/// @param self QScatterDataProxy*
/// @param param1 const char*
///
void* q_scatterdataproxy_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QScatterDataProxy*
/// @param callback void* func(QScatterDataProxy* self, const char* param1)
///
void q_scatterdataproxy_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QScatterDataProxy*
/// @param param1 const char*
///
void* q_scatterdataproxy_super_metacast(void* self, const char* param1);

/// @param self QScatterDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scatterdataproxy_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QScatterDataProxy*
/// @param callback int32_t func(QScatterDataProxy* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scatterdataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QScatterDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scatterdataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scatterdataproxy_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#series)
///
/// @param self const QScatterDataProxy*
///
QScatter3DSeries* q_scatterdataproxy_series(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemCount)
///
/// @param self const QScatterDataProxy*
///
int32_t q_scatterdataproxy_item_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#array)
///
/// @param self const QScatterDataProxy*
///
/// @return libqt_list of QScatterDataItem*
///
libqt_list q_scatterdataproxy_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemAt)
///
/// @param self const QScatterDataProxy*
/// @param index int
///
const QScatterDataItem* q_scatterdataproxy_item_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#resetArray)
///
/// @param self QScatterDataProxy*
/// @param newArray libqt_list of QScatterDataItem*
///
void q_scatterdataproxy_reset_array(void* self, libqt_list newArray);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#setItem)
///
/// @param self QScatterDataProxy*
/// @param index int
/// @param item QScatterDataItem*
///
void q_scatterdataproxy_set_item(void* self, int index, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#setItems)
///
/// @param self QScatterDataProxy*
/// @param index int
/// @param items libqt_list of QScatterDataItem*
///
void q_scatterdataproxy_set_items(void* self, int index, libqt_list items);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#addItem)
///
/// @param self QScatterDataProxy*
/// @param item QScatterDataItem*
///
int32_t q_scatterdataproxy_add_item(void* self, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#addItems)
///
/// @param self QScatterDataProxy*
/// @param items libqt_list of QScatterDataItem*
///
int32_t q_scatterdataproxy_add_items(void* self, libqt_list items);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#insertItem)
///
/// @param self QScatterDataProxy*
/// @param index int
/// @param item QScatterDataItem*
///
void q_scatterdataproxy_insert_item(void* self, int index, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#insertItems)
///
/// @param self QScatterDataProxy*
/// @param index int
/// @param items libqt_list of QScatterDataItem*
///
void q_scatterdataproxy_insert_items(void* self, int index, libqt_list items);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#removeItems)
///
/// @param self QScatterDataProxy*
/// @param index int
/// @param removeCount int
///
void q_scatterdataproxy_remove_items(void* self, int index, int removeCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#arrayReset)
///
/// @param self QScatterDataProxy*
///
void q_scatterdataproxy_array_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#arrayReset)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self)
///
void q_scatterdataproxy_on_array_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsAdded)
///
/// @param self QScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_scatterdataproxy_items_added(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsAdded)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, int startIndex, int count)
///
void q_scatterdataproxy_on_items_added(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsChanged)
///
/// @param self QScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_scatterdataproxy_items_changed(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsChanged)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, int startIndex, int count)
///
void q_scatterdataproxy_on_items_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsRemoved)
///
/// @param self QScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_scatterdataproxy_items_removed(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsRemoved)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, int startIndex, int count)
///
void q_scatterdataproxy_on_items_removed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsInserted)
///
/// @param self QScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_scatterdataproxy_items_inserted(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemsInserted)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, int startIndex, int count)
///
void q_scatterdataproxy_on_items_inserted(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemCountChanged)
///
/// @param self QScatterDataProxy*
/// @param count int
///
void q_scatterdataproxy_item_count_changed(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#itemCountChanged)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, int count)
///
void q_scatterdataproxy_on_item_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#seriesChanged)
///
/// @param self QScatterDataProxy*
/// @param series QScatter3DSeries*
///
void q_scatterdataproxy_series_changed(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#seriesChanged)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, QScatter3DSeries* series)
///
void q_scatterdataproxy_on_series_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scatterdataproxy_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scatterdataproxy_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
///
/// @param self const QScatterDataProxy*
///
/// @return enum QAbstractDataProxy__DataType
///
int32_t q_scatterdataproxy_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScatterDataProxy*
///
const char* q_scatterdataproxy_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QScatterDataProxy*
/// @param name const char*
///
void q_scatterdataproxy_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QScatterDataProxy*
///
bool q_scatterdataproxy_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QScatterDataProxy*
///
bool q_scatterdataproxy_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QScatterDataProxy*
///
bool q_scatterdataproxy_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QScatterDataProxy*
///
bool q_scatterdataproxy_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QScatterDataProxy*
/// @param b bool
///
bool q_scatterdataproxy_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QScatterDataProxy*
///
QThread* q_scatterdataproxy_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QScatterDataProxy*
/// @param thread QThread*
///
bool q_scatterdataproxy_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatterDataProxy*
/// @param interval int
///
int32_t q_scatterdataproxy_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatterDataProxy*
/// @param time int64_t of nanoseconds
///
int32_t q_scatterdataproxy_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScatterDataProxy*
/// @param id int
///
void q_scatterdataproxy_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScatterDataProxy*
/// @param id enum Qt__TimerId
///
void q_scatterdataproxy_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QScatterDataProxy*
///
/// @return libqt_list of QObject*
///
libqt_list q_scatterdataproxy_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QScatterDataProxy*
/// @param parent QObject*
///
void q_scatterdataproxy_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QScatterDataProxy*
/// @param filterObj QObject*
///
void q_scatterdataproxy_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QScatterDataProxy*
/// @param obj QObject*
///
void q_scatterdataproxy_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scatterdataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scatterdataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QScatterDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scatterdataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scatterdataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scatterdataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatterDataProxy*
///
bool q_scatterdataproxy_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatterDataProxy*
/// @param receiver QObject*
///
bool q_scatterdataproxy_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scatterdataproxy_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QScatterDataProxy*
///
void q_scatterdataproxy_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QScatterDataProxy*
///
void q_scatterdataproxy_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QScatterDataProxy*
/// @param name const char*
/// @param value QVariant*
///
bool q_scatterdataproxy_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QScatterDataProxy*
/// @param name const char*
///
QVariant* q_scatterdataproxy_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QScatterDataProxy*
///
const char** q_scatterdataproxy_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScatterDataProxy*
///
QBindingStorage* q_scatterdataproxy_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QScatterDataProxy*
///
const QBindingStorage* q_scatterdataproxy_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterDataProxy*
///
void q_scatterdataproxy_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self)
///
void q_scatterdataproxy_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QScatterDataProxy*
///
QObject* q_scatterdataproxy_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QScatterDataProxy*
/// @param classname const char*
///
bool q_scatterdataproxy_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QScatterDataProxy*
///
void q_scatterdataproxy_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatterDataProxy*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scatterdataproxy_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatterDataProxy*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scatterdataproxy_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scatterdataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scatterdataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QScatterDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scatterdataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatterDataProxy*
/// @param signal const char*
///
bool q_scatterdataproxy_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatterDataProxy*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scatterdataproxy_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatterDataProxy*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scatterdataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatterDataProxy*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scatterdataproxy_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterDataProxy*
/// @param param1 QObject*
///
void q_scatterdataproxy_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, QObject* param1)
///
void q_scatterdataproxy_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QEvent*
///
bool q_scatterdataproxy_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QEvent*
///
bool q_scatterdataproxy_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback bool func(QScatterDataProxy* self, QEvent* event)
///
void q_scatterdataproxy_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scatterdataproxy_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scatterdataproxy_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback bool func(QScatterDataProxy* self, QObject* watched, QEvent* event)
///
void q_scatterdataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QTimerEvent*
///
void q_scatterdataproxy_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QTimerEvent*
///
void q_scatterdataproxy_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, QTimerEvent* event)
///
void q_scatterdataproxy_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QChildEvent*
///
void q_scatterdataproxy_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QChildEvent*
///
void q_scatterdataproxy_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, QChildEvent* event)
///
void q_scatterdataproxy_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QEvent*
///
void q_scatterdataproxy_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param event QEvent*
///
void q_scatterdataproxy_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, QEvent* event)
///
void q_scatterdataproxy_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_scatterdataproxy_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_scatterdataproxy_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, QMetaMethod* signal)
///
void q_scatterdataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_scatterdataproxy_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_scatterdataproxy_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, QMetaMethod* signal)
///
void q_scatterdataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatterDataProxy*
///
QObject* q_scatterdataproxy_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatterDataProxy*
///
QObject* q_scatterdataproxy_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback QObject* func(QScatterDataProxy* self)
///
void q_scatterdataproxy_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatterDataProxy*
///
int32_t q_scatterdataproxy_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatterDataProxy*
///
int32_t q_scatterdataproxy_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback int32_t func(QScatterDataProxy* self)
///
void q_scatterdataproxy_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatterDataProxy*
/// @param signal const char*
///
int32_t q_scatterdataproxy_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatterDataProxy*
/// @param signal const char*
///
int32_t q_scatterdataproxy_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback int32_t func(QScatterDataProxy* self, const char* signal)
///
void q_scatterdataproxy_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatterDataProxy*
/// @param signal QMetaMethod*
///
bool q_scatterdataproxy_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatterDataProxy*
/// @param signal QMetaMethod*
///
bool q_scatterdataproxy_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterDataProxy*
/// @param callback bool func(QScatterDataProxy* self, QMetaMethod* signal)
///
void q_scatterdataproxy_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QScatterDataProxy*
/// @param callback void func(QScatterDataProxy* self, const char* objectName)
///
void q_scatterdataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy-qtdatavis.html#dtor.QScatterDataProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QScatterDataProxy*
///
void q_scatterdataproxy_delete(void* self);

#endif
