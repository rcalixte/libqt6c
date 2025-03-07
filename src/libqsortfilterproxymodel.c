#include "libqabstractitemmodel.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdatastream.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqregularexpression.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsortfilterproxymodel.hpp"
#include "libqsortfilterproxymodel.h"

/// https://doc.qt.io/qt-6/qsortfilterproxymodel.html

/// q_sortfilterproxymodel_new constructs a new QSortFilterProxyModel object.
///
///
QSortFilterProxyModel* q_sortfilterproxymodel_new() {
    return QSortFilterProxyModel_new();
}

/// q_sortfilterproxymodel_new2 constructs a new QSortFilterProxyModel object.
///
/// ``` QObject* parent ```
QSortFilterProxyModel* q_sortfilterproxymodel_new2(void* parent) {
    return QSortFilterProxyModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSortFilterProxyModel* self ```
QMetaObject* q_sortfilterproxymodel_meta_object(void* self) {
    return QSortFilterProxyModel_MetaObject((QSortFilterProxyModel*)self);
}

/// ``` QSortFilterProxyModel* self, const char* param1 ```
void* q_sortfilterproxymodel_metacast(void* self, const char* param1) {
    return QSortFilterProxyModel_Metacast((QSortFilterProxyModel*)self, param1);
}

/// ``` QSortFilterProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sortfilterproxymodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSortFilterProxyModel_Metacall((QSortFilterProxyModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_sortfilterproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSortFilterProxyModel_OnMetacall((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sortfilterproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSortFilterProxyModel_QBaseMetacall((QSortFilterProxyModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sortfilterproxymodel_tr(const char* s) {
    libqt_string _str = QSortFilterProxyModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// ``` QSortFilterProxyModel* self, QAbstractItemModel* sourceModel ```
void q_sortfilterproxymodel_set_source_model(void* self, void* sourceModel) {
    QSortFilterProxyModel_SetSourceModel((QSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QAbstractItemModel*) ```
void q_sortfilterproxymodel_on_set_source_model(void* self, void (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnSetSourceModel((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QAbstractItemModel* sourceModel ```
void q_sortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    QSortFilterProxyModel_QBaseSetSourceModel((QSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_sortfilterproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QSortFilterProxyModel_MapToSource((QSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnMapToSource((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_sortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return QSortFilterProxyModel_QBaseMapToSource((QSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_sortfilterproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QSortFilterProxyModel_MapFromSource((QSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnMapFromSource((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_sortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return QSortFilterProxyModel_QBaseMapFromSource((QSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// ``` QSortFilterProxyModel* self, QItemSelection* proxySelection ```
QItemSelection* q_sortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection) {
    return QSortFilterProxyModel_MapSelectionToSource((QSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QItemSelection* (*slot)(QSortFilterProxyModel*, QItemSelection*) ```
void q_sortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnMapSelectionToSource((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QItemSelection* proxySelection ```
QItemSelection* q_sortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection) {
    return QSortFilterProxyModel_QBaseMapSelectionToSource((QSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// ``` QSortFilterProxyModel* self, QItemSelection* sourceSelection ```
QItemSelection* q_sortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection) {
    return QSortFilterProxyModel_MapSelectionFromSource((QSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QItemSelection* (*slot)(QSortFilterProxyModel*, QItemSelection*) ```
void q_sortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnMapSelectionFromSource((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QItemSelection* sourceSelection ```
QItemSelection* q_sortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection) {
    return QSortFilterProxyModel_QBaseMapSelectionFromSource((QSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
///
/// ``` QSortFilterProxyModel* self ```
QRegularExpression* q_sortfilterproxymodel_filter_regular_expression(void* self) {
    return QSortFilterProxyModel_FilterRegularExpression((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_filter_key_column(void* self) {
    return QSortFilterProxyModel_FilterKeyColumn((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
///
/// ``` QSortFilterProxyModel* self, int column ```
void q_sortfilterproxymodel_set_filter_key_column(void* self, int column) {
    QSortFilterProxyModel_SetFilterKeyColumn((QSortFilterProxyModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_filter_case_sensitivity(void* self) {
    return QSortFilterProxyModel_FilterCaseSensitivity((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity cs ```
void q_sortfilterproxymodel_set_filter_case_sensitivity(void* self, int64_t cs) {
    QSortFilterProxyModel_SetFilterCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_sort_case_sensitivity(void* self) {
    return QSortFilterProxyModel_SortCaseSensitivity((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity cs ```
void q_sortfilterproxymodel_set_sort_case_sensitivity(void* self, int64_t cs) {
    QSortFilterProxyModel_SetSortCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_sort_locale_aware(void* self) {
    return QSortFilterProxyModel_IsSortLocaleAware((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
///
/// ``` QSortFilterProxyModel* self, bool on ```
void q_sortfilterproxymodel_set_sort_locale_aware(void* self, bool on) {
    QSortFilterProxyModel_SetSortLocaleAware((QSortFilterProxyModel*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortColumn)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_sort_column(void* self) {
    return QSortFilterProxyModel_SortColumn((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortOrder)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_sort_order(void* self) {
    return QSortFilterProxyModel_SortOrder((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_dynamic_sort_filter(void* self) {
    return QSortFilterProxyModel_DynamicSortFilter((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
///
/// ``` QSortFilterProxyModel* self, bool enable ```
void q_sortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable) {
    QSortFilterProxyModel_SetDynamicSortFilter((QSortFilterProxyModel*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_sort_role(void* self) {
    return QSortFilterProxyModel_SortRole((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
///
/// ``` QSortFilterProxyModel* self, int role ```
void q_sortfilterproxymodel_set_sort_role(void* self, int role) {
    QSortFilterProxyModel_SetSortRole((QSortFilterProxyModel*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_filter_role(void* self) {
    return QSortFilterProxyModel_FilterRole((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
///
/// ``` QSortFilterProxyModel* self, int role ```
void q_sortfilterproxymodel_set_filter_role(void* self, int role) {
    QSortFilterProxyModel_SetFilterRole((QSortFilterProxyModel*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_recursive_filtering_enabled(void* self) {
    return QSortFilterProxyModel_IsRecursiveFilteringEnabled((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
///
/// ``` QSortFilterProxyModel* self, bool recursive ```
void q_sortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive) {
    QSortFilterProxyModel_SetRecursiveFilteringEnabled((QSortFilterProxyModel*)self, recursive);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_auto_accept_child_rows(void* self) {
    return QSortFilterProxyModel_AutoAcceptChildRows((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
///
/// ``` QSortFilterProxyModel* self, bool accept ```
void q_sortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept) {
    QSortFilterProxyModel_SetAutoAcceptChildRows((QSortFilterProxyModel*)self, accept);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// ``` QSortFilterProxyModel* self, const char* pattern ```
void q_sortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterRegularExpression((QSortFilterProxyModel*)self, qstring(pattern));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// ``` QSortFilterProxyModel* self, QRegularExpression* regularExpression ```
void q_sortfilterproxymodel_set_filter_regular_expression_with_regular_expression(void* self, void* regularExpression) {
    QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression((QSortFilterProxyModel*)self, (QRegularExpression*)regularExpression);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
///
/// ``` QSortFilterProxyModel* self, const char* pattern ```
void q_sortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterWildcard((QSortFilterProxyModel*)self, qstring(pattern));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
///
/// ``` QSortFilterProxyModel* self, const char* pattern ```
void q_sortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterFixedString((QSortFilterProxyModel*)self, qstring(pattern));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate(void* self) {
    QSortFilterProxyModel_Invalidate((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// ``` QSortFilterProxyModel* self, int source_row, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return QSortFilterProxyModel_FilterAcceptsRow((QSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_filter_accepts_row(void* self, bool (*slot)(void*, int, void*)) {
    QSortFilterProxyModel_OnFilterAcceptsRow((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int source_row, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return QSortFilterProxyModel_QBaseFilterAcceptsRow((QSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// ``` QSortFilterProxyModel* self, int source_column, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return QSortFilterProxyModel_FilterAcceptsColumn((QSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_filter_accepts_column(void* self, bool (*slot)(void*, int, void*)) {
    QSortFilterProxyModel_OnFilterAcceptsColumn((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int source_column, QModelIndex* source_parent ```
bool q_sortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return QSortFilterProxyModel_QBaseFilterAcceptsColumn((QSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* source_left, QModelIndex* source_right ```
bool q_sortfilterproxymodel_less_than(void* self, void* source_left, void* source_right) {
    return QSortFilterProxyModel_LessThan((QSortFilterProxyModel*)self, (QModelIndex*)source_left, (QModelIndex*)source_right);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, QModelIndex*) ```
void q_sortfilterproxymodel_on_less_than(void* self, bool (*slot)(void*, void*, void*)) {
    QSortFilterProxyModel_OnLessThan((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* source_left, QModelIndex* source_right ```
bool q_sortfilterproxymodel_qbase_less_than(void* self, void* source_left, void* source_right) {
    return QSortFilterProxyModel_QBaseLessThan((QSortFilterProxyModel*)self, (QModelIndex*)source_left, (QModelIndex*)source_right);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate_filter(void* self) {
    QSortFilterProxyModel_InvalidateFilter((QSortFilterProxyModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_invalidate_filter(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnInvalidateFilter((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_invalidate_filter(void* self) {
    QSortFilterProxyModel_QBaseInvalidateFilter((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate_rows_filter(void* self) {
    QSortFilterProxyModel_InvalidateRowsFilter((QSortFilterProxyModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnInvalidateRowsFilter((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_invalidate_rows_filter(void* self) {
    QSortFilterProxyModel_QBaseInvalidateRowsFilter((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_invalidate_columns_filter(void* self) {
    QSortFilterProxyModel_InvalidateColumnsFilter((QSortFilterProxyModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnInvalidateColumnsFilter((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_invalidate_columns_filter(void* self) {
    QSortFilterProxyModel_QBaseInvalidateColumnsFilter((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_sortfilterproxymodel_index(void* self, int row, int column, void* parent) {
    return QSortFilterProxyModel_Index((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnIndex((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_sortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QSortFilterProxyModel_QBaseIndex((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* child ```
QModelIndex* q_sortfilterproxymodel_parent(void* self, void* child) {
    return QSortFilterProxyModel_Parent((QSortFilterProxyModel*)self, (QModelIndex*)child);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnParent((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* child ```
QModelIndex* q_sortfilterproxymodel_qbase_parent(void* self, void* child) {
    return QSortFilterProxyModel_QBaseParent((QSortFilterProxyModel*)self, (QModelIndex*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_sortfilterproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QSortFilterProxyModel_Sibling((QSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnSibling((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_sortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QSortFilterProxyModel_QBaseSibling((QSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_row_count(void* self, void* parent) {
    return QSortFilterProxyModel_RowCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnRowCount((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_qbase_row_count(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseRowCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_column_count(void* self, void* parent) {
    return QSortFilterProxyModel_ColumnCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnColumnCount((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
int32_t q_sortfilterproxymodel_qbase_column_count(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseColumnCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_has_children(void* self, void* parent) {
    return QSortFilterProxyModel_HasChildren((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnHasChildren((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_has_children(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseHasChildren((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, int role ```
QVariant* q_sortfilterproxymodel_data(void* self, void* index, int role) {
    return QSortFilterProxyModel_Data((QSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QVariant* (*slot)(QSortFilterProxyModel*, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QSortFilterProxyModel_OnData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, int role ```
QVariant* q_sortfilterproxymodel_qbase_data(void* self, void* index, int role) {
    return QSortFilterProxyModel_QBaseData((QSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_sortfilterproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QSortFilterProxyModel_SetData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, QVariant*, int) ```
void q_sortfilterproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QSortFilterProxyModel_OnSetData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_sortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QSortFilterProxyModel_QBaseSetData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_sortfilterproxymodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QSortFilterProxyModel_HeaderData((QSortFilterProxyModel*)self, section, orientation, role);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QVariant* (*slot)(QSortFilterProxyModel*, int, enum Qt__Orientation, int) ```
void q_sortfilterproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QSortFilterProxyModel_OnHeaderData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_sortfilterproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QSortFilterProxyModel_QBaseHeaderData((QSortFilterProxyModel*)self, section, orientation, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_sortfilterproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QSortFilterProxyModel_SetHeaderData((QSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_sortfilterproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QSortFilterProxyModel_OnSetHeaderData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_sortfilterproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QSortFilterProxyModel_QBaseSetHeaderData((QSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_sortfilterproxymodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QSortFilterProxyModel_MimeData((QSortFilterProxyModel*)self, indexes_list);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QMimeData* (*slot)(QSortFilterProxyModel*, QModelIndex*[]) ```
void q_sortfilterproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnMimeData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_sortfilterproxymodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QSortFilterProxyModel_QBaseMimeData((QSortFilterProxyModel*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_DropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QSortFilterProxyModel_OnDropMimeData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_QBaseDropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_InsertRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnInsertRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_QBaseInsertRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_InsertColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnInsertColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_QBaseInsertColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_RemoveRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnRemoveRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_QBaseRemoveRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_RemoveColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnRemoveColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_QBaseRemoveColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
void q_sortfilterproxymodel_fetch_more(void* self, void* parent) {
    QSortFilterProxyModel_FetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnFetchMore((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
void q_sortfilterproxymodel_qbase_fetch_more(void* self, void* parent) {
    QSortFilterProxyModel_QBaseFetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_can_fetch_more(void* self, void* parent) {
    return QSortFilterProxyModel_CanFetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnCanFetchMore((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseCanFetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
int64_t q_sortfilterproxymodel_flags(void* self, void* index) {
    return QSortFilterProxyModel_Flags((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int64_t (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnFlags((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
int64_t q_sortfilterproxymodel_qbase_flags(void* self, void* index) {
    return QSortFilterProxyModel_QBaseFlags((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QModelIndex* q_sortfilterproxymodel_buddy(void* self, void* index) {
    return QSortFilterProxyModel_Buddy((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnBuddy((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QModelIndex* q_sortfilterproxymodel_qbase_buddy(void* self, void* index) {
    return QSortFilterProxyModel_QBaseBuddy((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QSortFilterProxyModel_Match((QSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_sortfilterproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QSortFilterProxyModel_OnMatch((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QSortFilterProxyModel_QBaseMatch((QSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QSize* q_sortfilterproxymodel_span(void* self, void* index) {
    return QSortFilterProxyModel_Span((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, QSize* (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnSpan((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
QSize* q_sortfilterproxymodel_qbase_span(void* self, void* index) {
    return QSortFilterProxyModel_QBaseSpan((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
///
/// ``` QSortFilterProxyModel* self, int column, enum Qt__SortOrder order ```
void q_sortfilterproxymodel_sort(void* self, int column, int64_t order) {
    QSortFilterProxyModel_Sort((QSortFilterProxyModel*)self, column, order);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, int, enum Qt__SortOrder) ```
void q_sortfilterproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QSortFilterProxyModel_OnSort((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self, int column, enum Qt__SortOrder order ```
void q_sortfilterproxymodel_qbase_sort(void* self, int column, int64_t order) {
    QSortFilterProxyModel_QBaseSort((QSortFilterProxyModel*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// ``` QSortFilterProxyModel* self ```
const char** q_sortfilterproxymodel_mime_types(void* self) {
    libqt_list _arr = QSortFilterProxyModel_MimeTypes((QSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, const char** (*slot)() ```
void q_sortfilterproxymodel_on_mime_types(void* self, const char** (*slot)()) {
    QSortFilterProxyModel_OnMimeTypes((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
const char** q_sortfilterproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QSortFilterProxyModel_QBaseMimeTypes((QSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_supported_drop_actions(void* self) {
    return QSortFilterProxyModel_SupportedDropActions((QSortFilterProxyModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSortFilterProxyModel* self, int64_t (*slot)() ```
void q_sortfilterproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QSortFilterProxyModel_OnSupportedDropActions((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_qbase_supported_drop_actions(void* self) {
    return QSortFilterProxyModel_QBaseSupportedDropActions((QSortFilterProxyModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// ``` QSortFilterProxyModel* self, bool dynamicSortFilter ```
void q_sortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter) {
    QSortFilterProxyModel_DynamicSortFilterChanged((QSortFilterProxyModel*)self, dynamicSortFilter);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*slot)(void*, bool)) {
    QSortFilterProxyModel_Connect_DynamicSortFilterChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity filterCaseSensitivity ```
void q_sortfilterproxymodel_filter_case_sensitivity_changed(void* self, int64_t filterCaseSensitivity) {
    QSortFilterProxyModel_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, filterCaseSensitivity);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, enum Qt__CaseSensitivity) ```
void q_sortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*slot)(void*, int64_t)) {
    QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// ``` QSortFilterProxyModel* self, enum Qt__CaseSensitivity sortCaseSensitivity ```
void q_sortfilterproxymodel_sort_case_sensitivity_changed(void* self, int64_t sortCaseSensitivity) {
    QSortFilterProxyModel_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, sortCaseSensitivity);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, enum Qt__CaseSensitivity) ```
void q_sortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*slot)(void*, int64_t)) {
    QSortFilterProxyModel_Connect_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// ``` QSortFilterProxyModel* self, bool sortLocaleAware ```
void q_sortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware) {
    QSortFilterProxyModel_SortLocaleAwareChanged((QSortFilterProxyModel*)self, sortLocaleAware);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*slot)(void*, bool)) {
    QSortFilterProxyModel_Connect_SortLocaleAwareChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// ``` QSortFilterProxyModel* self, int sortRole ```
void q_sortfilterproxymodel_sort_role_changed(void* self, int sortRole) {
    QSortFilterProxyModel_SortRoleChanged((QSortFilterProxyModel*)self, sortRole);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, int) ```
void q_sortfilterproxymodel_on_sort_role_changed(void* self, void (*slot)(void*, int)) {
    QSortFilterProxyModel_Connect_SortRoleChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// ``` QSortFilterProxyModel* self, int filterRole ```
void q_sortfilterproxymodel_filter_role_changed(void* self, int filterRole) {
    QSortFilterProxyModel_FilterRoleChanged((QSortFilterProxyModel*)self, filterRole);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, int) ```
void q_sortfilterproxymodel_on_filter_role_changed(void* self, void (*slot)(void*, int)) {
    QSortFilterProxyModel_Connect_FilterRoleChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// ``` QSortFilterProxyModel* self, bool recursiveFilteringEnabled ```
void q_sortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled) {
    QSortFilterProxyModel_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, recursiveFilteringEnabled);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// ``` QSortFilterProxyModel* self, bool autoAcceptChildRows ```
void q_sortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows) {
    QSortFilterProxyModel_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, autoAcceptChildRows);
}

/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, bool) ```
void q_sortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*slot)(void*, bool)) {
    QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sortfilterproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QSortFilterProxyModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sortfilterproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSortFilterProxyModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// ``` QSortFilterProxyModel* self ```
QAbstractItemModel* q_sortfilterproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QSortFilterProxyModel* self, int row, int column ```
bool q_sortfilterproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QSortFilterProxyModel* self, int row ```
bool q_sortfilterproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QSortFilterProxyModel* self, int column ```
bool q_sortfilterproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QSortFilterProxyModel* self, int row ```
bool q_sortfilterproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QSortFilterProxyModel* self, int column ```
bool q_sortfilterproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
bool q_sortfilterproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_sortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_sortfilterproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QSortFilterProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_sortfilterproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_sortfilterproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_sortfilterproxymodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_sortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QSortFilterProxyModel* self, int row, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QSortFilterProxyModel* self, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QSortFilterProxyModel* self, int row, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QSortFilterProxyModel* self, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, int options ```
bool q_sortfilterproxymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_sortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_sortfilterproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[] ```
void q_sortfilterproxymodel_layout_changed1(void* self, void* parents[]) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents_list);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_sortfilterproxymodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_sortfilterproxymodel_layout_changed2(void* self, void* parents[], int64_t hint) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents_list, hint);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_sortfilterproxymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[] ```
void q_sortfilterproxymodel_layout_about_to_be_changed1(void* self, void* parents[]) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents_list);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_sortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QSortFilterProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_sortfilterproxymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents_list, hint);
}

/// Inherited from QAbstractItemModel
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_sortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSortFilterProxyModel* self ```
const char* q_sortfilterproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSortFilterProxyModel* self, const char* name ```
void q_sortfilterproxymodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSortFilterProxyModel* self, bool b ```
bool q_sortfilterproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSortFilterProxyModel* self ```
QThread* q_sortfilterproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSortFilterProxyModel* self, QThread* thread ```
void q_sortfilterproxymodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSortFilterProxyModel* self, int interval ```
int32_t q_sortfilterproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSortFilterProxyModel* self, int id ```
void q_sortfilterproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSortFilterProxyModel* self ```
libqt_list /* of QObject* */ q_sortfilterproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSortFilterProxyModel* self, QObject* parent ```
void q_sortfilterproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSortFilterProxyModel* self, QObject* filterObj ```
void q_sortfilterproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSortFilterProxyModel* self, QObject* obj ```
void q_sortfilterproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sortfilterproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSortFilterProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sortfilterproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sortfilterproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sortfilterproxymodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSortFilterProxyModel* self, const char* name, QVariant* value ```
bool q_sortfilterproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSortFilterProxyModel* self, const char* name ```
QVariant* q_sortfilterproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSortFilterProxyModel* self ```
const char** q_sortfilterproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSortFilterProxyModel* self ```
QBindingStorage* q_sortfilterproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSortFilterProxyModel* self ```
QBindingStorage* q_sortfilterproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QObject*) ```
void q_sortfilterproxymodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSortFilterProxyModel* self, const char* classname ```
bool q_sortfilterproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSortFilterProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sortfilterproxymodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sortfilterproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSortFilterProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSortFilterProxyModel* self, QObject* param1 ```
void q_sortfilterproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_sortfilterproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_submit(void* self) {
    return QSortFilterProxyModel_Submit((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
bool q_sortfilterproxymodel_qbase_submit(void* self) {
    return QSortFilterProxyModel_QBaseSubmit((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)() ```
void q_sortfilterproxymodel_on_submit(void* self, bool (*slot)()) {
    QSortFilterProxyModel_OnSubmit((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_revert(void* self) {
    QSortFilterProxyModel_Revert((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_revert(void* self) {
    QSortFilterProxyModel_QBaseRevert((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_revert(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnRevert((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_item_data(void* self, void* index) {
    return QSortFilterProxyModel_ItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_qbase_item_data(void* self, void* index) {
    return QSortFilterProxyModel_QBaseItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnItemData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_sortfilterproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QSortFilterProxyModel_SetItemData((QSortFilterProxyModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_sortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QSortFilterProxyModel_QBaseSetItemData((QSortFilterProxyModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_sortfilterproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QSortFilterProxyModel_OnSetItemData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
bool q_sortfilterproxymodel_clear_item_data(void* self, void* index) {
    return QSortFilterProxyModel_ClearItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index ```
bool q_sortfilterproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QSortFilterProxyModel_QBaseClearItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*) ```
void q_sortfilterproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnClearItemData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_CanDropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_sortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_QBaseCanDropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_sortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QSortFilterProxyModel_OnCanDropMimeData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_supported_drag_actions(void* self) {
    return QSortFilterProxyModel_SupportedDragActions((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int64_t q_sortfilterproxymodel_qbase_supported_drag_actions(void* self) {
    return QSortFilterProxyModel_QBaseSupportedDragActions((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int64_t (*slot)() ```
void q_sortfilterproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QSortFilterProxyModel_OnSupportedDragActions((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_map /* of int to char* */ q_sortfilterproxymodel_role_names(void* self) {
    return QSortFilterProxyModel_RoleNames((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_map /* of int to char* */ q_sortfilterproxymodel_qbase_role_names(void* self) {
    return QSortFilterProxyModel_QBaseRoleNames((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_sortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QSortFilterProxyModel_OnRoleNames((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_MoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_QBaseMoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnMoveRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_MoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_sortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_QBaseMoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnMoveColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_sortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QSortFilterProxyModel_MultiData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_sortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QSortFilterProxyModel_QBaseMultiData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_sortfilterproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QSortFilterProxyModel_OnMultiData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_reset_internal_data(void* self) {
    QSortFilterProxyModel_ResetInternalData((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_reset_internal_data(void* self) {
    QSortFilterProxyModel_QBaseResetInternalData((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_reset_internal_data(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnResetInternalData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
bool q_sortfilterproxymodel_event(void* self, void* event) {
    return QSortFilterProxyModel_Event((QSortFilterProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
bool q_sortfilterproxymodel_qbase_event(void* self, void* event) {
    return QSortFilterProxyModel_QBaseEvent((QSortFilterProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QEvent*) ```
void q_sortfilterproxymodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnEvent((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QObject* watched, QEvent* event ```
bool q_sortfilterproxymodel_event_filter(void* self, void* watched, void* event) {
    return QSortFilterProxyModel_EventFilter((QSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QObject* watched, QEvent* event ```
bool q_sortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QSortFilterProxyModel_QBaseEventFilter((QSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QObject*, QEvent*) ```
void q_sortfilterproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSortFilterProxyModel_OnEventFilter((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QTimerEvent* event ```
void q_sortfilterproxymodel_timer_event(void* self, void* event) {
    QSortFilterProxyModel_TimerEvent((QSortFilterProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QTimerEvent* event ```
void q_sortfilterproxymodel_qbase_timer_event(void* self, void* event) {
    QSortFilterProxyModel_QBaseTimerEvent((QSortFilterProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QTimerEvent*) ```
void q_sortfilterproxymodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnTimerEvent((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QChildEvent* event ```
void q_sortfilterproxymodel_child_event(void* self, void* event) {
    QSortFilterProxyModel_ChildEvent((QSortFilterProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QChildEvent* event ```
void q_sortfilterproxymodel_qbase_child_event(void* self, void* event) {
    QSortFilterProxyModel_QBaseChildEvent((QSortFilterProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QChildEvent*) ```
void q_sortfilterproxymodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnChildEvent((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
void q_sortfilterproxymodel_custom_event(void* self, void* event) {
    QSortFilterProxyModel_CustomEvent((QSortFilterProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QEvent* event ```
void q_sortfilterproxymodel_qbase_custom_event(void* self, void* event) {
    QSortFilterProxyModel_QBaseCustomEvent((QSortFilterProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QEvent*) ```
void q_sortfilterproxymodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnCustomEvent((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_connect_notify(void* self, void* signal) {
    QSortFilterProxyModel_ConnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_qbase_connect_notify(void* self, void* signal) {
    QSortFilterProxyModel_QBaseConnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QMetaMethod*) ```
void q_sortfilterproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnConnectNotify((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_disconnect_notify(void* self, void* signal) {
    QSortFilterProxyModel_DisconnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
void q_sortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QSortFilterProxyModel_QBaseDisconnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QMetaMethod*) ```
void q_sortfilterproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnDisconnectNotify((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_sortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QSortFilterProxyModel_CreateSourceIndex((QSortFilterProxyModel*)self, row, col, internalPtr);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_sortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QSortFilterProxyModel_QBaseCreateSourceIndex((QSortFilterProxyModel*)self, row, col, internalPtr);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int, void*) ```
void q_sortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnCreateSourceIndex((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column ```
QModelIndex* q_sortfilterproxymodel_create_index(void* self, int row, int column) {
    return QSortFilterProxyModel_CreateIndex((QSortFilterProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column ```
QModelIndex* q_sortfilterproxymodel_qbase_create_index(void* self, int row, int column) {
    return QSortFilterProxyModel_QBaseCreateIndex((QSortFilterProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* (*slot)(QSortFilterProxyModel*, int, int) ```
void q_sortfilterproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QSortFilterProxyModel_OnCreateIndex((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_sortfilterproxymodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QSortFilterProxyModel_EncodeData((QSortFilterProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_sortfilterproxymodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QSortFilterProxyModel_QBaseEncodeData((QSortFilterProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*[], QDataStream*) ```
void q_sortfilterproxymodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QSortFilterProxyModel_OnEncodeData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_sortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSortFilterProxyModel_DecodeData((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_sortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSortFilterProxyModel_QBaseDecodeData((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_sortfilterproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QSortFilterProxyModel_OnDecodeData((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginInsertRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginInsertRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginInsertRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_insert_rows(void* self) {
    QSortFilterProxyModel_EndInsertRows((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_insert_rows(void* self) {
    QSortFilterProxyModel_QBaseEndInsertRows((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_insert_rows(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnEndInsertRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginRemoveRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginRemoveRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginRemoveRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_remove_rows(void* self) {
    QSortFilterProxyModel_EndRemoveRows((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_remove_rows(void* self) {
    QSortFilterProxyModel_QBaseEndRemoveRows((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_remove_rows(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnEndRemoveRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_sortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSortFilterProxyModel_BeginMoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_sortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSortFilterProxyModel_QBaseBeginMoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnBeginMoveRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_move_rows(void* self) {
    QSortFilterProxyModel_EndMoveRows((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_move_rows(void* self) {
    QSortFilterProxyModel_QBaseEndMoveRows((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_move_rows(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnEndMoveRows((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginInsertColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginInsertColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginInsertColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_insert_columns(void* self) {
    QSortFilterProxyModel_EndInsertColumns((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_insert_columns(void* self) {
    QSortFilterProxyModel_QBaseEndInsertColumns((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_insert_columns(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnEndInsertColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginRemoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* parent, int first, int last ```
void q_sortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginRemoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int) ```
void q_sortfilterproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginRemoveColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_remove_columns(void* self) {
    QSortFilterProxyModel_EndRemoveColumns((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_remove_columns(void* self) {
    QSortFilterProxyModel_QBaseEndRemoveColumns((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_remove_columns(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnEndRemoveColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_sortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSortFilterProxyModel_BeginMoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_sortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSortFilterProxyModel_QBaseBeginMoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_sortfilterproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnBeginMoveColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_move_columns(void* self) {
    QSortFilterProxyModel_EndMoveColumns((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_move_columns(void* self) {
    QSortFilterProxyModel_QBaseEndMoveColumns((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_move_columns(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnEndMoveColumns((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_begin_reset_model(void* self) {
    QSortFilterProxyModel_BeginResetModel((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_begin_reset_model(void* self) {
    QSortFilterProxyModel_QBaseBeginResetModel((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_begin_reset_model(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnBeginResetModel((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_end_reset_model(void* self) {
    QSortFilterProxyModel_EndResetModel((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_qbase_end_reset_model(void* self) {
    QSortFilterProxyModel_QBaseEndResetModel((QSortFilterProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)() ```
void q_sortfilterproxymodel_on_end_reset_model(void* self, void (*slot)()) {
    QSortFilterProxyModel_OnEndResetModel((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_sortfilterproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QSortFilterProxyModel_ChangePersistentIndex((QSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_sortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QSortFilterProxyModel_QBaseChangePersistentIndex((QSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*, QModelIndex*) ```
void q_sortfilterproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QSortFilterProxyModel_OnChangePersistentIndex((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_sortfilterproxymodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
    QModelIndex** from_arr = (QModelIndex**)from;
    size_t from_len = 0;
    while (from_arr[from_len] != NULL) {
        from_len++;
    }
    libqt_list from_list = {
        .len = from_len,
        .data = {(QModelIndex*)from},
    };
    QModelIndex** to_arr = (QModelIndex**)to;
    size_t to_len = 0;
    while (to_arr[to_len] != NULL) {
        to_len++;
    }
    libqt_list to_list = {
        .len = to_len,
        .data = {(QModelIndex*)to},
    };
    QSortFilterProxyModel_ChangePersistentIndexList((QSortFilterProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_sortfilterproxymodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
    QModelIndex** from_arr = (QModelIndex**)from;
    size_t from_len = 0;
    while (from_arr[from_len] != NULL) {
        from_len++;
    }
    libqt_list from_list = {
        .len = from_len,
        .data = {(QModelIndex*)from},
    };
    QModelIndex** to_arr = (QModelIndex**)to;
    size_t to_len = 0;
    while (to_arr[to_len] != NULL) {
        to_len++;
    }
    libqt_list to_list = {
        .len = to_len,
        .data = {(QModelIndex*)to},
    };
    QSortFilterProxyModel_QBaseChangePersistentIndexList((QSortFilterProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, void (*slot)(QSortFilterProxyModel*, QModelIndex*[], QModelIndex*[]) ```
void q_sortfilterproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QSortFilterProxyModel_OnChangePersistentIndexList((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QSortFilterProxyModel_PersistentIndexList((QSortFilterProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QSortFilterProxyModel_QBasePersistentIndexList((QSortFilterProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_sortfilterproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QSortFilterProxyModel_OnPersistentIndexList((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
QObject* q_sortfilterproxymodel_sender(void* self) {
    return QSortFilterProxyModel_Sender((QSortFilterProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
QObject* q_sortfilterproxymodel_qbase_sender(void* self) {
    return QSortFilterProxyModel_QBaseSender((QSortFilterProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QObject* (*slot)() ```
void q_sortfilterproxymodel_on_sender(void* self, QObject* (*slot)()) {
    QSortFilterProxyModel_OnSender((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_sender_signal_index(void* self) {
    return QSortFilterProxyModel_SenderSignalIndex((QSortFilterProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self ```
int32_t q_sortfilterproxymodel_qbase_sender_signal_index(void* self) {
    return QSortFilterProxyModel_QBaseSenderSignalIndex((QSortFilterProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)() ```
void q_sortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSortFilterProxyModel_OnSenderSignalIndex((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, const char* signal ```
int32_t q_sortfilterproxymodel_receivers(void* self, const char* signal) {
    return QSortFilterProxyModel_Receivers((QSortFilterProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, const char* signal ```
int32_t q_sortfilterproxymodel_qbase_receivers(void* self, const char* signal) {
    return QSortFilterProxyModel_QBaseReceivers((QSortFilterProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, int32_t (*slot)(QSortFilterProxyModel*, const char*) ```
void q_sortfilterproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSortFilterProxyModel_OnReceivers((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
bool q_sortfilterproxymodel_is_signal_connected(void* self, void* signal) {
    return QSortFilterProxyModel_IsSignalConnected((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, QMetaMethod* signal ```
bool q_sortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QSortFilterProxyModel_QBaseIsSignalConnected((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSortFilterProxyModel* self, bool (*slot)(QSortFilterProxyModel*, QMetaMethod*) ```
void q_sortfilterproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSortFilterProxyModel_OnIsSignalConnected((QSortFilterProxyModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSortFilterProxyModel* self ```
void q_sortfilterproxymodel_delete(void* self) {
    QSortFilterProxyModel_Delete((QSortFilterProxyModel*)(self));
}