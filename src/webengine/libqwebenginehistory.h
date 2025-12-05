#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEHISTORY_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEHISTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html)

/// q_webenginehistoryitem_new constructs a new QWebEngineHistoryItem object.
///
/// @param other QWebEngineHistoryItem*
///
QWebEngineHistoryItem* q_webenginehistoryitem_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#operator-eq)
///
/// @param self QWebEngineHistoryItem*
/// @param other QWebEngineHistoryItem*
///
void q_webenginehistoryitem_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#originalUrl)
///
/// @param self QWebEngineHistoryItem*
///
QUrl* q_webenginehistoryitem_original_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#url)
///
/// @param self QWebEngineHistoryItem*
///
QUrl* q_webenginehistoryitem_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHistoryItem*
///
const char* q_webenginehistoryitem_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#lastVisited)
///
/// @param self QWebEngineHistoryItem*
///
QDateTime* q_webenginehistoryitem_last_visited(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#iconUrl)
///
/// @param self QWebEngineHistoryItem*
///
QUrl* q_webenginehistoryitem_icon_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#isValid)
///
/// @param self QWebEngineHistoryItem*
///
bool q_webenginehistoryitem_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#swap)
///
/// @param self QWebEngineHistoryItem*
/// @param other QWebEngineHistoryItem*
///
void q_webenginehistoryitem_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#dtor.QWebEngineHistoryItem)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineHistoryItem*
///
void q_webenginehistoryitem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineHistoryModel*
///
const QMetaObject* q_webenginehistorymodel_meta_object(void* self);

/// @param self QWebEngineHistoryModel*
/// @param param1 const char*
///
void* q_webenginehistorymodel_metacast(void* self, const char* param1);

/// @param self QWebEngineHistoryModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginehistorymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_webenginehistorymodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#rowCount)
///
/// @param self QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
int32_t q_webenginehistorymodel_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#data)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_webenginehistorymodel_data(void* self, void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#roleNames)
///
/// @param self QWebEngineHistoryModel*
///
libqt_map /* of int to char* */ q_webenginehistorymodel_role_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#reset)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginehistorymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webenginehistorymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_webenginehistorymodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_webenginehistorymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// @param self QWebEngineHistoryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_webenginehistorymodel_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param column int
///
bool q_webenginehistorymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QWebEngineHistoryModel*
/// @param child QModelIndex*
///
QModelIndex* q_webenginehistorymodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @param self QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
int32_t q_webenginehistorymodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_webenginehistorymodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// @param self QWebEngineHistoryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_webenginehistorymodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// @param self QWebEngineHistoryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_webenginehistorymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_webenginehistorymodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_webenginehistorymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
///
bool q_webenginehistorymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHistoryModel*
///
const char** q_webenginehistorymodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// @param self QWebEngineHistoryModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_webenginehistorymodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// @param self QWebEngineHistoryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// @param self QWebEngineHistoryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_webenginehistorymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// @param self QWebEngineHistoryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_webenginehistorymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// @param self QWebEngineHistoryModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_webenginehistorymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// @param self QWebEngineHistoryModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_webenginehistorymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
///
bool q_webenginehistorymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
///
bool q_webenginehistorymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
///
bool q_webenginehistorymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
///
bool q_webenginehistorymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QWebEngineHistoryModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_webenginehistorymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QWebEngineHistoryModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_webenginehistorymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// @param self QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
void q_webenginehistorymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// @param self QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_webenginehistorymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
///
QModelIndex* q_webenginehistorymodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// @param self QWebEngineHistoryModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_webenginehistorymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
///
QSize* q_webenginehistorymodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
///
bool q_webenginehistorymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_webenginehistorymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_webenginehistorymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_webenginehistorymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_webenginehistorymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_webenginehistorymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self)
///
void q_webenginehistorymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self)
///
void q_webenginehistorymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// @param self QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_webenginehistorymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_webenginehistorymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void q_webenginehistorymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_webenginehistorymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QPersistentModelIndex** parents)
///
void q_webenginehistorymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_webenginehistorymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_webenginehistorymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_webenginehistorymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QPersistentModelIndex** parents)
///
void q_webenginehistorymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_webenginehistorymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_webenginehistorymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineHistoryModel*
/// @param event QEvent*
///
bool q_webenginehistorymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineHistoryModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginehistorymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHistoryModel*
///
const char* q_webenginehistorymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineHistoryModel*
/// @param name char*
///
void q_webenginehistorymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineHistoryModel*
/// @param b bool
///
bool q_webenginehistorymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineHistoryModel*
///
QThread* q_webenginehistorymodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineHistoryModel*
/// @param thread QThread*
///
bool q_webenginehistorymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistoryModel*
/// @param interval int
///
int32_t q_webenginehistorymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineHistoryModel*
/// @param id int
///
void q_webenginehistorymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineHistoryModel*
/// @param id enum Qt__TimerId
///
void q_webenginehistorymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineHistoryModel*
///
libqt_list /* of QObject* */ q_webenginehistorymodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineHistoryModel*
/// @param parent QObject*
///
void q_webenginehistorymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineHistoryModel*
/// @param filterObj QObject*
///
void q_webenginehistorymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineHistoryModel*
/// @param obj QObject*
///
void q_webenginehistorymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginehistorymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineHistoryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginehistorymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginehistorymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginehistorymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineHistoryModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginehistorymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineHistoryModel*
/// @param name const char*
///
QVariant* q_webenginehistorymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHistoryModel*
///
const char** q_webenginehistorymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineHistoryModel*
///
QBindingStorage* q_webenginehistorymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineHistoryModel*
///
const QBindingStorage* q_webenginehistorymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self)
///
void q_webenginehistorymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineHistoryModel*
/// @param classname const char*
///
bool q_webenginehistorymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineHistoryModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_webenginehistorymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistoryModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginehistorymodel_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_webenginehistorymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineHistoryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginehistorymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistoryModel*
/// @param param1 QObject*
///
void q_webenginehistorymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QObject* param1)
///
void q_webenginehistorymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self)
///
void q_webenginehistorymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self)
///
void q_webenginehistorymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_webenginehistorymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_webenginehistorymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_webenginehistorymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_webenginehistorymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, const char* objectName)
///
void q_webenginehistorymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineHistory*
///
const QMetaObject* q_webenginehistory_meta_object(void* self);

/// @param self QWebEngineHistory*
/// @param param1 const char*
///
void* q_webenginehistory_metacast(void* self, const char* param1);

/// @param self QWebEngineHistory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginehistory_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_webenginehistory_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#clear)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#items)
///
/// @param self QWebEngineHistory*
///
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#backItems)
///
/// @param self QWebEngineHistory*
/// @param maxItems int
///
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_back_items(void* self, int maxItems);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItems)
///
/// @param self QWebEngineHistory*
/// @param maxItems int
///
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_forward_items(void* self, int maxItems);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoBack)
///
/// @param self QWebEngineHistory*
///
bool q_webenginehistory_can_go_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoForward)
///
/// @param self QWebEngineHistory*
///
bool q_webenginehistory_can_go_forward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#back)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#forward)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_forward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#goToItem)
///
/// @param self QWebEngineHistory*
/// @param item QWebEngineHistoryItem*
///
void q_webenginehistory_go_to_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#backItem)
///
/// @param self QWebEngineHistory*
///
QWebEngineHistoryItem* q_webenginehistory_back_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItem)
///
/// @param self QWebEngineHistory*
///
QWebEngineHistoryItem* q_webenginehistory_current_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItem)
///
/// @param self QWebEngineHistory*
///
QWebEngineHistoryItem* q_webenginehistory_forward_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#itemAt)
///
/// @param self QWebEngineHistory*
/// @param i int
///
QWebEngineHistoryItem* q_webenginehistory_item_at(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItemIndex)
///
/// @param self QWebEngineHistory*
///
int32_t q_webenginehistory_current_item_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#count)
///
/// @param self QWebEngineHistory*
///
int32_t q_webenginehistory_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#itemsModel)
///
/// @param self QWebEngineHistory*
///
QWebEngineHistoryModel* q_webenginehistory_items_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#backItemsModel)
///
/// @param self QWebEngineHistory*
///
QWebEngineHistoryModel* q_webenginehistory_back_items_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItemsModel)
///
/// @param self QWebEngineHistory*
///
QWebEngineHistoryModel* q_webenginehistory_forward_items_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginehistory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webenginehistory_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineHistory*
/// @param event QEvent*
///
bool q_webenginehistory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineHistory*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginehistory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHistory*
///
const char* q_webenginehistory_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineHistory*
/// @param name char*
///
void q_webenginehistory_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineHistory*
///
bool q_webenginehistory_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineHistory*
///
bool q_webenginehistory_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineHistory*
///
bool q_webenginehistory_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineHistory*
///
bool q_webenginehistory_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineHistory*
/// @param b bool
///
bool q_webenginehistory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineHistory*
///
QThread* q_webenginehistory_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineHistory*
/// @param thread QThread*
///
bool q_webenginehistory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistory*
/// @param interval int
///
int32_t q_webenginehistory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineHistory*
/// @param id int
///
void q_webenginehistory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineHistory*
/// @param id enum Qt__TimerId
///
void q_webenginehistory_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineHistory*
///
libqt_list /* of QObject* */ q_webenginehistory_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineHistory*
/// @param parent QObject*
///
void q_webenginehistory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineHistory*
/// @param filterObj QObject*
///
void q_webenginehistory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineHistory*
/// @param obj QObject*
///
void q_webenginehistory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginehistory_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineHistory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginehistory_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginehistory_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginehistory_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineHistory*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginehistory_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineHistory*
/// @param name const char*
///
QVariant* q_webenginehistory_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHistory*
///
const char** q_webenginehistory_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineHistory*
///
QBindingStorage* q_webenginehistory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineHistory*
///
const QBindingStorage* q_webenginehistory_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistory*
/// @param callback void func(QWebEngineHistory* self)
///
void q_webenginehistory_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineHistory*
///
QObject* q_webenginehistory_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineHistory*
/// @param classname const char*
///
bool q_webenginehistory_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineHistory*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_webenginehistory_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistory*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginehistory_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_webenginehistory_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineHistory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginehistory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistory*
/// @param param1 QObject*
///
void q_webenginehistory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineHistory*
/// @param callback void func(QWebEngineHistory* self, QObject* param1)
///
void q_webenginehistory_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistory*
/// @param callback void func(QWebEngineHistory* self, const char* objectName)
///
void q_webenginehistory_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#public-types)

typedef enum {
    QWEBENGINEHISTORYMODEL_ROLES_URLROLE = 256,
    QWEBENGINEHISTORYMODEL_ROLES_TITLEROLE = 257,
    QWEBENGINEHISTORYMODEL_ROLES_OFFSETROLE = 258,
    QWEBENGINEHISTORYMODEL_ROLES_ICONURLROLE = 259
} QWebEngineHistoryModel__Roles;

#endif
