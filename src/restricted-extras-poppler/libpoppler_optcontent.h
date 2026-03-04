#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_OPTCONTENT_H
#define SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_OPTCONTENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Poppler__OptContentModel*
///
const QMetaObject* q_poppler__optcontentmodel_meta_object(void* self);

/// @param self Poppler__OptContentModel*
/// @param param1 const char*
///
void* q_poppler__optcontentmodel_metacast(void* self, const char* param1);

/// @param self Poppler__OptContentModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_poppler__optcontentmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_poppler__optcontentmodel_tr(const char* s);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_poppler__optcontentmodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param child QModelIndex*
///
QModelIndex* q_poppler__optcontentmodel_parent(void* self, void* child);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param parent QModelIndex*
///
int32_t q_poppler__optcontentmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param parent QModelIndex*
///
int32_t q_poppler__optcontentmodel_column_count(void* self, void* parent);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_poppler__optcontentmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_poppler__optcontentmodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_poppler__optcontentmodel_flags(void* self, void* index);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_poppler__optcontentmodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// @param self Poppler__OptContentModel*
/// @param link Poppler__LinkOCGState*
///
void q_poppler__optcontentmodel_apply_link(void* self, void* link);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_poppler__optcontentmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_poppler__optcontentmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param column int
///
bool q_poppler__optcontentmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_poppler__optcontentmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self Poppler__OptContentModel*
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// @param self Poppler__OptContentModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_poppler__optcontentmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

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
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_poppler__optcontentmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_poppler__optcontentmodel_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
///
bool q_poppler__optcontentmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__OptContentModel*
///
const char** q_poppler__optcontentmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// @param self Poppler__OptContentModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_poppler__optcontentmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// @param self Poppler__OptContentModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// @param self Poppler__OptContentModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// @param self Poppler__OptContentModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_poppler__optcontentmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// @param self Poppler__OptContentModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_poppler__optcontentmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// @param self Poppler__OptContentModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// @param self Poppler__OptContentModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// @param self Poppler__OptContentModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_poppler__optcontentmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// @param self Poppler__OptContentModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_poppler__optcontentmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self Poppler__OptContentModel*
/// @param row int
///
bool q_poppler__optcontentmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self Poppler__OptContentModel*
/// @param column int
///
bool q_poppler__optcontentmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self Poppler__OptContentModel*
/// @param row int
///
bool q_poppler__optcontentmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self Poppler__OptContentModel*
/// @param column int
///
bool q_poppler__optcontentmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self Poppler__OptContentModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_poppler__optcontentmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self Poppler__OptContentModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_poppler__optcontentmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// @param self Poppler__OptContentModel*
/// @param parent QModelIndex*
///
void q_poppler__optcontentmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// @param self Poppler__OptContentModel*
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// @param self Poppler__OptContentModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_poppler__optcontentmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
///
QModelIndex* q_poppler__optcontentmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// @param self Poppler__OptContentModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_poppler__optcontentmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
///
QSize* q_poppler__optcontentmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
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
/// @param self Poppler__OptContentModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_poppler__optcontentmodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
///
bool q_poppler__optcontentmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_poppler__optcontentmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self Poppler__OptContentModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_poppler__optcontentmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_poppler__optcontentmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self Poppler__OptContentModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_poppler__optcontentmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_poppler__optcontentmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self)
///
void q_poppler__optcontentmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self)
///
void q_poppler__optcontentmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// @param self Poppler__OptContentModel*
///
bool q_poppler__optcontentmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self Poppler__OptContentModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self Poppler__OptContentModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self Poppler__OptContentModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_poppler__optcontentmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self Poppler__OptContentModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_poppler__optcontentmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self Poppler__OptContentModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_poppler__optcontentmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_poppler__optcontentmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self Poppler__OptContentModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_poppler__optcontentmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_poppler__optcontentmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self Poppler__OptContentModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_poppler__optcontentmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_poppler__optcontentmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self Poppler__OptContentModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_poppler__optcontentmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_poppler__optcontentmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self Poppler__OptContentModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_poppler__optcontentmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_poppler__optcontentmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Poppler__OptContentModel*
/// @param event QEvent*
///
bool q_poppler__optcontentmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Poppler__OptContentModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_poppler__optcontentmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__OptContentModel*
///
const char* q_poppler__optcontentmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Poppler__OptContentModel*
/// @param name const char*
///
void q_poppler__optcontentmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Poppler__OptContentModel*
///
bool q_poppler__optcontentmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Poppler__OptContentModel*
///
bool q_poppler__optcontentmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Poppler__OptContentModel*
///
bool q_poppler__optcontentmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Poppler__OptContentModel*
///
bool q_poppler__optcontentmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Poppler__OptContentModel*
/// @param b bool
///
bool q_poppler__optcontentmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Poppler__OptContentModel*
///
QThread* q_poppler__optcontentmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Poppler__OptContentModel*
/// @param thread QThread*
///
bool q_poppler__optcontentmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__OptContentModel*
/// @param interval int
///
int32_t q_poppler__optcontentmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__OptContentModel*
/// @param time int64_t of nanoseconds
///
int32_t q_poppler__optcontentmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Poppler__OptContentModel*
/// @param id int
///
void q_poppler__optcontentmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Poppler__OptContentModel*
/// @param id enum Qt__TimerId
///
void q_poppler__optcontentmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Poppler__OptContentModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_poppler__optcontentmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Poppler__OptContentModel*
/// @param parent QObject*
///
void q_poppler__optcontentmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Poppler__OptContentModel*
/// @param filterObj QObject*
///
void q_poppler__optcontentmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Poppler__OptContentModel*
/// @param obj QObject*
///
void q_poppler__optcontentmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_poppler__optcontentmodel_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_poppler__optcontentmodel_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Poppler__OptContentModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_poppler__optcontentmodel_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_poppler__optcontentmodel_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_poppler__optcontentmodel_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Poppler__OptContentModel*
///
bool q_poppler__optcontentmodel_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Poppler__OptContentModel*
/// @param receiver QObject*
///
bool q_poppler__optcontentmodel_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_poppler__optcontentmodel_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Poppler__OptContentModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_poppler__optcontentmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Poppler__OptContentModel*
/// @param name const char*
///
QVariant* q_poppler__optcontentmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__OptContentModel*
///
const char** q_poppler__optcontentmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Poppler__OptContentModel*
///
QBindingStorage* q_poppler__optcontentmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Poppler__OptContentModel*
///
const QBindingStorage* q_poppler__optcontentmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self)
///
void q_poppler__optcontentmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Poppler__OptContentModel*
/// @param classname const char*
///
bool q_poppler__optcontentmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__OptContentModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_poppler__optcontentmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__OptContentModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_poppler__optcontentmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_poppler__optcontentmodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_poppler__optcontentmodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Poppler__OptContentModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_poppler__optcontentmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Poppler__OptContentModel*
/// @param signal const char*
///
bool q_poppler__optcontentmodel_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Poppler__OptContentModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_poppler__optcontentmodel_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Poppler__OptContentModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_poppler__optcontentmodel_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Poppler__OptContentModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_poppler__optcontentmodel_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__OptContentModel*
/// @param param1 QObject*
///
void q_poppler__optcontentmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QObject* param1)
///
void q_poppler__optcontentmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* parent, int first, int last)
///
void q_poppler__optcontentmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self)
///
void q_poppler__optcontentmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self)
///
void q_poppler__optcontentmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_poppler__optcontentmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_poppler__optcontentmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_poppler__optcontentmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_poppler__optcontentmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__OptContentModel*
/// @param callback void func(Poppler__OptContentModel* self, const char* objectName)
///
void q_poppler__optcontentmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OptContentModel.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__OptContentModel*
///
void q_poppler__optcontentmodel_delete(void* self);

#endif
