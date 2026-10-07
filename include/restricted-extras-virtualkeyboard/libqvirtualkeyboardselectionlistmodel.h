#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDSELECTIONLISTMODEL_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDSELECTIONLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
const QMetaObject* q_virtualkeyboardselectionlistmodel_meta_object(const void* self);

/// @param self QVirtualKeyboardSelectionListModel*
/// @param param1 const char*
///
void* q_virtualkeyboardselectionlistmodel_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardSelectionListModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardselectionlistmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboardselectionlistmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#setDataSource)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param dataSource QVirtualKeyboardAbstractInputMethod*
/// @param type enum QVirtualKeyboardSelectionListModel__Type
///
void q_virtualkeyboardselectionlistmodel_set_data_source(void* self, void* dataSource, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#dataSource)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
QVirtualKeyboardAbstractInputMethod* q_virtualkeyboardselectionlistmodel_data_source(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#rowCount)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param parent QModelIndex*
///
int32_t q_virtualkeyboardselectionlistmodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#data)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_virtualkeyboardselectionlistmodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
/// @return libqt_map of int to const char*
///
libqt_map q_virtualkeyboardselectionlistmodel_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#count)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
int32_t q_virtualkeyboardselectionlistmodel_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#selectItem)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param index int
///
void q_virtualkeyboardselectionlistmodel_select_item(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#removeItem)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param index int
///
void q_virtualkeyboardselectionlistmodel_remove_item(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#dataAt)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index int
///
QVariant* q_virtualkeyboardselectionlistmodel_data_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#countChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#countChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self)
///
void q_virtualkeyboardselectionlistmodel_on_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#activeItemChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param index int
///
void q_virtualkeyboardselectionlistmodel_active_item_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#activeItemChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, int index)
///
void q_virtualkeyboardselectionlistmodel_on_active_item_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#itemSelected)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param index int
///
void q_virtualkeyboardselectionlistmodel_item_selected(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#itemSelected)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, int index)
///
void q_virtualkeyboardselectionlistmodel_on_item_selected(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboardselectionlistmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboardselectionlistmodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#dataAt)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index int
/// @param role enum QVirtualKeyboardSelectionListModel__Role
///
QVariant* q_virtualkeyboardselectionlistmodel_data_at2(const void* self, int index, int32_t role);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_virtualkeyboardselectionlistmodel_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_virtualkeyboardselectionlistmodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_virtualkeyboardselectionlistmodel_flags(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param column int
///
bool q_virtualkeyboardselectionlistmodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param child QModelIndex*
///
QModelIndex* q_virtualkeyboardselectionlistmodel_parent(const void* self, const void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param parent QModelIndex*
///
int32_t q_virtualkeyboardselectionlistmodel_column_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_virtualkeyboardselectionlistmodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_virtualkeyboardselectionlistmodel_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_virtualkeyboardselectionlistmodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

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
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_virtualkeyboardselectionlistmodel_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_virtualkeyboardselectionlistmodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
const char** q_virtualkeyboardselectionlistmodel_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_virtualkeyboardselectionlistmodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_virtualkeyboardselectionlistmodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_virtualkeyboardselectionlistmodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_virtualkeyboardselectionlistmodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_virtualkeyboardselectionlistmodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param row int
///
bool q_virtualkeyboardselectionlistmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param column int
///
bool q_virtualkeyboardselectionlistmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param row int
///
bool q_virtualkeyboardselectionlistmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param column int
///
bool q_virtualkeyboardselectionlistmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_virtualkeyboardselectionlistmodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_virtualkeyboardselectionlistmodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param parent QModelIndex*
///
void q_virtualkeyboardselectionlistmodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_virtualkeyboardselectionlistmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
///
QModelIndex* q_virtualkeyboardselectionlistmodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_virtualkeyboardselectionlistmodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
///
QSize* q_virtualkeyboardselectionlistmodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_virtualkeyboardselectionlistmodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_virtualkeyboardselectionlistmodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_virtualkeyboardselectionlistmodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_virtualkeyboardselectionlistmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self)
///
void q_virtualkeyboardselectionlistmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self)
///
void q_virtualkeyboardselectionlistmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
bool q_virtualkeyboardselectionlistmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_virtualkeyboardselectionlistmodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_virtualkeyboardselectionlistmodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_virtualkeyboardselectionlistmodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_virtualkeyboardselectionlistmodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_virtualkeyboardselectionlistmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_virtualkeyboardselectionlistmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_virtualkeyboardselectionlistmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_virtualkeyboardselectionlistmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_virtualkeyboardselectionlistmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_virtualkeyboardselectionlistmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_virtualkeyboardselectionlistmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_virtualkeyboardselectionlistmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param event QEvent*
///
bool q_virtualkeyboardselectionlistmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardselectionlistmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
const char* q_virtualkeyboardselectionlistmodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param name const char*
///
void q_virtualkeyboardselectionlistmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
bool q_virtualkeyboardselectionlistmodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
bool q_virtualkeyboardselectionlistmodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
bool q_virtualkeyboardselectionlistmodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
bool q_virtualkeyboardselectionlistmodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param b bool
///
bool q_virtualkeyboardselectionlistmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
QThread* q_virtualkeyboardselectionlistmodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param thread QThread*
///
bool q_virtualkeyboardselectionlistmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param interval int
///
int32_t q_virtualkeyboardselectionlistmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboardselectionlistmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param id int
///
void q_virtualkeyboardselectionlistmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboardselectionlistmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboardselectionlistmodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param parent QObject*
///
void q_virtualkeyboardselectionlistmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param filterObj QObject*
///
void q_virtualkeyboardselectionlistmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param obj QObject*
///
void q_virtualkeyboardselectionlistmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardselectionlistmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboardselectionlistmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardselectionlistmodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardselectionlistmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboardselectionlistmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
bool q_virtualkeyboardselectionlistmodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param receiver QObject*
///
bool q_virtualkeyboardselectionlistmodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboardselectionlistmodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboardselectionlistmodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param name const char*
///
QVariant* q_virtualkeyboardselectionlistmodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
const char** q_virtualkeyboardselectionlistmodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
QBindingStorage* q_virtualkeyboardselectionlistmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QVirtualKeyboardSelectionListModel*
///
const QBindingStorage* q_virtualkeyboardselectionlistmodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self)
///
void q_virtualkeyboardselectionlistmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param classname const char*
///
bool q_virtualkeyboardselectionlistmodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardselectionlistmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardselectionlistmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboardselectionlistmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboardselectionlistmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboardselectionlistmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param signal const char*
///
bool q_virtualkeyboardselectionlistmodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboardselectionlistmodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardselectionlistmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardSelectionListModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardselectionlistmodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param param1 QObject*
///
void q_virtualkeyboardselectionlistmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QObject* param1)
///
void q_virtualkeyboardselectionlistmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* parent, int first, int last)
///
void q_virtualkeyboardselectionlistmodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self)
///
void q_virtualkeyboardselectionlistmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self)
///
void q_virtualkeyboardselectionlistmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_virtualkeyboardselectionlistmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_virtualkeyboardselectionlistmodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_virtualkeyboardselectionlistmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_virtualkeyboardselectionlistmodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardSelectionListModel*
/// @param callback void func(QVirtualKeyboardSelectionListModel* self, const char* objectName)
///
void q_virtualkeyboardselectionlistmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#dtor.QVirtualKeyboardSelectionListModel)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardSelectionListModel*
///
void q_virtualkeyboardselectionlistmodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#public-types)

typedef enum {
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_TYPE_WORDCANDIDATELIST = 0
} QVirtualKeyboardSelectionListModel__Type;

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#public-types)

typedef enum {
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_ROLE_DISPLAY = 0,
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_ROLE_DISPLAYROLE = 0,
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_ROLE_WORDCOMPLETIONLENGTH = 257,
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_ROLE_WORDCOMPLETIONLENGTHROLE = 257,
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_ROLE_DICTIONARY = 258,
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_ROLE_CANREMOVESUGGESTION = 259
} QVirtualKeyboardSelectionListModel__Role;

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardselectionlistmodel.html#public-types)

typedef enum {
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_DICTIONARYTYPE_DEFAULT = 0,
    QVIRTUALKEYBOARDSELECTIONLISTMODEL_DICTIONARYTYPE_USER = 1
} QVirtualKeyboardSelectionListModel__DictionaryType;

#endif
