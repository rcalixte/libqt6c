#pragma once
#ifndef SRCQT6C_LIBQSORTFILTERPROXYMODEL_H
#define SRCQT6C_LIBQSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqabstractproxymodel.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqdatastream.h"
#include "libqitemselectionmodel.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqregularexpression.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qsortfilterproxymodel.html

/// q_sortfilterproxymodel_new constructs a new QSortFilterProxyModel object.
///
///
QSortFilterProxyModel* q_sortfilterproxymodel_new();

/// q_sortfilterproxymodel_new2 constructs a new QSortFilterProxyModel object.
///
/// ``` QObject* parent ```
QSortFilterProxyModel* q_sortfilterproxymodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSortFilterProxyModel* self ```
QMetaObject* q_sortfilterproxymodel_meta_object(void* self);

/// ``` QSortFilterProxyModel* self, const char* param1 ```
void* q_sortfilterproxymodel_metacast(void* self, const char* param1);

/// ``` QSortFilterProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sortfilterproxymodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_sortfilterproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sortfilterproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sortfilterproxymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// ``` QSortFilterProxyModel* self, QAbstractItemModel* sourceModel ```
void q_sortfilterproxymodel_set_source_model(void* self, void* sourceModel);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QAbstractItemModel*) ```
void q_sortfilterproxymodel_on_set_source_model(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QAbstractItemModel* sourceModel ```
void q_sortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_sortfilterproxymodel_map_to_source(void* self, void* proxyIndex);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_sortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_sortfilterproxymodel_map_from_source(void* self, void* sourceIndex);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_sortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// ``` QSortFilterProxyModel* self, QItemSelection* proxySelection ```
QItemSelection* q_sortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QItemSelection* (*slot)(QSortFilterProxyModel*, QItemSelection*) ```
void q_sortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QItemSelection* proxySelection ```
QItemSelection* q_sortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// ``` QSortFilterProxyModel* self, QItemSelection* sourceSelection ```
QItemSelection* q_sortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QItemSelection* (*slot)(QSortFilterProxyModel*, QItemSelection*) ```
void q_sortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QItemSelection* sourceSelection ```
QItemSelection* q_sortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
///
/// ``` QSortFilterProxyModel* self ```
QRegularExpression* q_sortfilterproxymodel_filter_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_filter_key_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
///
/// ``` QSortFilterProxyModel* self, int column ```
void q_sortfilterproxymodel_set_filter_key_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_filter_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity cs ```
void q_sortfilterproxymodel_set_filter_case_sensitivity(void* self, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_sort_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity cs ```
void q_sortfilterproxymodel_set_sort_case_sensitivity(void* self, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_sort_locale_aware(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
///
/// ``` QSortFilterProxyModel* self, bool on ```
void q_sortfilterproxymodel_set_sort_locale_aware(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortColumn)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_sort_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortOrder)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_sort_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_dynamic_sort_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
///
/// ``` QSortFilterProxyModel* self, bool enable ```
void q_sortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_sort_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
///
/// ``` QSortFilterProxyModel* self, int role ```
void q_sortfilterproxymodel_set_sort_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_filter_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
///
/// ``` QSortFilterProxyModel* self, int role ```
void q_sortfilterproxymodel_set_filter_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_recursive_filtering_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
///
/// ``` QSortFilterProxyModel* self, bool recursive ```
void q_sortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_auto_accept_child_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
///
/// ``` QSortFilterProxyModel* self, bool accept ```
void q_sortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// ``` QSortFilterProxyModel* self, const char* pattern ```
void q_sortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// ``` QSortFilterProxyModel* self, QRegularExpression* regularExpression ```
void q_sortfilterproxymodel_set_filter_regular_expression_with_regular_expression(void* self, void* regularExpression);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
///
/// ``` QSortFilterProxyModel* self, const char* pattern ```
void q_sortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
///
/// ``` QSortFilterProxyModel* self, const char* pattern ```
void q_sortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// ``` QSortFilterProxyModel* self, int source_row, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_filter_accepts_row(void* self, bool (*slot)(void*, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int source_row, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// ``` QSortFilterProxyModel* self, int source_column, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_filter_accepts_column(void* self, bool (*slot)(void*, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int source_column, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* source_left, QModelIndex* source_right ```
bool q_sortfilterproxymodel_less_than(void* self, void* source_left, void* source_right);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, QModelIndex*) ```
void q_sortfilterproxymodel_on_less_than(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* source_left, QModelIndex* source_right ```
bool q_sortfilterproxymodel_qbase_less_than(void* self, void* source_left, void* source_right);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate_filter(void* self);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_invalidate_filter(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_invalidate_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate_rows_filter(void* self);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_invalidate_rows_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate_columns_filter(void* self);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_invalidate_columns_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_sortfilterproxymodel_index(void* self, int row, int column, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_sortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* child ```
QModelIndex* q_sortfilterproxymodel_parent(void* self, void* child);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* child ```
QModelIndex* q_sortfilterproxymodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_sortfilterproxymodel_sibling(void* self, int row, int column, void* idx);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_sortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_row_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_column_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_has_children(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, int role ```
QVariant* q_sortfilterproxymodel_data(void* self, void* index, int role);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QVariant* (*slot)(QSortFilterProxyModel*, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, int role ```
QVariant* q_sortfilterproxymodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_sortfilterproxymodel_set_data(void* self, void* index, void* value, int role);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, QVariant*, int) ```
void q_sortfilterproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_sortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_sortfilterproxymodel_header_data(void* self, int section, int64_t orientation, int role);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QVariant* (*slot)(QSortFilterProxyModel*, int, enum Qt__Orientation, int) ```
void q_sortfilterproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_sortfilterproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_sortfilterproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_sortfilterproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_sortfilterproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_sortfilterproxymodel_mime_data(void* self, void* indexes[]);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QMimeData* (*slot)(QSortFilterProxyModel*, QModelIndex*[]) ```
void q_sortfilterproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_sortfilterproxymodel_qbase_mime_data(void* self, void* indexes[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
void q_sortfilterproxymodel_fetch_more(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
void q_sortfilterproxymodel_qbase_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_can_fetch_more(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
int64_t q_sortfilterproxymodel_flags(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int64_t (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
int64_t q_sortfilterproxymodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QModelIndex* q_sortfilterproxymodel_buddy(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QModelIndex* q_sortfilterproxymodel_qbase_buddy(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_sortfilterproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QSize* q_sortfilterproxymodel_span(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QSize* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QSize* q_sortfilterproxymodel_qbase_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
///
/// ``` QSortFilterProxyModel* self, int column, enum Qt__SortOrder order ```
void q_sortfilterproxymodel_sort(void* self, int column, int64_t order);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, int, enum Qt__SortOrder) ```
void q_sortfilterproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int column, enum Qt__SortOrder order ```
void q_sortfilterproxymodel_qbase_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// ``` QSortFilterProxyModel* self ```
const char** q_sortfilterproxymodel_mime_types(void* self);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, const char** (*slot)() ```
void q_sortfilterproxymodel_on_mime_types(void* self, const char** (*slot)());

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
const char** q_sortfilterproxymodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_supported_drop_actions(void* self);

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int64_t (*slot)() ```
void q_sortfilterproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// ``` QSortFilterProxyModel* self, bool dynamicSortFilter ```
void q_sortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity filterCaseSensitivity ```
void q_sortfilterproxymodel_filter_case_sensitivity_changed(void* self, int64_t filterCaseSensitivity);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, enum Qt__CaseSensitivity) ```
void q_sortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity sortCaseSensitivity ```
void q_sortfilterproxymodel_sort_case_sensitivity_changed(void* self, int64_t sortCaseSensitivity);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, enum Qt__CaseSensitivity) ```
void q_sortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// ``` QSortFilterProxyModel* self, bool sortLocaleAware ```
void q_sortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// ``` QSortFilterProxyModel* self, int sortRole ```
void q_sortfilterproxymodel_sort_role_changed(void* self, int sortRole);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, int) ```
void q_sortfilterproxymodel_on_sort_role_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// ``` QSortFilterProxyModel* self, int filterRole ```
void q_sortfilterproxymodel_filter_role_changed(void* self, int filterRole);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, int) ```
void q_sortfilterproxymodel_on_filter_role_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// ``` QSortFilterProxyModel* self, bool recursiveFilteringEnabled ```
void q_sortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// ``` QSortFilterProxyModel* self, bool autoAcceptChildRows ```
void q_sortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows);

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sortfilterproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sortfilterproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// ``` QSortFilterProxyModel* self ```
QAbstractItemModel* q_sortfilterproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QSortFilterProxyModel* self, int row, int column ```
bool q_sortfilterproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QSortFilterProxyModel* self, int row ```
bool q_sortfilterproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QSortFilterProxyModel* self, int column ```
bool q_sortfilterproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QSortFilterProxyModel* self, int row ```
bool q_sortfilterproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QSortFilterProxyModel* self, int column ```
bool q_sortfilterproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
bool q_sortfilterproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_sortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_sortfilterproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QSortFilterProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_sortfilterproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_sortfilterproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_sortfilterproxymodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_sortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QSortFilterProxyModel* self, int row, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QSortFilterProxyModel* self, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QSortFilterProxyModel* self, int row, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QSortFilterProxyModel* self, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, int options ```
bool q_sortfilterproxymodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_sortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_sortfilterproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[] ```
void q_sortfilterproxymodel_layout_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_sortfilterproxymodel_on_layout_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_sortfilterproxymodel_layout_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_sortfilterproxymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[] ```
void q_sortfilterproxymodel_layout_about_to_be_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_sortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_sortfilterproxymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_sortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSortFilterProxyModel* self ```
const char* q_sortfilterproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSortFilterProxyModel* self, char* name ```
void q_sortfilterproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSortFilterProxyModel* self, bool b ```
bool q_sortfilterproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSortFilterProxyModel* self ```
QThread* q_sortfilterproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSortFilterProxyModel* self, QThread* thread ```
void q_sortfilterproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSortFilterProxyModel* self, int interval ```
int32_t q_sortfilterproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSortFilterProxyModel* self, int id ```
void q_sortfilterproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSortFilterProxyModel* self ```
libqt_list /* of QObject* */ q_sortfilterproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSortFilterProxyModel* self, QObject* parent ```
void q_sortfilterproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSortFilterProxyModel* self, QObject* filterObj ```
void q_sortfilterproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSortFilterProxyModel* self, QObject* obj ```
void q_sortfilterproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sortfilterproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSortFilterProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sortfilterproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sortfilterproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sortfilterproxymodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSortFilterProxyModel* self, const char* name, QVariant* value ```
bool q_sortfilterproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSortFilterProxyModel* self, const char* name ```
QVariant* q_sortfilterproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSortFilterProxyModel* self ```
const char** q_sortfilterproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSortFilterProxyModel* self ```
QBindingStorage* q_sortfilterproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSortFilterProxyModel* self ```
QBindingStorage* q_sortfilterproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QObject*) ```
void q_sortfilterproxymodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSortFilterProxyModel* self, const char* classname ```
bool q_sortfilterproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSortFilterProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sortfilterproxymodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sortfilterproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSortFilterProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSortFilterProxyModel* self, QObject* param1 ```
void q_sortfilterproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_sortfilterproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)() ```
void q_sortfilterproxymodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_sortfilterproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_sortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_sortfilterproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
bool q_sortfilterproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
bool q_sortfilterproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int64_t (*slot)() ```
void q_sortfilterproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_map /* of int to char* */ q_sortfilterproxymodel_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_map /* of int to char* */ q_sortfilterproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_sortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_sortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_sortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_sortfilterproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
bool q_sortfilterproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
bool q_sortfilterproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QEvent*) ```
void q_sortfilterproxymodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QObject* watched, QEvent* event ```
bool q_sortfilterproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QObject* watched, QEvent* event ```
bool q_sortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QObject*, QEvent*) ```
void q_sortfilterproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QTimerEvent* event ```
void q_sortfilterproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QTimerEvent* event ```
void q_sortfilterproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QTimerEvent*) ```
void q_sortfilterproxymodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QChildEvent* event ```
void q_sortfilterproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QChildEvent* event ```
void q_sortfilterproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QChildEvent*) ```
void q_sortfilterproxymodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
void q_sortfilterproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
void q_sortfilterproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QEvent*) ```
void q_sortfilterproxymodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QMetaMethod*) ```
void q_sortfilterproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QMetaMethod*) ```
void q_sortfilterproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_sortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_sortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int, void*) ```
void q_sortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column ```
QModelIndex* q_sortfilterproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column ```
QModelIndex* q_sortfilterproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int) ```
void q_sortfilterproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_sortfilterproxymodel_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_sortfilterproxymodel_qbase_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*[], QDataStream*) ```
void q_sortfilterproxymodel_on_encode_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_sortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_sortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_sortfilterproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_sortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_sortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_sortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_sortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_sortfilterproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_sortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, QModelIndex*) ```
void q_sortfilterproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_sortfilterproxymodel_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_sortfilterproxymodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*[], QModelIndex*[]) ```
void q_sortfilterproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_sortfilterproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
QObject* q_sortfilterproxymodel_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
QObject* q_sortfilterproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QObject* (*slot)() ```
void q_sortfilterproxymodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)() ```
void q_sortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, const char* signal ```
int32_t q_sortfilterproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, const char* signal ```
int32_t q_sortfilterproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, const char*) ```
void q_sortfilterproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
bool q_sortfilterproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
bool q_sortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QMetaMethod*) ```
void q_sortfilterproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_delete(void* self);

#endif
