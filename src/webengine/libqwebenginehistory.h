#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEHISTORY_H
#define WEBENGINE_LIBQWEBENGINEHISTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html)

/// q_webenginehistoryitem_new constructs a new QWebEngineHistoryItem object.
///
/// @param other QWebEngineHistoryItem*
///
QWebEngineHistoryItem* q_webenginehistoryitem_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#operator-eq)
///
/// @param self QWebEngineHistoryItem*
/// @param other QWebEngineHistoryItem*
///
void q_webenginehistoryitem_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#originalUrl)
///
/// @param self const QWebEngineHistoryItem*
///
QUrl* q_webenginehistoryitem_original_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#url)
///
/// @param self const QWebEngineHistoryItem*
///
QUrl* q_webenginehistoryitem_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineHistoryItem*
///
const char* q_webenginehistoryitem_title(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#lastVisited)
///
/// @param self const QWebEngineHistoryItem*
///
QDateTime* q_webenginehistoryitem_last_visited(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#iconUrl)
///
/// @param self const QWebEngineHistoryItem*
///
QUrl* q_webenginehistoryitem_icon_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#isValid)
///
/// @param self const QWebEngineHistoryItem*
///
bool q_webenginehistoryitem_is_valid(const void* self);

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
/// @param self const QWebEngineHistoryModel*
///
const QMetaObject* q_webenginehistorymodel_meta_object(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webenginehistorymodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#rowCount)
///
/// @param self const QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
int32_t q_webenginehistorymodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#data)
///
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_webenginehistorymodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QWebEngineHistoryModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_webenginehistorymodel_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#reset)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginehistorymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
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
/// @param self const QWebEngineHistoryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_webenginehistorymodel_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// @param self const QWebEngineHistoryModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_webenginehistorymodel_sibling(const void* self, int row, int column, const void* idx);

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
bool q_webenginehistorymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_webenginehistorymodel_flags(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QWebEngineHistoryModel*
/// @param row int
/// @param column int
///
bool q_webenginehistorymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QWebEngineHistoryModel*
/// @param child QModelIndex*
///
QModelIndex* q_webenginehistorymodel_parent(const void* self, const void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
int32_t q_webenginehistorymodel_column_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_webenginehistorymodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// @param self const QWebEngineHistoryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_webenginehistorymodel_header_data(const void* self, int section, int32_t orientation, int role);

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
bool q_webenginehistorymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_webenginehistorymodel_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_webenginehistorymodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// @param self QWebEngineHistoryModel*
/// @param index QModelIndex*
///
bool q_webenginehistorymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineHistoryModel*
///
const char** q_webenginehistorymodel_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// @param self const QWebEngineHistoryModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_webenginehistorymodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// @param self const QWebEngineHistoryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// @param self const QWebEngineHistoryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_webenginehistorymodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// @param self const QWebEngineHistoryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_webenginehistorymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_columns(void* self, int column, int count, const void* parent);

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
bool q_webenginehistorymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

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
bool q_webenginehistorymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

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
bool q_webenginehistorymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

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
bool q_webenginehistorymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// @param self QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
void q_webenginehistorymodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// @param self const QWebEngineHistoryModel*
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_can_fetch_more(const void* self, const void* parent);

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
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
///
QModelIndex* q_webenginehistorymodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// @param self const QWebEngineHistoryModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_webenginehistorymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
///
QSize* q_webenginehistorymodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
///
bool q_webenginehistorymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_webenginehistorymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_webenginehistorymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_webenginehistorymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

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
/// @param self const QWebEngineHistoryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QWebEngineHistoryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QWebEngineHistoryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_webenginehistorymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QWebEngineHistoryModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_webenginehistorymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_webenginehistorymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_webenginehistorymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_webenginehistorymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_webenginehistorymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_webenginehistorymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_webenginehistorymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_webenginehistorymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_webenginehistorymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_webenginehistorymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_webenginehistorymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineHistoryModel*
///
const char* q_webenginehistorymodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineHistoryModel*
/// @param name const char*
///
void q_webenginehistorymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_signals_blocked(const void* self);

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
/// @param self const QWebEngineHistoryModel*
///
QThread* q_webenginehistorymodel_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistoryModel*
/// @param time int64_t of nanoseconds
///
int32_t q_webenginehistorymodel_start_timer2(void* self, int64_t time);

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
/// @param self const QWebEngineHistoryModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_webenginehistorymodel_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_webenginehistorymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginehistorymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineHistoryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginehistorymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginehistorymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginehistorymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistoryModel*
///
bool q_webenginehistorymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistoryModel*
/// @param receiver QObject*
///
bool q_webenginehistorymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginehistorymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebEngineHistoryModel*
///
void q_webenginehistorymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebEngineHistoryModel*
///
void q_webenginehistorymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineHistoryModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginehistorymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebEngineHistoryModel*
/// @param name const char*
///
QVariant* q_webenginehistorymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineHistoryModel*
///
const char** q_webenginehistorymodel_dynamic_property_names(const void* self);

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
/// @param self const QWebEngineHistoryModel*
///
const QBindingStorage* q_webenginehistorymodel_binding_storage2(const void* self);

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
/// @param self const QWebEngineHistoryModel*
/// @param classname const char*
///
bool q_webenginehistorymodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineHistoryModel*
///
void q_webenginehistorymodel_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistoryModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginehistorymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_webenginehistorymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_webenginehistorymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineHistoryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginehistorymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistoryModel*
/// @param signal const char*
///
bool q_webenginehistorymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistoryModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_webenginehistorymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistoryModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginehistorymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistoryModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginehistorymodel_disconnect23(const void* self, const void* receiver, const char* member);

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
void q_webenginehistorymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* parent, int first, int last)
///
void q_webenginehistorymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

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
void q_webenginehistorymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_webenginehistorymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_webenginehistorymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineHistoryModel*
/// @param callback void func(QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_webenginehistorymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

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
/// @param self const QWebEngineHistory*
///
const QMetaObject* q_webenginehistory_meta_object(const void* self);

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
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
/// @param self const QWebEngineHistory*
///
/// @return libqt_list of QWebEngineHistoryItem*
///
libqt_list q_webenginehistory_items(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#backItems)
///
/// @param self const QWebEngineHistory*
/// @param maxItems int
///
/// @return libqt_list of QWebEngineHistoryItem*
///
libqt_list q_webenginehistory_back_items(const void* self, int maxItems);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItems)
///
/// @param self const QWebEngineHistory*
/// @param maxItems int
///
/// @return libqt_list of QWebEngineHistoryItem*
///
libqt_list q_webenginehistory_forward_items(const void* self, int maxItems);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoBack)
///
/// @param self const QWebEngineHistory*
///
bool q_webenginehistory_can_go_back(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoForward)
///
/// @param self const QWebEngineHistory*
///
bool q_webenginehistory_can_go_forward(const void* self);

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
void q_webenginehistory_go_to_item(void* self, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#backItem)
///
/// @param self const QWebEngineHistory*
///
QWebEngineHistoryItem* q_webenginehistory_back_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItem)
///
/// @param self const QWebEngineHistory*
///
QWebEngineHistoryItem* q_webenginehistory_current_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItem)
///
/// @param self const QWebEngineHistory*
///
QWebEngineHistoryItem* q_webenginehistory_forward_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#itemAt)
///
/// @param self const QWebEngineHistory*
/// @param i int
///
QWebEngineHistoryItem* q_webenginehistory_item_at(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItemIndex)
///
/// @param self const QWebEngineHistory*
///
int32_t q_webenginehistory_current_item_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#count)
///
/// @param self const QWebEngineHistory*
///
int32_t q_webenginehistory_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#itemsModel)
///
/// @param self const QWebEngineHistory*
///
QWebEngineHistoryModel* q_webenginehistory_items_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#backItemsModel)
///
/// @param self const QWebEngineHistory*
///
QWebEngineHistoryModel* q_webenginehistory_back_items_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItemsModel)
///
/// @param self const QWebEngineHistory*
///
QWebEngineHistoryModel* q_webenginehistory_forward_items_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginehistory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineHistory*
///
const char* q_webenginehistory_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineHistory*
/// @param name const char*
///
void q_webenginehistory_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebEngineHistory*
///
bool q_webenginehistory_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebEngineHistory*
///
bool q_webenginehistory_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebEngineHistory*
///
bool q_webenginehistory_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebEngineHistory*
///
bool q_webenginehistory_signals_blocked(const void* self);

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
/// @param self const QWebEngineHistory*
///
QThread* q_webenginehistory_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistory*
/// @param time int64_t of nanoseconds
///
int32_t q_webenginehistory_start_timer2(void* self, int64_t time);

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
/// @param self const QWebEngineHistory*
///
/// @return libqt_list of QObject*
///
libqt_list q_webenginehistory_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_webenginehistory_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginehistory_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineHistory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginehistory_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginehistory_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginehistory_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistory*
///
bool q_webenginehistory_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistory*
/// @param receiver QObject*
///
bool q_webenginehistory_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginehistory_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebEngineHistory*
///
void q_webenginehistory_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebEngineHistory*
///
void q_webenginehistory_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineHistory*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginehistory_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebEngineHistory*
/// @param name const char*
///
QVariant* q_webenginehistory_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineHistory*
///
const char** q_webenginehistory_dynamic_property_names(const void* self);

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
/// @param self const QWebEngineHistory*
///
const QBindingStorage* q_webenginehistory_binding_storage2(const void* self);

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
/// @param self const QWebEngineHistory*
///
QObject* q_webenginehistory_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWebEngineHistory*
/// @param classname const char*
///
bool q_webenginehistory_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineHistory*
///
void q_webenginehistory_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineHistory*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginehistory_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_webenginehistory_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_webenginehistory_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebEngineHistory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginehistory_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistory*
/// @param signal const char*
///
bool q_webenginehistory_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistory*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_webenginehistory_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistory*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginehistory_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebEngineHistory*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webenginehistory_disconnect23(const void* self, const void* receiver, const char* member);

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
