#include "libqabstractitemmodel.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqregularexpression.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqsortfilterproxymodel.hpp"
#include "libqsortfilterproxymodel.h"

QSortFilterProxyModel* q_sortfilterproxymodel_new() {
    return QSortFilterProxyModel_new();
}

QSortFilterProxyModel* q_sortfilterproxymodel_new2(void* parent) {
    return QSortFilterProxyModel_new2((QObject*)parent);
}

const QMetaObject* q_sortfilterproxymodel_meta_object(void* self) {
    return QSortFilterProxyModel_MetaObject((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSortFilterProxyModel_OnMetaObject((QSortFilterProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* q_sortfilterproxymodel_qbase_meta_object(void* self) {
    return QSortFilterProxyModel_QBaseMetaObject((QSortFilterProxyModel*)self);
}

void* q_sortfilterproxymodel_metacast(void* self, const char* param1) {
    return QSortFilterProxyModel_Metacast((QSortFilterProxyModel*)self, param1);
}

void q_sortfilterproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSortFilterProxyModel_OnMetacast((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void* q_sortfilterproxymodel_qbase_metacast(void* self, const char* param1) {
    return QSortFilterProxyModel_QBaseMetacast((QSortFilterProxyModel*)self, param1);
}

int32_t q_sortfilterproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSortFilterProxyModel_Metacall((QSortFilterProxyModel*)self, param1, param2, param3);
}

void q_sortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSortFilterProxyModel_OnMetacall((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSortFilterProxyModel_QBaseMetacall((QSortFilterProxyModel*)self, param1, param2, param3);
}

const char* q_sortfilterproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sortfilterproxymodel_set_source_model(void* self, void* sourceModel) {
    QSortFilterProxyModel_SetSourceModel((QSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void q_sortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnSetSourceModel((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    QSortFilterProxyModel_QBaseSetSourceModel((QSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

QModelIndex* q_sortfilterproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QSortFilterProxyModel_MapToSource((QSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

void q_sortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnMapToSource((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return QSortFilterProxyModel_QBaseMapToSource((QSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* q_sortfilterproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QSortFilterProxyModel_MapFromSource((QSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

void q_sortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnMapFromSource((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return QSortFilterProxyModel_QBaseMapFromSource((QSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

QItemSelection* q_sortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection) {
    return QSortFilterProxyModel_MapSelectionToSource((QSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

void q_sortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnMapSelectionToSource((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_sortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection) {
    return QSortFilterProxyModel_QBaseMapSelectionToSource((QSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

QItemSelection* q_sortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection) {
    return QSortFilterProxyModel_MapSelectionFromSource((QSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

void q_sortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnMapSelectionFromSource((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_sortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection) {
    return QSortFilterProxyModel_QBaseMapSelectionFromSource((QSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

QRegularExpression* q_sortfilterproxymodel_filter_regular_expression(void* self) {
    return QSortFilterProxyModel_FilterRegularExpression((QSortFilterProxyModel*)self);
}

int32_t q_sortfilterproxymodel_filter_key_column(void* self) {
    return QSortFilterProxyModel_FilterKeyColumn((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_filter_key_column(void* self, int column) {
    QSortFilterProxyModel_SetFilterKeyColumn((QSortFilterProxyModel*)self, column);
}

int32_t q_sortfilterproxymodel_filter_case_sensitivity(void* self) {
    return QSortFilterProxyModel_FilterCaseSensitivity((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_filter_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetFilterCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

int32_t q_sortfilterproxymodel_sort_case_sensitivity(void* self) {
    return QSortFilterProxyModel_SortCaseSensitivity((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_sort_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetSortCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

bool q_sortfilterproxymodel_is_sort_locale_aware(void* self) {
    return QSortFilterProxyModel_IsSortLocaleAware((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_sort_locale_aware(void* self, bool on) {
    QSortFilterProxyModel_SetSortLocaleAware((QSortFilterProxyModel*)self, on);
}

int32_t q_sortfilterproxymodel_sort_column(void* self) {
    return QSortFilterProxyModel_SortColumn((QSortFilterProxyModel*)self);
}

int32_t q_sortfilterproxymodel_sort_order(void* self) {
    return QSortFilterProxyModel_SortOrder((QSortFilterProxyModel*)self);
}

bool q_sortfilterproxymodel_dynamic_sort_filter(void* self) {
    return QSortFilterProxyModel_DynamicSortFilter((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable) {
    QSortFilterProxyModel_SetDynamicSortFilter((QSortFilterProxyModel*)self, enable);
}

int32_t q_sortfilterproxymodel_sort_role(void* self) {
    return QSortFilterProxyModel_SortRole((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_sort_role(void* self, int role) {
    QSortFilterProxyModel_SetSortRole((QSortFilterProxyModel*)self, role);
}

int32_t q_sortfilterproxymodel_filter_role(void* self) {
    return QSortFilterProxyModel_FilterRole((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_filter_role(void* self, int role) {
    QSortFilterProxyModel_SetFilterRole((QSortFilterProxyModel*)self, role);
}

bool q_sortfilterproxymodel_is_recursive_filtering_enabled(void* self) {
    return QSortFilterProxyModel_IsRecursiveFilteringEnabled((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive) {
    QSortFilterProxyModel_SetRecursiveFilteringEnabled((QSortFilterProxyModel*)self, recursive);
}

bool q_sortfilterproxymodel_auto_accept_child_rows(void* self) {
    return QSortFilterProxyModel_AutoAcceptChildRows((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept) {
    QSortFilterProxyModel_SetAutoAcceptChildRows((QSortFilterProxyModel*)self, accept);
}

void q_sortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterRegularExpression((QSortFilterProxyModel*)self, qstring(pattern));
}

void q_sortfilterproxymodel_set_filter_regular_expression2(void* self, void* regularExpression) {
    QSortFilterProxyModel_SetFilterRegularExpression2((QSortFilterProxyModel*)self, (QRegularExpression*)regularExpression);
}

void q_sortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterWildcard((QSortFilterProxyModel*)self, qstring(pattern));
}

void q_sortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterFixedString((QSortFilterProxyModel*)self, qstring(pattern));
}

void q_sortfilterproxymodel_invalidate(void* self) {
    QSortFilterProxyModel_Invalidate((QSortFilterProxyModel*)self);
}

bool q_sortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return QSortFilterProxyModel_FilterAcceptsRow((QSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

void q_sortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(void*, int, void*)) {
    QSortFilterProxyModel_OnFilterAcceptsRow((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return QSortFilterProxyModel_QBaseFilterAcceptsRow((QSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

bool q_sortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return QSortFilterProxyModel_FilterAcceptsColumn((QSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

void q_sortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(void*, int, void*)) {
    QSortFilterProxyModel_OnFilterAcceptsColumn((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return QSortFilterProxyModel_QBaseFilterAcceptsColumn((QSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

bool q_sortfilterproxymodel_less_than(void* self, void* source_left, void* source_right) {
    return QSortFilterProxyModel_LessThan((QSortFilterProxyModel*)self, (QModelIndex*)source_left, (QModelIndex*)source_right);
}

void q_sortfilterproxymodel_on_less_than(void* self, bool (*callback)(void*, void*, void*)) {
    QSortFilterProxyModel_OnLessThan((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_less_than(void* self, void* source_left, void* source_right) {
    return QSortFilterProxyModel_QBaseLessThan((QSortFilterProxyModel*)self, (QModelIndex*)source_left, (QModelIndex*)source_right);
}

void q_sortfilterproxymodel_invalidate_filter(void* self) {
    QSortFilterProxyModel_InvalidateFilter((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_invalidate_filter(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnInvalidateFilter((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_qbase_invalidate_filter(void* self) {
    QSortFilterProxyModel_QBaseInvalidateFilter((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_invalidate_rows_filter(void* self) {
    QSortFilterProxyModel_InvalidateRowsFilter((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnInvalidateRowsFilter((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_qbase_invalidate_rows_filter(void* self) {
    QSortFilterProxyModel_QBaseInvalidateRowsFilter((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_invalidate_columns_filter(void* self) {
    QSortFilterProxyModel_InvalidateColumnsFilter((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnInvalidateColumnsFilter((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_qbase_invalidate_columns_filter(void* self) {
    QSortFilterProxyModel_QBaseInvalidateColumnsFilter((QSortFilterProxyModel*)self);
}

QModelIndex* q_sortfilterproxymodel_index(void* self, int row, int column, void* parent) {
    return QSortFilterProxyModel_Index((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnIndex((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QSortFilterProxyModel_QBaseIndex((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_sortfilterproxymodel_parent(void* self, void* child) {
    return QSortFilterProxyModel_Parent((QSortFilterProxyModel*)self, (QModelIndex*)child);
}

void q_sortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnParent((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_qbase_parent(void* self, void* child) {
    return QSortFilterProxyModel_QBaseParent((QSortFilterProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* q_sortfilterproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QSortFilterProxyModel_Sibling((QSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

void q_sortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnSibling((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QSortFilterProxyModel_QBaseSibling((QSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

int32_t q_sortfilterproxymodel_row_count(void* self, void* parent) {
    return QSortFilterProxyModel_RowCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnRowCount((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_qbase_row_count(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseRowCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t q_sortfilterproxymodel_column_count(void* self, void* parent) {
    return QSortFilterProxyModel_ColumnCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnColumnCount((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_qbase_column_count(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseColumnCount((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_has_children(void* self, void* parent) {
    return QSortFilterProxyModel_HasChildren((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnHasChildren((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_has_children(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseHasChildren((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

QVariant* q_sortfilterproxymodel_data(void* self, void* index, int role) {
    return QSortFilterProxyModel_Data((QSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

void q_sortfilterproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QSortFilterProxyModel_OnData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* q_sortfilterproxymodel_qbase_data(void* self, void* index, int role) {
    return QSortFilterProxyModel_QBaseData((QSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

bool q_sortfilterproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QSortFilterProxyModel_SetData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_sortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QSortFilterProxyModel_OnSetData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QSortFilterProxyModel_QBaseSetData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

QVariant* q_sortfilterproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QSortFilterProxyModel_HeaderData((QSortFilterProxyModel*)self, section, orientation, role);
}

void q_sortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QSortFilterProxyModel_OnHeaderData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* q_sortfilterproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QSortFilterProxyModel_QBaseHeaderData((QSortFilterProxyModel*)self, section, orientation, role);
}

bool q_sortfilterproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSortFilterProxyModel_SetHeaderData((QSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void q_sortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QSortFilterProxyModel_OnSetHeaderData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QSortFilterProxyModel_QBaseSetHeaderData((QSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

QMimeData* q_sortfilterproxymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSortFilterProxyModel_MimeData((QSortFilterProxyModel*)self, indexes);
}

void q_sortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list /* of QModelIndex* */)) {
    QSortFilterProxyModel_OnMimeData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QMimeData* q_sortfilterproxymodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QSortFilterProxyModel_QBaseMimeData((QSortFilterProxyModel*)self, indexes);
}

bool q_sortfilterproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_DropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSortFilterProxyModel_OnDropMimeData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_QBaseDropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_InsertRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnInsertRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_QBaseInsertRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_InsertColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnInsertColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_QBaseInsertColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_RemoveRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnRemoveRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QSortFilterProxyModel_QBaseRemoveRows((QSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_RemoveColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnRemoveColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QSortFilterProxyModel_QBaseRemoveColumns((QSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_fetch_more(void* self, void* parent) {
    QSortFilterProxyModel_FetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnFetchMore((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_qbase_fetch_more(void* self, void* parent) {
    QSortFilterProxyModel_QBaseFetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_can_fetch_more(void* self, void* parent) {
    return QSortFilterProxyModel_CanFetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnCanFetchMore((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QSortFilterProxyModel_QBaseCanFetchMore((QSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t q_sortfilterproxymodel_flags(void* self, void* index) {
    return QSortFilterProxyModel_Flags((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

void q_sortfilterproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnFlags((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_qbase_flags(void* self, void* index) {
    return QSortFilterProxyModel_QBaseFlags((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_sortfilterproxymodel_buddy(void* self, void* index) {
    return QSortFilterProxyModel_Buddy((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

void q_sortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnBuddy((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_qbase_buddy(void* self, void* index) {
    return QSortFilterProxyModel_QBaseBuddy((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSortFilterProxyModel_Match((QSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_sortfilterproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int32_t)) {
    QSortFilterProxyModel_OnMatch((QSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QSortFilterProxyModel_QBaseMatch((QSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

QSize* q_sortfilterproxymodel_span(void* self, void* index) {
    return QSortFilterProxyModel_Span((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

void q_sortfilterproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnSpan((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QSize* q_sortfilterproxymodel_qbase_span(void* self, void* index) {
    return QSortFilterProxyModel_QBaseSpan((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

void q_sortfilterproxymodel_sort(void* self, int column, int32_t order) {
    QSortFilterProxyModel_Sort((QSortFilterProxyModel*)self, column, order);
}

void q_sortfilterproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QSortFilterProxyModel_OnSort((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_qbase_sort(void* self, int column, int32_t order) {
    QSortFilterProxyModel_QBaseSort((QSortFilterProxyModel*)self, column, order);
}

const char** q_sortfilterproxymodel_mime_types(void* self) {
    libqt_list _arr = QSortFilterProxyModel_MimeTypes((QSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sortfilterproxymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_sortfilterproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    QSortFilterProxyModel_OnMimeTypes((QSortFilterProxyModel*)self, (intptr_t)callback);
}

const char** q_sortfilterproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QSortFilterProxyModel_QBaseMimeTypes((QSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sortfilterproxymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t q_sortfilterproxymodel_supported_drop_actions(void* self) {
    return QSortFilterProxyModel_SupportedDropActions((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QSortFilterProxyModel_OnSupportedDropActions((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_qbase_supported_drop_actions(void* self) {
    return QSortFilterProxyModel_QBaseSupportedDropActions((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter) {
    QSortFilterProxyModel_DynamicSortFilterChanged((QSortFilterProxyModel*)self, dynamicSortFilter);
}

void q_sortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_DynamicSortFilterChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_filter_case_sensitivity_changed(void* self, int32_t filterCaseSensitivity) {
    QSortFilterProxyModel_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, filterCaseSensitivity);
}

void q_sortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_sort_case_sensitivity_changed(void* self, int32_t sortCaseSensitivity) {
    QSortFilterProxyModel_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, sortCaseSensitivity);
}

void q_sortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware) {
    QSortFilterProxyModel_SortLocaleAwareChanged((QSortFilterProxyModel*)self, sortLocaleAware);
}

void q_sortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_SortLocaleAwareChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_sort_role_changed(void* self, int sortRole) {
    QSortFilterProxyModel_SortRoleChanged((QSortFilterProxyModel*)self, sortRole);
}

void q_sortfilterproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_SortRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_filter_role_changed(void* self, int filterRole) {
    QSortFilterProxyModel_FilterRoleChanged((QSortFilterProxyModel*)self, filterRole);
}

void q_sortfilterproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_FilterRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled) {
    QSortFilterProxyModel_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, recursiveFilteringEnabled);
}

void q_sortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows) {
    QSortFilterProxyModel_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, autoAcceptChildRows);
}

void q_sortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

const char* q_sortfilterproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sortfilterproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_sortfilterproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool q_sortfilterproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_sortfilterproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_sortfilterproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_sortfilterproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_sortfilterproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_sortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sortfilterproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_sortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_sortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_sortfilterproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_sortfilterproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_sortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_sortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_sortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_sortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_sortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_sortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_sortfilterproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sortfilterproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sortfilterproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sortfilterproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sortfilterproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sortfilterproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sortfilterproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sortfilterproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sortfilterproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sortfilterproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sortfilterproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sortfilterproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sortfilterproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sortfilterproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sortfilterproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sortfilterproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sortfilterproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sortfilterproxymodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sortfilterproxymodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sortfilterproxymodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sortfilterproxymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sortfilterproxymodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sortfilterproxymodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sortfilterproxymodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sortfilterproxymodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sortfilterproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sortfilterproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sortfilterproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sortfilterproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sortfilterproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sortfilterproxymodel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_sortfilterproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sortfilterproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sortfilterproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sortfilterproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_sortfilterproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sortfilterproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sortfilterproxymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sortfilterproxymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sortfilterproxymodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sortfilterproxymodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sortfilterproxymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sortfilterproxymodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sortfilterproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sortfilterproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_submit(void* self) {
    return QSortFilterProxyModel_Submit((QSortFilterProxyModel*)self);
}

bool q_sortfilterproxymodel_qbase_submit(void* self) {
    return QSortFilterProxyModel_QBaseSubmit((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_submit(void* self, bool (*callback)()) {
    QSortFilterProxyModel_OnSubmit((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_revert(void* self) {
    QSortFilterProxyModel_Revert((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_revert(void* self) {
    QSortFilterProxyModel_QBaseRevert((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_revert(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnRevert((QSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSortFilterProxyModel_ItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_sortfilterproxymodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QSortFilterProxyModel_QBaseItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_sortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnItemData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sortfilterproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sortfilterproxymodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = QSortFilterProxyModel_SetItemData((QSortFilterProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_sortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_sortfilterproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_sortfilterproxymodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = QSortFilterProxyModel_QBaseSetItemData((QSortFilterProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_sortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QSortFilterProxyModel_OnSetItemData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_clear_item_data(void* self, void* index) {
    return QSortFilterProxyModel_ClearItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

bool q_sortfilterproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QSortFilterProxyModel_QBaseClearItemData((QSortFilterProxyModel*)self, (QModelIndex*)index);
}

void q_sortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnClearItemData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_CanDropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_sortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QSortFilterProxyModel_QBaseCanDropMimeData((QSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_sortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QSortFilterProxyModel_OnCanDropMimeData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_supported_drag_actions(void* self) {
    return QSortFilterProxyModel_SupportedDragActions((QSortFilterProxyModel*)self);
}

int32_t q_sortfilterproxymodel_qbase_supported_drag_actions(void* self) {
    return QSortFilterProxyModel_QBaseSupportedDragActions((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QSortFilterProxyModel_OnSupportedDragActions((QSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_sortfilterproxymodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSortFilterProxyModel_RoleNames((QSortFilterProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sortfilterproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sortfilterproxymodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

libqt_map /* of int to char* */ q_sortfilterproxymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QSortFilterProxyModel_QBaseRoleNames((QSortFilterProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_sortfilterproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_sortfilterproxymodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void q_sortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QSortFilterProxyModel_OnRoleNames((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_MoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_QBaseMoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnMoveRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_MoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_sortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QSortFilterProxyModel_QBaseMoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_sortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnMoveColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QSortFilterProxyModel_MultiData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QSortFilterProxyModel_QBaseMultiData((QSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_sortfilterproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QSortFilterProxyModel_OnMultiData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_reset_internal_data(void* self) {
    QSortFilterProxyModel_ResetInternalData((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_reset_internal_data(void* self) {
    QSortFilterProxyModel_QBaseResetInternalData((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnResetInternalData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_event(void* self, void* event) {
    return QSortFilterProxyModel_Event((QSortFilterProxyModel*)self, (QEvent*)event);
}

bool q_sortfilterproxymodel_qbase_event(void* self, void* event) {
    return QSortFilterProxyModel_QBaseEvent((QSortFilterProxyModel*)self, (QEvent*)event);
}

void q_sortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnEvent((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_event_filter(void* self, void* watched, void* event) {
    return QSortFilterProxyModel_EventFilter((QSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QSortFilterProxyModel_QBaseEventFilter((QSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_sortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSortFilterProxyModel_OnEventFilter((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_timer_event(void* self, void* event) {
    QSortFilterProxyModel_TimerEvent((QSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void q_sortfilterproxymodel_qbase_timer_event(void* self, void* event) {
    QSortFilterProxyModel_QBaseTimerEvent((QSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void q_sortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnTimerEvent((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_child_event(void* self, void* event) {
    QSortFilterProxyModel_ChildEvent((QSortFilterProxyModel*)self, (QChildEvent*)event);
}

void q_sortfilterproxymodel_qbase_child_event(void* self, void* event) {
    QSortFilterProxyModel_QBaseChildEvent((QSortFilterProxyModel*)self, (QChildEvent*)event);
}

void q_sortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnChildEvent((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_custom_event(void* self, void* event) {
    QSortFilterProxyModel_CustomEvent((QSortFilterProxyModel*)self, (QEvent*)event);
}

void q_sortfilterproxymodel_qbase_custom_event(void* self, void* event) {
    QSortFilterProxyModel_QBaseCustomEvent((QSortFilterProxyModel*)self, (QEvent*)event);
}

void q_sortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnCustomEvent((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_connect_notify(void* self, void* signal) {
    QSortFilterProxyModel_ConnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void q_sortfilterproxymodel_qbase_connect_notify(void* self, void* signal) {
    QSortFilterProxyModel_QBaseConnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void q_sortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnConnectNotify((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_disconnect_notify(void* self, void* signal) {
    QSortFilterProxyModel_DisconnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void q_sortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QSortFilterProxyModel_QBaseDisconnectNotify((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void q_sortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnDisconnectNotify((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QSortFilterProxyModel_CreateSourceIndex((QSortFilterProxyModel*)self, row, col, internalPtr);
}

QModelIndex* q_sortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QSortFilterProxyModel_QBaseCreateSourceIndex((QSortFilterProxyModel*)self, row, col, internalPtr);
}

void q_sortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QSortFilterProxyModel_OnCreateSourceIndex((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_sortfilterproxymodel_create_index(void* self, int row, int column) {
    return QSortFilterProxyModel_CreateIndex((QSortFilterProxyModel*)self, row, column);
}

QModelIndex* q_sortfilterproxymodel_qbase_create_index(void* self, int row, int column) {
    return QSortFilterProxyModel_QBaseCreateIndex((QSortFilterProxyModel*)self, row, column);
}

void q_sortfilterproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QSortFilterProxyModel_OnCreateIndex((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSortFilterProxyModel_EncodeData((QSortFilterProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_sortfilterproxymodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QSortFilterProxyModel_QBaseEncodeData((QSortFilterProxyModel*)self, indexes, (QDataStream*)stream);
}

void q_sortfilterproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, void*)) {
    QSortFilterProxyModel_OnEncodeData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSortFilterProxyModel_DecodeData((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_sortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QSortFilterProxyModel_QBaseDecodeData((QSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_sortfilterproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QSortFilterProxyModel_OnDecodeData((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginInsertRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginInsertRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginInsertRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_end_insert_rows(void* self) {
    QSortFilterProxyModel_EndInsertRows((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_end_insert_rows(void* self) {
    QSortFilterProxyModel_QBaseEndInsertRows((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnEndInsertRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginRemoveRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginRemoveRows((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginRemoveRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_end_remove_rows(void* self) {
    QSortFilterProxyModel_EndRemoveRows((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_end_remove_rows(void* self) {
    QSortFilterProxyModel_QBaseEndRemoveRows((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnEndRemoveRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSortFilterProxyModel_BeginMoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_sortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QSortFilterProxyModel_QBaseBeginMoveRows((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_sortfilterproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnBeginMoveRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_end_move_rows(void* self) {
    QSortFilterProxyModel_EndMoveRows((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_end_move_rows(void* self) {
    QSortFilterProxyModel_QBaseEndMoveRows((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnEndMoveRows((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginInsertColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginInsertColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginInsertColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_end_insert_columns(void* self) {
    QSortFilterProxyModel_EndInsertColumns((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_end_insert_columns(void* self) {
    QSortFilterProxyModel_QBaseEndInsertColumns((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnEndInsertColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_BeginRemoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QSortFilterProxyModel_QBaseBeginRemoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_sortfilterproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QSortFilterProxyModel_OnBeginRemoveColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_end_remove_columns(void* self) {
    QSortFilterProxyModel_EndRemoveColumns((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_end_remove_columns(void* self) {
    QSortFilterProxyModel_QBaseEndRemoveColumns((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnEndRemoveColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSortFilterProxyModel_BeginMoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_sortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QSortFilterProxyModel_QBaseBeginMoveColumns((QSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_sortfilterproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QSortFilterProxyModel_OnBeginMoveColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_end_move_columns(void* self) {
    QSortFilterProxyModel_EndMoveColumns((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_end_move_columns(void* self) {
    QSortFilterProxyModel_QBaseEndMoveColumns((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnEndMoveColumns((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_begin_reset_model(void* self) {
    QSortFilterProxyModel_BeginResetModel((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_begin_reset_model(void* self) {
    QSortFilterProxyModel_QBaseBeginResetModel((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnBeginResetModel((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_end_reset_model(void* self) {
    QSortFilterProxyModel_EndResetModel((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_qbase_end_reset_model(void* self) {
    QSortFilterProxyModel_QBaseEndResetModel((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    QSortFilterProxyModel_OnEndResetModel((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QSortFilterProxyModel_ChangePersistentIndex((QSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QSortFilterProxyModel_QBaseChangePersistentIndex((QSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_sortfilterproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QSortFilterProxyModel_OnChangePersistentIndex((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSortFilterProxyModel_ChangePersistentIndexList((QSortFilterProxyModel*)self, from, to);
}

void q_sortfilterproxymodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QSortFilterProxyModel_QBaseChangePersistentIndexList((QSortFilterProxyModel*)self, from, to);
}

void q_sortfilterproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)) {
    QSortFilterProxyModel_OnChangePersistentIndexList((QSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QSortFilterProxyModel_PersistentIndexList((QSortFilterProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_sortfilterproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QSortFilterProxyModel_QBasePersistentIndexList((QSortFilterProxyModel*)self);
    return _arr;
}

void q_sortfilterproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QSortFilterProxyModel_OnPersistentIndexList((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QObject* q_sortfilterproxymodel_sender(void* self) {
    return QSortFilterProxyModel_Sender((QSortFilterProxyModel*)self);
}

QObject* q_sortfilterproxymodel_qbase_sender(void* self) {
    return QSortFilterProxyModel_QBaseSender((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_sender(void* self, QObject* (*callback)()) {
    QSortFilterProxyModel_OnSender((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_sender_signal_index(void* self) {
    return QSortFilterProxyModel_SenderSignalIndex((QSortFilterProxyModel*)self);
}

int32_t q_sortfilterproxymodel_qbase_sender_signal_index(void* self) {
    return QSortFilterProxyModel_QBaseSenderSignalIndex((QSortFilterProxyModel*)self);
}

void q_sortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSortFilterProxyModel_OnSenderSignalIndex((QSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t q_sortfilterproxymodel_receivers(void* self, const char* signal) {
    return QSortFilterProxyModel_Receivers((QSortFilterProxyModel*)self, signal);
}

int32_t q_sortfilterproxymodel_qbase_receivers(void* self, const char* signal) {
    return QSortFilterProxyModel_QBaseReceivers((QSortFilterProxyModel*)self, signal);
}

void q_sortfilterproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSortFilterProxyModel_OnReceivers((QSortFilterProxyModel*)self, (intptr_t)callback);
}

bool q_sortfilterproxymodel_is_signal_connected(void* self, void* signal) {
    return QSortFilterProxyModel_IsSignalConnected((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

bool q_sortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QSortFilterProxyModel_QBaseIsSignalConnected((QSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void q_sortfilterproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSortFilterProxyModel_OnIsSignalConnected((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sortfilterproxymodel_delete(void* self) {
    QSortFilterProxyModel_Delete((QSortFilterProxyModel*)(self));
}
