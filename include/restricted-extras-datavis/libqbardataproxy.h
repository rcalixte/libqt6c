#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html)

/// q_bardataproxy_new constructs a new QBarDataProxy object.
///
QBarDataProxy* q_bardataproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html)

/// q_bardataproxy_new2 constructs a new QBarDataProxy object.
///
/// @param parent QObject*
///
QBarDataProxy* q_bardataproxy_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QBarDataProxy*
///
const QMetaObject* q_bardataproxy_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBarDataProxy*
/// @param callback const QMetaObject* func(const QBarDataProxy* self)
///
void q_bardataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QBarDataProxy*
///
const QMetaObject* q_bardataproxy_super_meta_object(const void* self);

/// @param self QBarDataProxy*
/// @param param1 const char*
///
void* q_bardataproxy_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBarDataProxy*
/// @param callback void* func(QBarDataProxy* self, const char* param1)
///
void q_bardataproxy_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBarDataProxy*
/// @param param1 const char*
///
void* q_bardataproxy_super_metacast(void* self, const char* param1);

/// @param self QBarDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bardataproxy_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBarDataProxy*
/// @param callback int32_t func(QBarDataProxy* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_bardataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBarDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bardataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_bardataproxy_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#series)
///
/// @param self const QBarDataProxy*
///
QBar3DSeries* q_bardataproxy_series(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowCount)
///
/// @param self const QBarDataProxy*
///
int32_t q_bardataproxy_row_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowLabels)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBarDataProxy*
///
const char** q_bardataproxy_row_labels(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRowLabels)
///
/// @param self QBarDataProxy*
/// @param labels const char**
///
void q_bardataproxy_set_row_labels(void* self, const char* labels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#columnLabels)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBarDataProxy*
///
const char** q_bardataproxy_column_labels(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setColumnLabels)
///
/// @param self QBarDataProxy*
/// @param labels const char**
///
void q_bardataproxy_set_column_labels(void* self, const char* labels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#array)
///
/// @param self const QBarDataProxy*
///
/// @return libqt_list of libqt_list of QBarDataItem*
///
libqt_list q_bardataproxy_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowAt)
///
/// @param self const QBarDataProxy*
/// @param rowIndex int
///
/// @return libqt_list of QBarDataItem*
///
libqt_list q_bardataproxy_row_at(const void* self, int rowIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemAt)
///
/// @param self const QBarDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
const QBarDataItem* q_bardataproxy_item_at(const void* self, int rowIndex, int columnIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemAt)
///
/// @param self const QBarDataProxy*
/// @param position QPoint*
///
const QBarDataItem* q_bardataproxy_item_at2(const void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#resetArray)
///
/// @param self QBarDataProxy*
///
void q_bardataproxy_reset_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#resetArray)
///
/// @param self QBarDataProxy*
/// @param newArray libqt_list of libqt_list of QBarDataItem*
///
void q_bardataproxy_reset_array2(void* self, libqt_list newArray);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#resetArray)
///
/// @param self QBarDataProxy*
/// @param newArray libqt_list of libqt_list of QBarDataItem*
/// @param rowLabels const char**
/// @param columnLabels const char**
///
void q_bardataproxy_reset_array3(void* self, libqt_list newArray, const char* rowLabels[static 1], const char* columnLabels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRow)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
///
void q_bardataproxy_set_row(void* self, int rowIndex, libqt_list row);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRow)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
/// @param label const char*
///
void q_bardataproxy_set_row2(void* self, int rowIndex, libqt_list row, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRows)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
///
void q_bardataproxy_set_rows(void* self, int rowIndex, libqt_list rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setRows)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
/// @param labels const char**
///
void q_bardataproxy_set_rows2(void* self, int rowIndex, libqt_list rows, const char* labels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setItem)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param columnIndex int
/// @param item QBarDataItem*
///
void q_bardataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#setItem)
///
/// @param self QBarDataProxy*
/// @param position QPoint*
/// @param item QBarDataItem*
///
void q_bardataproxy_set_item2(void* self, const void* position, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRow)
///
/// @param self QBarDataProxy*
/// @param row libqt_list of QBarDataItem*
///
int32_t q_bardataproxy_add_row(void* self, libqt_list row);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRow)
///
/// @param self QBarDataProxy*
/// @param row libqt_list of QBarDataItem*
/// @param label const char*
///
int32_t q_bardataproxy_add_row2(void* self, libqt_list row, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRows)
///
/// @param self QBarDataProxy*
/// @param rows libqt_list of libqt_list of QBarDataItem*
///
int32_t q_bardataproxy_add_rows(void* self, libqt_list rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#addRows)
///
/// @param self QBarDataProxy*
/// @param rows libqt_list of libqt_list of QBarDataItem*
/// @param labels const char**
///
int32_t q_bardataproxy_add_rows2(void* self, libqt_list rows, const char* labels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRow)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
///
void q_bardataproxy_insert_row(void* self, int rowIndex, libqt_list row);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRow)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
/// @param label const char*
///
void q_bardataproxy_insert_row2(void* self, int rowIndex, libqt_list row, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRows)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
///
void q_bardataproxy_insert_rows(void* self, int rowIndex, libqt_list rows);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#insertRows)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
/// @param labels const char**
///
void q_bardataproxy_insert_rows2(void* self, int rowIndex, libqt_list rows, const char* labels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#removeRows)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param removeCount int
///
void q_bardataproxy_remove_rows(void* self, int rowIndex, int removeCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#arrayReset)
///
/// @param self QBarDataProxy*
///
void q_bardataproxy_array_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#arrayReset)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self)
///
void q_bardataproxy_on_array_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsAdded)
///
/// @param self QBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_bardataproxy_rows_added(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsAdded)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, int startIndex, int count)
///
void q_bardataproxy_on_rows_added(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsChanged)
///
/// @param self QBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_bardataproxy_rows_changed(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsChanged)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, int startIndex, int count)
///
void q_bardataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsRemoved)
///
/// @param self QBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_bardataproxy_rows_removed(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsRemoved)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, int startIndex, int count)
///
void q_bardataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsInserted)
///
/// @param self QBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_bardataproxy_rows_inserted(void* self, int startIndex, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowsInserted)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, int startIndex, int count)
///
void q_bardataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemChanged)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
void q_bardataproxy_item_changed(void* self, int rowIndex, int columnIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#itemChanged)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, int rowIndex, int columnIndex)
///
void q_bardataproxy_on_item_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowCountChanged)
///
/// @param self QBarDataProxy*
/// @param count int
///
void q_bardataproxy_row_count_changed(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowCountChanged)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, int count)
///
void q_bardataproxy_on_row_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowLabelsChanged)
///
/// @param self QBarDataProxy*
///
void q_bardataproxy_row_labels_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#rowLabelsChanged)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self)
///
void q_bardataproxy_on_row_labels_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#columnLabelsChanged)
///
/// @param self QBarDataProxy*
///
void q_bardataproxy_column_labels_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#columnLabelsChanged)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self)
///
void q_bardataproxy_on_column_labels_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#seriesChanged)
///
/// @param self QBarDataProxy*
/// @param series QBar3DSeries*
///
void q_bardataproxy_series_changed(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#seriesChanged)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, QBar3DSeries* series)
///
void q_bardataproxy_on_series_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_bardataproxy_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_bardataproxy_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#removeRows)
///
/// @param self QBarDataProxy*
/// @param rowIndex int
/// @param removeCount int
/// @param removeLabels bool
///
void q_bardataproxy_remove_rows3(void* self, int rowIndex, int removeCount, bool removeLabels);

/// Inherited from QAbstractDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
///
/// @param self const QBarDataProxy*
///
/// @return enum QAbstractDataProxy__DataType
///
int32_t q_bardataproxy_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBarDataProxy*
///
const char* q_bardataproxy_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBarDataProxy*
/// @param name const char*
///
void q_bardataproxy_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QBarDataProxy*
///
bool q_bardataproxy_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QBarDataProxy*
///
bool q_bardataproxy_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QBarDataProxy*
///
bool q_bardataproxy_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QBarDataProxy*
///
bool q_bardataproxy_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBarDataProxy*
/// @param b bool
///
bool q_bardataproxy_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QBarDataProxy*
///
QThread* q_bardataproxy_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarDataProxy*
/// @param thread QThread*
///
bool q_bardataproxy_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarDataProxy*
/// @param interval int
///
int32_t q_bardataproxy_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarDataProxy*
/// @param time int64_t of nanoseconds
///
int32_t q_bardataproxy_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarDataProxy*
/// @param id int
///
void q_bardataproxy_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarDataProxy*
/// @param id enum Qt__TimerId
///
void q_bardataproxy_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QBarDataProxy*
///
/// @return libqt_list of QObject*
///
libqt_list q_bardataproxy_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBarDataProxy*
/// @param parent QObject*
///
void q_bardataproxy_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBarDataProxy*
/// @param filterObj QObject*
///
void q_bardataproxy_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBarDataProxy*
/// @param obj QObject*
///
void q_bardataproxy_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_bardataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_bardataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBarDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_bardataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bardataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_bardataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarDataProxy*
///
bool q_bardataproxy_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarDataProxy*
/// @param receiver QObject*
///
bool q_bardataproxy_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_bardataproxy_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QBarDataProxy*
///
void q_bardataproxy_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QBarDataProxy*
///
void q_bardataproxy_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBarDataProxy*
/// @param name const char*
/// @param value QVariant*
///
bool q_bardataproxy_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QBarDataProxy*
/// @param name const char*
///
QVariant* q_bardataproxy_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBarDataProxy*
///
const char** q_bardataproxy_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarDataProxy*
///
QBindingStorage* q_bardataproxy_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QBarDataProxy*
///
const QBindingStorage* q_bardataproxy_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarDataProxy*
///
void q_bardataproxy_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self)
///
void q_bardataproxy_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QBarDataProxy*
///
QObject* q_bardataproxy_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QBarDataProxy*
/// @param classname const char*
///
bool q_bardataproxy_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBarDataProxy*
///
void q_bardataproxy_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarDataProxy*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_bardataproxy_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarDataProxy*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_bardataproxy_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_bardataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_bardataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBarDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_bardataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarDataProxy*
/// @param signal const char*
///
bool q_bardataproxy_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarDataProxy*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_bardataproxy_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarDataProxy*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bardataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBarDataProxy*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bardataproxy_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarDataProxy*
/// @param param1 QObject*
///
void q_bardataproxy_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, QObject* param1)
///
void q_bardataproxy_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QEvent*
///
bool q_bardataproxy_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QEvent*
///
bool q_bardataproxy_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback bool func(QBarDataProxy* self, QEvent* event)
///
void q_bardataproxy_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bardataproxy_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bardataproxy_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback bool func(QBarDataProxy* self, QObject* watched, QEvent* event)
///
void q_bardataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QTimerEvent*
///
void q_bardataproxy_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QTimerEvent*
///
void q_bardataproxy_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, QTimerEvent* event)
///
void q_bardataproxy_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QChildEvent*
///
void q_bardataproxy_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QChildEvent*
///
void q_bardataproxy_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, QChildEvent* event)
///
void q_bardataproxy_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QEvent*
///
void q_bardataproxy_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param event QEvent*
///
void q_bardataproxy_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, QEvent* event)
///
void q_bardataproxy_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarDataProxy*
/// @param signal QMetaMethod*
///
void q_bardataproxy_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param signal QMetaMethod*
///
void q_bardataproxy_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, QMetaMethod* signal)
///
void q_bardataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarDataProxy*
/// @param signal QMetaMethod*
///
void q_bardataproxy_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param signal QMetaMethod*
///
void q_bardataproxy_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, QMetaMethod* signal)
///
void q_bardataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarDataProxy*
///
QObject* q_bardataproxy_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarDataProxy*
///
QObject* q_bardataproxy_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback QObject* func(QBarDataProxy* self)
///
void q_bardataproxy_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarDataProxy*
///
int32_t q_bardataproxy_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarDataProxy*
///
int32_t q_bardataproxy_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback int32_t func(QBarDataProxy* self)
///
void q_bardataproxy_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarDataProxy*
/// @param signal const char*
///
int32_t q_bardataproxy_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarDataProxy*
/// @param signal const char*
///
int32_t q_bardataproxy_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback int32_t func(QBarDataProxy* self, const char* signal)
///
void q_bardataproxy_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBarDataProxy*
/// @param signal QMetaMethod*
///
bool q_bardataproxy_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBarDataProxy*
/// @param signal QMetaMethod*
///
bool q_bardataproxy_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarDataProxy*
/// @param callback bool func(QBarDataProxy* self, QMetaMethod* signal)
///
void q_bardataproxy_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBarDataProxy*
/// @param callback void func(QBarDataProxy* self, const char* objectName)
///
void q_bardataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy-qtdatavis.html#dtor.QBarDataProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QBarDataProxy*
///
void q_bardataproxy_delete(void* self);

#endif
