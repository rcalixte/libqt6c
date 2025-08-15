#pragma once
#ifndef SRCQT6C_LIBQSORTFILTERPROXYMODEL_H
#define SRCQT6C_LIBQSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsortfilterproxymodel.html

/// q_sortfilterproxymodel_new constructs a new QSortFilterProxyModel object.
///
QSortFilterProxyModel* q_sortfilterproxymodel_new();

/// q_sortfilterproxymodel_new2 constructs a new QSortFilterProxyModel object.
///
/// @param parent QObject*
QSortFilterProxyModel* q_sortfilterproxymodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSortFilterProxyModel*
const QMetaObject* q_sortfilterproxymodel_meta_object(void* self);

/// @param self QSortFilterProxyModel*
/// @param param1 const char*
void* q_sortfilterproxymodel_metacast(void* self, const char* param1);

/// @param self QSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sortfilterproxymodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback int32_t fn(QSortFilterProxyModel*, enum QMetaObject__Call, int, void*)
void q_sortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sortfilterproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_sortfilterproxymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// @param self QSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
void q_sortfilterproxymodel_set_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QAbstractItemModel*)
void q_sortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
void q_sortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// @param self QSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
QModelIndex* q_sortfilterproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
QModelIndex* q_sortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// @param self QSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
QModelIndex* q_sortfilterproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
QModelIndex* q_sortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// @param self QSortFilterProxyModel*
/// @param proxySelection QItemSelection*
QItemSelection* q_sortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QItemSelection* fn(QSortFilterProxyModel*, QItemSelection*)
void q_sortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param proxySelection QItemSelection*
QItemSelection* q_sortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// @param self QSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
QItemSelection* q_sortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QItemSelection* fn(QSortFilterProxyModel*, QItemSelection*)
void q_sortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
QItemSelection* q_sortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
///
/// @param self QSortFilterProxyModel*
QRegularExpression* q_sortfilterproxymodel_filter_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
///
/// @param self QSortFilterProxyModel*
int32_t q_sortfilterproxymodel_filter_key_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
///
/// @param self QSortFilterProxyModel*
/// @param column int
void q_sortfilterproxymodel_set_filter_key_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
///
/// @param self QSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
int64_t q_sortfilterproxymodel_filter_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
///
/// @param self QSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
void q_sortfilterproxymodel_set_filter_case_sensitivity(void* self, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
///
/// @param self QSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
int64_t q_sortfilterproxymodel_sort_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
///
/// @param self QSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
void q_sortfilterproxymodel_set_sort_case_sensitivity(void* self, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_is_sort_locale_aware(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
///
/// @param self QSortFilterProxyModel*
/// @param on bool
void q_sortfilterproxymodel_set_sort_locale_aware(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortColumn)
///
/// @param self QSortFilterProxyModel*
int32_t q_sortfilterproxymodel_sort_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortOrder)
///
/// @param self QSortFilterProxyModel*
///
/// @return enum Qt__SortOrder
int64_t q_sortfilterproxymodel_sort_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_dynamic_sort_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
///
/// @param self QSortFilterProxyModel*
/// @param enable bool
void q_sortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
///
/// @param self QSortFilterProxyModel*
int32_t q_sortfilterproxymodel_sort_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
///
/// @param self QSortFilterProxyModel*
/// @param role int
void q_sortfilterproxymodel_set_sort_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
///
/// @param self QSortFilterProxyModel*
int32_t q_sortfilterproxymodel_filter_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
///
/// @param self QSortFilterProxyModel*
/// @param role int
void q_sortfilterproxymodel_set_filter_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_is_recursive_filtering_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
///
/// @param self QSortFilterProxyModel*
/// @param recursive bool
void q_sortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_auto_accept_child_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
///
/// @param self QSortFilterProxyModel*
/// @param accept bool
void q_sortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self QSortFilterProxyModel*
/// @param pattern const char*
void q_sortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self QSortFilterProxyModel*
/// @param regularExpression QRegularExpression*
void q_sortfilterproxymodel_set_filter_regular_expression2(void* self, void* regularExpression);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
///
/// @param self QSortFilterProxyModel*
/// @param pattern const char*
void q_sortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
///
/// @param self QSortFilterProxyModel*
/// @param pattern const char*
void q_sortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// @param self QSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
bool q_sortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, QModelIndex*)
void q_sortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
bool q_sortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// @param self QSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
bool q_sortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, QModelIndex*)
void q_sortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
bool q_sortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
///
/// @param self QSortFilterProxyModel*
/// @param source_left QModelIndex*
/// @param source_right QModelIndex*
bool q_sortfilterproxymodel_less_than(void* self, void* source_left, void* source_right);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void q_sortfilterproxymodel_on_less_than(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param source_left QModelIndex*
/// @param source_right QModelIndex*
bool q_sortfilterproxymodel_qbase_less_than(void* self, void* source_left, void* source_right);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_invalidate_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_invalidate_filter(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_invalidate_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_invalidate_rows_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_invalidate_rows_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_invalidate_columns_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_invalidate_columns_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_sortfilterproxymodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_sortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// @param self QSortFilterProxyModel*
/// @param child QModelIndex*
QModelIndex* q_sortfilterproxymodel_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param child QModelIndex*
QModelIndex* q_sortfilterproxymodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_sortfilterproxymodel_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_sortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t q_sortfilterproxymodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback int32_t fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t q_sortfilterproxymodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t q_sortfilterproxymodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback int32_t fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t q_sortfilterproxymodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_sortfilterproxymodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QVariant* fn(QSortFilterProxyModel*, QModelIndex*, int)
void q_sortfilterproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_sortfilterproxymodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_sortfilterproxymodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*, QVariant*, int)
void q_sortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_sortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// @param self QSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_sortfilterproxymodel_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QVariant* fn(QSortFilterProxyModel*, int, enum Qt__Orientation, int)
void q_sortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int64_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_sortfilterproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// @param self QSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_sortfilterproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, enum Qt__Orientation, QVariant*, int)
void q_sortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int64_t, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_sortfilterproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// @param self QSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_sortfilterproxymodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QMimeData* fn(QSortFilterProxyModel*, libqt_list /* of QModelIndex* */)
void q_sortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_sortfilterproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// @param self QSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
void q_sortfilterproxymodel_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
void q_sortfilterproxymodel_qbase_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_sortfilterproxymodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback int64_t fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_flags(void* self, int64_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_sortfilterproxymodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
QModelIndex* q_sortfilterproxymodel_buddy(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
QModelIndex* q_sortfilterproxymodel_qbase_buddy(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// @param self QSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback libqt_list /* of QModelIndex* */ fn(QSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, flag of enum Qt__MatchFlag)
void q_sortfilterproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
QSize* q_sortfilterproxymodel_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback QSize* fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
QSize* q_sortfilterproxymodel_qbase_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_sortfilterproxymodel_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, int, enum Qt__SortOrder)
void q_sortfilterproxymodel_on_sort(void* self, void (*callback)(void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_sortfilterproxymodel_qbase_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSortFilterProxyModel*
const char** q_sortfilterproxymodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback const char** fn()
void q_sortfilterproxymodel_on_mime_types(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
const char** q_sortfilterproxymodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// @param self QSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_sortfilterproxymodel_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QSortFilterProxyModel*
/// @param callback int64_t fn()
void q_sortfilterproxymodel_on_supported_drop_actions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_sortfilterproxymodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self QSortFilterProxyModel*
/// @param dynamicSortFilter bool
void q_sortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, bool)
void q_sortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self QSortFilterProxyModel*
/// @param filterCaseSensitivity enum Qt__CaseSensitivity
void q_sortfilterproxymodel_filter_case_sensitivity_changed(void* self, int64_t filterCaseSensitivity);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, enum Qt__CaseSensitivity)
void q_sortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self QSortFilterProxyModel*
/// @param sortCaseSensitivity enum Qt__CaseSensitivity
void q_sortfilterproxymodel_sort_case_sensitivity_changed(void* self, int64_t sortCaseSensitivity);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, enum Qt__CaseSensitivity)
void q_sortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self QSortFilterProxyModel*
/// @param sortLocaleAware bool
void q_sortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, bool)
void q_sortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self QSortFilterProxyModel*
/// @param sortRole int
void q_sortfilterproxymodel_sort_role_changed(void* self, int sortRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, int)
void q_sortfilterproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self QSortFilterProxyModel*
/// @param filterRole int
void q_sortfilterproxymodel_filter_role_changed(void* self, int filterRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, int)
void q_sortfilterproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self QSortFilterProxyModel*
/// @param recursiveFilteringEnabled bool
void q_sortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, bool)
void q_sortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self QSortFilterProxyModel*
/// @param autoAcceptChildRows bool
void q_sortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, bool)
void q_sortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_sortfilterproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_sortfilterproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self QSortFilterProxyModel*
QAbstractItemModel* q_sortfilterproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
bool q_sortfilterproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSortFilterProxyModel*
/// @param row int
bool q_sortfilterproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSortFilterProxyModel*
/// @param column int
bool q_sortfilterproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSortFilterProxyModel*
/// @param row int
bool q_sortfilterproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSortFilterProxyModel*
/// @param column int
bool q_sortfilterproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_sortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_sortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
bool q_sortfilterproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void q_sortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void q_sortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSortFilterProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void q_sortfilterproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, enum Qt__Orientation, int, int)
void q_sortfilterproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*)
void q_sortfilterproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*)
void q_sortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool q_sortfilterproxymodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_sortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */)
void q_sortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_sortfilterproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */)
void q_sortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_sortfilterproxymodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void q_sortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_sortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */)
void q_sortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_sortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void q_sortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSortFilterProxyModel*
const char* q_sortfilterproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSortFilterProxyModel*
/// @param name char*
void q_sortfilterproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSortFilterProxyModel*
/// @param b bool
bool q_sortfilterproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSortFilterProxyModel*
QThread* q_sortfilterproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSortFilterProxyModel*
/// @param thread QThread*
bool q_sortfilterproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSortFilterProxyModel*
/// @param interval int
int32_t q_sortfilterproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSortFilterProxyModel*
/// @param id int
void q_sortfilterproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSortFilterProxyModel*
/// @param id enum Qt__TimerId
void q_sortfilterproxymodel_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSortFilterProxyModel*
libqt_list /* of QObject* */ q_sortfilterproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSortFilterProxyModel*
/// @param parent QObject*
void q_sortfilterproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSortFilterProxyModel*
/// @param filterObj QObject*
void q_sortfilterproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSortFilterProxyModel*
/// @param obj QObject*
void q_sortfilterproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_sortfilterproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_sortfilterproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_sortfilterproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_sortfilterproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSortFilterProxyModel*
/// @param name const char*
/// @param value QVariant*
bool q_sortfilterproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSortFilterProxyModel*
/// @param name const char*
QVariant* q_sortfilterproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSortFilterProxyModel*
const char** q_sortfilterproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSortFilterProxyModel*
QBindingStorage* q_sortfilterproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSortFilterProxyModel*
const QBindingStorage* q_sortfilterproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*)
void q_sortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSortFilterProxyModel*
/// @param classname const char*
bool q_sortfilterproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSortFilterProxyModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_sortfilterproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSortFilterProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_sortfilterproxymodel_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sortfilterproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSortFilterProxyModel*
/// @param param1 QObject*
void q_sortfilterproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QObject*)
void q_sortfilterproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
bool q_sortfilterproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn()
void q_sortfilterproxymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback libqt_map /* of int to QVariant* */ fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_sortfilterproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_sortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */)
void q_sortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
bool q_sortfilterproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
bool q_sortfilterproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*)
void q_sortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_sortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void q_sortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_sortfilterproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_sortfilterproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback int64_t fn()
void q_sortfilterproxymodel_on_supported_drag_actions(void* self, int64_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
libqt_map /* of int to char* */ q_sortfilterproxymodel_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
libqt_map /* of int to char* */ q_sortfilterproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback libqt_map /* of int to char* */ fn()
void q_sortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_sortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_sortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_sortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_sortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_sortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_sortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*)
void q_sortfilterproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QEvent*
bool q_sortfilterproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QEvent*
bool q_sortfilterproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QEvent*)
void q_sortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_sortfilterproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_sortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QObject*, QEvent*)
void q_sortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QTimerEvent*
void q_sortfilterproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QTimerEvent*
void q_sortfilterproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QTimerEvent*)
void q_sortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QChildEvent*
void q_sortfilterproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QChildEvent*
void q_sortfilterproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QChildEvent*)
void q_sortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QEvent*
void q_sortfilterproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param event QEvent*
void q_sortfilterproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QEvent*)
void q_sortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal QMetaMethod*
void q_sortfilterproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal QMetaMethod*
void q_sortfilterproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QMetaMethod*)
void q_sortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal QMetaMethod*
void q_sortfilterproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal QMetaMethod*
void q_sortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QMetaMethod*)
void q_sortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
QModelIndex* q_sortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
QModelIndex* q_sortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, int, int, void*)
void q_sortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
QModelIndex* q_sortfilterproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
QModelIndex* q_sortfilterproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback QModelIndex* fn(QSortFilterProxyModel*, int, int)
void q_sortfilterproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_sortfilterproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_sortfilterproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*)
void q_sortfilterproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_sortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_sortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, int, int, QModelIndex*, QDataStream*)
void q_sortfilterproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_sortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_sortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_sortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_sortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_sortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn()
void q_sortfilterproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_sortfilterproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_sortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void q_sortfilterproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_sortfilterproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_sortfilterproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)
void q_sortfilterproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback libqt_list /* of QModelIndex* */ fn()
void q_sortfilterproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
QObject* q_sortfilterproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
QObject* q_sortfilterproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback QObject* fn()
void q_sortfilterproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
int32_t q_sortfilterproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
int32_t q_sortfilterproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback int32_t fn()
void q_sortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal const char*
int32_t q_sortfilterproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal const char*
int32_t q_sortfilterproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback int32_t fn(QSortFilterProxyModel*, const char*)
void q_sortfilterproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal QMetaMethod*
bool q_sortfilterproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param signal QMetaMethod*
bool q_sortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSortFilterProxyModel*
/// @param callback bool fn(QSortFilterProxyModel*, QMetaMethod*)
void q_sortfilterproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*)
void q_sortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int)
void q_sortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*)
void q_sortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*)
void q_sortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_sortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSortFilterProxyModel*
/// @param callback void fn(QSortFilterProxyModel*, const char*)
void q_sortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dtor.QSortFilterProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self QSortFilterProxyModel*
void q_sortfilterproxymodel_delete(void* self);

#endif
