#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFBOOKMARKMODEL_H
#define SRC_PDFQT6C_LIBQPDFBOOKMARKMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfbookmarkmodel.html

/// q_pdfbookmarkmodel_new constructs a new QPdfBookmarkModel object.
///
QPdfBookmarkModel* q_pdfbookmarkmodel_new();

/// q_pdfbookmarkmodel_new2 constructs a new QPdfBookmarkModel object.
///
/// @param parent QObject*
QPdfBookmarkModel* q_pdfbookmarkmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPdfBookmarkModel*
const QMetaObject* q_pdfbookmarkmodel_meta_object(void* self);

/// @param self QPdfBookmarkModel*
/// @param param1 const char*
void* q_pdfbookmarkmodel_metacast(void* self, const char* param1);

/// @param self QPdfBookmarkModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfbookmarkmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPdfBookmarkModel*
/// @param callback int32_t fn(QPdfBookmarkModel*, enum QMetaObject__Call, int, void*)
void q_pdfbookmarkmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPdfBookmarkModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfbookmarkmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pdfbookmarkmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#document)
///
/// @param self QPdfBookmarkModel*
QPdfDocument* q_pdfbookmarkmodel_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#setDocument)
///
/// @param self QPdfBookmarkModel*
/// @param document QPdfDocument*
void q_pdfbookmarkmodel_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#data)
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_pdfbookmarkmodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QPdfBookmarkModel*
/// @param callback QVariant* fn(QPdfBookmarkModel*, QModelIndex*, int)
void q_pdfbookmarkmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#data)
///
/// Base class method implementation
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_pdfbookmarkmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#index)
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_pdfbookmarkmodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QPdfBookmarkModel*
/// @param callback QModelIndex* fn(QPdfBookmarkModel*, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#index)
///
/// Base class method implementation
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_pdfbookmarkmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#parent)
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
QModelIndex* q_pdfbookmarkmodel_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QPdfBookmarkModel*
/// @param callback QModelIndex* fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
QModelIndex* q_pdfbookmarkmodel_qbase_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#rowCount)
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
int32_t q_pdfbookmarkmodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QPdfBookmarkModel*
/// @param callback int32_t fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
int32_t q_pdfbookmarkmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#columnCount)
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
int32_t q_pdfbookmarkmodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QPdfBookmarkModel*
/// @param callback int32_t fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
int32_t q_pdfbookmarkmodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#roleNames)
///
/// @param self QPdfBookmarkModel*
libqt_map /* of int to char* */ q_pdfbookmarkmodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self QPdfBookmarkModel*
/// @param callback libqt_map /* of int to char* */ fn()
void q_pdfbookmarkmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self QPdfBookmarkModel*
libqt_map /* of int to char* */ q_pdfbookmarkmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#documentChanged)
///
/// @param self QPdfBookmarkModel*
/// @param document QPdfDocument*
void q_pdfbookmarkmodel_document_changed(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#documentChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QPdfDocument*)
void q_pdfbookmarkmodel_on_document_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pdfbookmarkmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pdfbookmarkmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
bool q_pdfbookmarkmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QPdfBookmarkModel*
/// @param row int
bool q_pdfbookmarkmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QPdfBookmarkModel*
/// @param column int
bool q_pdfbookmarkmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QPdfBookmarkModel*
/// @param row int
bool q_pdfbookmarkmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QPdfBookmarkModel*
/// @param column int
bool q_pdfbookmarkmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_pdfbookmarkmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_pdfbookmarkmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
bool q_pdfbookmarkmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QPdfBookmarkModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void q_pdfbookmarkmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, QModelIndex*)
void q_pdfbookmarkmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QPdfBookmarkModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, enum Qt__Orientation, int, int)
void q_pdfbookmarkmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*)
void q_pdfbookmarkmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*)
void q_pdfbookmarkmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool q_pdfbookmarkmodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QPdfBookmarkModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_pdfbookmarkmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */)
void q_pdfbookmarkmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QPdfBookmarkModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_pdfbookmarkmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, libqt_list /* of QPersistentModelIndex* */)
void q_pdfbookmarkmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QPdfBookmarkModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_pdfbookmarkmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void q_pdfbookmarkmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QPdfBookmarkModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_pdfbookmarkmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, libqt_list /* of QPersistentModelIndex* */)
void q_pdfbookmarkmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QPdfBookmarkModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_pdfbookmarkmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void q_pdfbookmarkmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfBookmarkModel*
const char* q_pdfbookmarkmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPdfBookmarkModel*
/// @param name char*
void q_pdfbookmarkmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPdfBookmarkModel*
bool q_pdfbookmarkmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPdfBookmarkModel*
bool q_pdfbookmarkmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPdfBookmarkModel*
bool q_pdfbookmarkmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPdfBookmarkModel*
bool q_pdfbookmarkmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPdfBookmarkModel*
/// @param b bool
bool q_pdfbookmarkmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPdfBookmarkModel*
QThread* q_pdfbookmarkmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfBookmarkModel*
/// @param thread QThread*
bool q_pdfbookmarkmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfBookmarkModel*
/// @param interval int
int32_t q_pdfbookmarkmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfBookmarkModel*
/// @param id int
void q_pdfbookmarkmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfBookmarkModel*
/// @param id enum Qt__TimerId
void q_pdfbookmarkmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPdfBookmarkModel*
libqt_list /* of QObject* */ q_pdfbookmarkmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPdfBookmarkModel*
/// @param parent QObject*
void q_pdfbookmarkmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPdfBookmarkModel*
/// @param filterObj QObject*
void q_pdfbookmarkmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPdfBookmarkModel*
/// @param obj QObject*
void q_pdfbookmarkmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pdfbookmarkmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfBookmarkModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pdfbookmarkmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pdfbookmarkmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pdfbookmarkmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPdfBookmarkModel*
/// @param name const char*
/// @param value QVariant*
bool q_pdfbookmarkmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPdfBookmarkModel*
/// @param name const char*
QVariant* q_pdfbookmarkmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfBookmarkModel*
const char** q_pdfbookmarkmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfBookmarkModel*
QBindingStorage* q_pdfbookmarkmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfBookmarkModel*
const QBindingStorage* q_pdfbookmarkmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*)
void q_pdfbookmarkmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPdfBookmarkModel*
/// @param classname const char*
bool q_pdfbookmarkmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfBookmarkModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pdfbookmarkmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfBookmarkModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pdfbookmarkmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pdfbookmarkmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfBookmarkModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pdfbookmarkmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfBookmarkModel*
/// @param param1 QObject*
void q_pdfbookmarkmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QObject*)
void q_pdfbookmarkmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_pdfbookmarkmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_pdfbookmarkmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback QModelIndex* fn(QPdfBookmarkModel*, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_pdfbookmarkmodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_pdfbookmarkmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*, QVariant*, int)
void q_pdfbookmarkmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_pdfbookmarkmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_pdfbookmarkmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback QVariant* fn(QPdfBookmarkModel*, int, enum Qt__Orientation, int)
void q_pdfbookmarkmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_pdfbookmarkmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_pdfbookmarkmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, int, enum Qt__Orientation, QVariant*, int)
void q_pdfbookmarkmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_pdfbookmarkmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_pdfbookmarkmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback libqt_map /* of int to QVariant* */ fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_pdfbookmarkmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_pdfbookmarkmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*, libqt_map /* of int to QVariant* */)
void q_pdfbookmarkmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
bool q_pdfbookmarkmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
bool q_pdfbookmarkmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
const char** q_pdfbookmarkmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
const char** q_pdfbookmarkmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback const char** fn()
void q_pdfbookmarkmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_pdfbookmarkmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_pdfbookmarkmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback QMimeData* fn(QPdfBookmarkModel*, libqt_list /* of QModelIndex* */)
void q_pdfbookmarkmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_pdfbookmarkmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_pdfbookmarkmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback int64_t fn()
void q_pdfbookmarkmodel_on_supported_drop_actions(void* self, int64_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_pdfbookmarkmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_pdfbookmarkmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback int64_t fn()
void q_pdfbookmarkmodel_on_supported_drag_actions(void* self, int64_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, int, int, QModelIndex*)
void q_pdfbookmarkmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_pdfbookmarkmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_pdfbookmarkmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_pdfbookmarkmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_pdfbookmarkmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
void q_pdfbookmarkmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
void q_pdfbookmarkmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
bool q_pdfbookmarkmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_pdfbookmarkmodel_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_pdfbookmarkmodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback int64_t fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_flags(void* self, int64_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_pdfbookmarkmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_pdfbookmarkmodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, int, enum Qt__SortOrder)
void q_pdfbookmarkmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
QModelIndex* q_pdfbookmarkmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
QModelIndex* q_pdfbookmarkmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback QModelIndex* fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback libqt_list /* of QModelIndex* */ fn(QPdfBookmarkModel*, QModelIndex*, int, QVariant*, int, flag of enum Qt__MatchFlag)
void q_pdfbookmarkmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
QSize* q_pdfbookmarkmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
QSize* q_pdfbookmarkmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback QSize* fn(QPdfBookmarkModel*, QModelIndex*)
void q_pdfbookmarkmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_pdfbookmarkmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_pdfbookmarkmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, QModelRoleDataSpan*)
void q_pdfbookmarkmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
bool q_pdfbookmarkmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
bool q_pdfbookmarkmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn()
void q_pdfbookmarkmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QEvent*
bool q_pdfbookmarkmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QEvent*
bool q_pdfbookmarkmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QEvent*)
void q_pdfbookmarkmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfbookmarkmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfbookmarkmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QObject*, QEvent*)
void q_pdfbookmarkmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QTimerEvent*
void q_pdfbookmarkmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QTimerEvent*
void q_pdfbookmarkmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QTimerEvent*)
void q_pdfbookmarkmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QChildEvent*
void q_pdfbookmarkmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QChildEvent*
void q_pdfbookmarkmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QChildEvent*)
void q_pdfbookmarkmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QEvent*
void q_pdfbookmarkmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param event QEvent*
void q_pdfbookmarkmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QEvent*)
void q_pdfbookmarkmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal QMetaMethod*
void q_pdfbookmarkmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal QMetaMethod*
void q_pdfbookmarkmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QMetaMethod*)
void q_pdfbookmarkmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal QMetaMethod*
void q_pdfbookmarkmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal QMetaMethod*
void q_pdfbookmarkmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QMetaMethod*)
void q_pdfbookmarkmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
QModelIndex* q_pdfbookmarkmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
QModelIndex* q_pdfbookmarkmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback QModelIndex* fn(QPdfBookmarkModel*, int, int)
void q_pdfbookmarkmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_pdfbookmarkmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_pdfbookmarkmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, libqt_list /* of QModelIndex* */, QDataStream*)
void q_pdfbookmarkmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_pdfbookmarkmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_pdfbookmarkmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, int, int, QModelIndex*, QDataStream*)
void q_pdfbookmarkmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_pdfbookmarkmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_pdfbookmarkmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_pdfbookmarkmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_pdfbookmarkmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_pdfbookmarkmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn()
void q_pdfbookmarkmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_pdfbookmarkmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_pdfbookmarkmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, QModelIndex*)
void q_pdfbookmarkmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_pdfbookmarkmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_pdfbookmarkmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)
void q_pdfbookmarkmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
libqt_list /* of QModelIndex* */ q_pdfbookmarkmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback libqt_list /* of QModelIndex* */ fn()
void q_pdfbookmarkmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
QObject* q_pdfbookmarkmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
QObject* q_pdfbookmarkmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback QObject* fn()
void q_pdfbookmarkmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
int32_t q_pdfbookmarkmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
int32_t q_pdfbookmarkmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback int32_t fn()
void q_pdfbookmarkmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal const char*
int32_t q_pdfbookmarkmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal const char*
int32_t q_pdfbookmarkmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback int32_t fn(QPdfBookmarkModel*, const char*)
void q_pdfbookmarkmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal QMetaMethod*
bool q_pdfbookmarkmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param signal QMetaMethod*
bool q_pdfbookmarkmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfBookmarkModel*
/// @param callback bool fn(QPdfBookmarkModel*, QMetaMethod*)
void q_pdfbookmarkmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int)
void q_pdfbookmarkmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*)
void q_pdfbookmarkmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*)
void q_pdfbookmarkmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_pdfbookmarkmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfBookmarkModel*
/// @param callback void fn(QPdfBookmarkModel*, const char*)
void q_pdfbookmarkmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#dtor.QPdfBookmarkModel)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfBookmarkModel*
void q_pdfbookmarkmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#types

typedef enum {
    QPDFBOOKMARKMODEL_ROLE_TITLE = 256,
    QPDFBOOKMARKMODEL_ROLE_LEVEL = 257,
    QPDFBOOKMARKMODEL_ROLE_PAGE = 258,
    QPDFBOOKMARKMODEL_ROLE_LOCATION = 259,
    QPDFBOOKMARKMODEL_ROLE_ZOOM = 260,
    QPDFBOOKMARKMODEL_ROLE_NROLES = 261
} QPdfBookmarkModel__Role;

#endif
