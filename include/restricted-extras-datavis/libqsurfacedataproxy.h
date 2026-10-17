#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html)

/// q_surfacedataproxy_new constructs a new QSurfaceDataProxy object.
///
QSurfaceDataProxy* q_surfacedataproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html)

/// q_surfacedataproxy_new2 constructs a new QSurfaceDataProxy object.
///
/// @param parent QObject*
///
QSurfaceDataProxy* q_surfacedataproxy_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QSurfaceDataProxy*
///
const QMetaObject* q_surfacedataproxy_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSurfaceDataProxy*
/// @param callback const QMetaObject* func(const QSurfaceDataProxy* self)
///
void q_surfacedataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSurfaceDataProxy*
///
const QMetaObject* q_surfacedataproxy_super_meta_object(const void* self);

/// @param self QSurfaceDataProxy*
/// @param param1 const char*
///
void* q_surfacedataproxy_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSurfaceDataProxy*
/// @param callback void* func(QSurfaceDataProxy* self, const char* param1)
///
void q_surfacedataproxy_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSurfaceDataProxy*
/// @param param1 const char*
///
void* q_surfacedataproxy_super_metacast(void* self, const char* param1);

/// @param self QSurfaceDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_surfacedataproxy_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSurfaceDataProxy*
/// @param callback int32_t func(QSurfaceDataProxy* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_surfacedataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSurfaceDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_surfacedataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_surfacedataproxy_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#series)
///
/// @param self const QSurfaceDataProxy*
///
QSurface3DSeries* q_surfacedataproxy_series(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowCount)
///
/// @param self const QSurfaceDataProxy*
///
int32_t q_surfacedataproxy_row_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#columnCount)
///
/// @param self const QSurfaceDataProxy*
///
int32_t q_surfacedataproxy_column_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#array)
///
/// @param self const QSurfaceDataProxy*
///
/// @return libqt_list of libqt_list of QSurfaceDataItem*
///
libqt_list q_surfacedataproxy_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#itemAt)
///
/// @param self const QSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
const QSurfaceDataItem* q_surfacedataproxy_item_at(const void* self, int rowIndex, int columnIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#itemAt)
///
/// @param self const QSurfaceDataProxy*
/// @param position QPoint*
///
const QSurfaceDataItem* q_surfacedataproxy_item_at2(const void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#resetArray)
///
/// @param self QSurfaceDataProxy*
/// @param newArray libqt_list of libqt_list of QSurfaceDataItem*
///
void q_surfacedataproxy_reset_array(void* self, libqt_list newArray);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#setRow)
///
/// @param self QSurfaceDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QSurfaceDataItem*
///
void q_surfacedataproxy_set_row(void* self, int rowIndex, libqt_list row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#setRows)
///
/// @param self QSurfaceDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
void q_surfacedataproxy_set_rows(void* self, int rowIndex, libqt_list rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#setItem)
///
/// @param self QSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
/// @param item QSurfaceDataItem*
///
void q_surfacedataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#setItem)
///
/// @param self QSurfaceDataProxy*
/// @param position QPoint*
/// @param item QSurfaceDataItem*
///
void q_surfacedataproxy_set_item2(void* self, const void* position, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#addRow)
///
/// @param self QSurfaceDataProxy*
/// @param row libqt_list of QSurfaceDataItem*
///
int32_t q_surfacedataproxy_add_row(void* self, libqt_list row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#addRows)
///
/// @param self QSurfaceDataProxy*
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
int32_t q_surfacedataproxy_add_rows(void* self, libqt_list rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#insertRow)
///
/// @param self QSurfaceDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QSurfaceDataItem*
///
void q_surfacedataproxy_insert_row(void* self, int rowIndex, libqt_list row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#insertRows)
///
/// @param self QSurfaceDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
void q_surfacedataproxy_insert_rows(void* self, int rowIndex, libqt_list rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#removeRows)
///
/// @param self QSurfaceDataProxy*
/// @param rowIndex int
/// @param removeCount int
///
void q_surfacedataproxy_remove_rows(void* self, int rowIndex, int removeCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#arrayReset)
///
/// @param self QSurfaceDataProxy*
///
void q_surfacedataproxy_array_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#arrayReset)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self)
///
void q_surfacedataproxy_on_array_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsAdded)
///
/// @param self QSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_surfacedataproxy_rows_added(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsAdded)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, int startIndex, int count)
///
void q_surfacedataproxy_on_rows_added(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsChanged)
///
/// @param self QSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_surfacedataproxy_rows_changed(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsChanged)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, int startIndex, int count)
///
void q_surfacedataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsRemoved)
///
/// @param self QSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_surfacedataproxy_rows_removed(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsRemoved)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, int startIndex, int count)
///
void q_surfacedataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsInserted)
///
/// @param self QSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_surfacedataproxy_rows_inserted(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowsInserted)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, int startIndex, int count)
///
void q_surfacedataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#itemChanged)
///
/// @param self QSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
void q_surfacedataproxy_item_changed(void* self, int rowIndex, int columnIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#itemChanged)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, int rowIndex, int columnIndex)
///
void q_surfacedataproxy_on_item_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowCountChanged)
///
/// @param self QSurfaceDataProxy*
/// @param count int
///
void q_surfacedataproxy_row_count_changed(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#rowCountChanged)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, int count)
///
void q_surfacedataproxy_on_row_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#columnCountChanged)
///
/// @param self QSurfaceDataProxy*
/// @param count int
///
void q_surfacedataproxy_column_count_changed(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#columnCountChanged)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, int count)
///
void q_surfacedataproxy_on_column_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#seriesChanged)
///
/// @param self QSurfaceDataProxy*
/// @param series QSurface3DSeries*
///
void q_surfacedataproxy_series_changed(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#seriesChanged)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, QSurface3DSeries* series)
///
void q_surfacedataproxy_on_series_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_surfacedataproxy_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_surfacedataproxy_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
///
/// @param self const QSurfaceDataProxy*
///
/// @return enum QAbstractDataProxy__DataType
///
int32_t q_surfacedataproxy_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSurfaceDataProxy*
///
const char* q_surfacedataproxy_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSurfaceDataProxy*
/// @param name const char*
///
void q_surfacedataproxy_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QSurfaceDataProxy*
///
bool q_surfacedataproxy_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSurfaceDataProxy*
///
bool q_surfacedataproxy_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSurfaceDataProxy*
///
bool q_surfacedataproxy_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSurfaceDataProxy*
///
bool q_surfacedataproxy_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSurfaceDataProxy*
/// @param b bool
///
bool q_surfacedataproxy_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QSurfaceDataProxy*
///
QThread* q_surfacedataproxy_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSurfaceDataProxy*
/// @param thread QThread*
///
bool q_surfacedataproxy_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSurfaceDataProxy*
/// @param interval int
///
int32_t q_surfacedataproxy_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSurfaceDataProxy*
/// @param time int64_t of nanoseconds
///
int32_t q_surfacedataproxy_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSurfaceDataProxy*
/// @param id int
///
void q_surfacedataproxy_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSurfaceDataProxy*
/// @param id enum Qt__TimerId
///
void q_surfacedataproxy_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QSurfaceDataProxy*
///
/// @return libqt_list of QObject*
///
libqt_list q_surfacedataproxy_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSurfaceDataProxy*
/// @param parent QObject*
///
void q_surfacedataproxy_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSurfaceDataProxy*
/// @param filterObj QObject*
///
void q_surfacedataproxy_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSurfaceDataProxy*
/// @param obj QObject*
///
void q_surfacedataproxy_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_surfacedataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_surfacedataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSurfaceDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_surfacedataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_surfacedataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_surfacedataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSurfaceDataProxy*
///
bool q_surfacedataproxy_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSurfaceDataProxy*
/// @param receiver QObject*
///
bool q_surfacedataproxy_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_surfacedataproxy_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSurfaceDataProxy*
///
void q_surfacedataproxy_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSurfaceDataProxy*
///
void q_surfacedataproxy_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSurfaceDataProxy*
/// @param name const char*
/// @param value QVariant*
///
bool q_surfacedataproxy_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSurfaceDataProxy*
/// @param name const char*
///
QVariant* q_surfacedataproxy_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSurfaceDataProxy*
///
const char** q_surfacedataproxy_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSurfaceDataProxy*
///
QBindingStorage* q_surfacedataproxy_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QSurfaceDataProxy*
///
const QBindingStorage* q_surfacedataproxy_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSurfaceDataProxy*
///
void q_surfacedataproxy_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self)
///
void q_surfacedataproxy_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QSurfaceDataProxy*
///
QObject* q_surfacedataproxy_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QSurfaceDataProxy*
/// @param classname const char*
///
bool q_surfacedataproxy_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSurfaceDataProxy*
///
void q_surfacedataproxy_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSurfaceDataProxy*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_surfacedataproxy_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSurfaceDataProxy*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_surfacedataproxy_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_surfacedataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_surfacedataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSurfaceDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_surfacedataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSurfaceDataProxy*
/// @param signal const char*
///
bool q_surfacedataproxy_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSurfaceDataProxy*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_surfacedataproxy_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSurfaceDataProxy*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_surfacedataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSurfaceDataProxy*
/// @param receiver QObject*
/// @param member const char*
///
bool q_surfacedataproxy_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSurfaceDataProxy*
/// @param param1 QObject*
///
void q_surfacedataproxy_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, QObject* param1)
///
void q_surfacedataproxy_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QEvent*
///
bool q_surfacedataproxy_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QEvent*
///
bool q_surfacedataproxy_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback bool func(QSurfaceDataProxy* self, QEvent* event)
///
void q_surfacedataproxy_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_surfacedataproxy_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_surfacedataproxy_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback bool func(QSurfaceDataProxy* self, QObject* watched, QEvent* event)
///
void q_surfacedataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QTimerEvent*
///
void q_surfacedataproxy_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QTimerEvent*
///
void q_surfacedataproxy_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, QTimerEvent* event)
///
void q_surfacedataproxy_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QChildEvent*
///
void q_surfacedataproxy_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QChildEvent*
///
void q_surfacedataproxy_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, QChildEvent* event)
///
void q_surfacedataproxy_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QEvent*
///
void q_surfacedataproxy_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param event QEvent*
///
void q_surfacedataproxy_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, QEvent* event)
///
void q_surfacedataproxy_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_surfacedataproxy_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_surfacedataproxy_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_surfacedataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_surfacedataproxy_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_surfacedataproxy_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_surfacedataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSurfaceDataProxy*
///
QObject* q_surfacedataproxy_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSurfaceDataProxy*
///
QObject* q_surfacedataproxy_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback QObject* func(QSurfaceDataProxy* self)
///
void q_surfacedataproxy_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSurfaceDataProxy*
///
int32_t q_surfacedataproxy_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSurfaceDataProxy*
///
int32_t q_surfacedataproxy_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback int32_t func(QSurfaceDataProxy* self)
///
void q_surfacedataproxy_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSurfaceDataProxy*
/// @param signal const char*
///
int32_t q_surfacedataproxy_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSurfaceDataProxy*
/// @param signal const char*
///
int32_t q_surfacedataproxy_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback int32_t func(QSurfaceDataProxy* self, const char* signal)
///
void q_surfacedataproxy_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSurfaceDataProxy*
/// @param signal QMetaMethod*
///
bool q_surfacedataproxy_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSurfaceDataProxy*
/// @param signal QMetaMethod*
///
bool q_surfacedataproxy_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSurfaceDataProxy*
/// @param callback bool func(QSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_surfacedataproxy_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSurfaceDataProxy*
/// @param callback void func(QSurfaceDataProxy* self, const char* objectName)
///
void q_surfacedataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy-qtdatavis.html#dtor.QSurfaceDataProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QSurfaceDataProxy*
///
void q_surfacedataproxy_delete(void* self);

#endif
