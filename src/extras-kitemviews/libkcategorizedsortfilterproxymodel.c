#include "../libqabstractitemmodel.hpp"
#include "../libqabstractproxymodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqsortfilterproxymodel.hpp"
#include "../libqvariant.hpp"
#include "libkcategorizedsortfilterproxymodel.hpp"
#include "libkcategorizedsortfilterproxymodel.h"

KCategorizedSortFilterProxyModel* k_categorizedsortfilterproxymodel_new() {
    return KCategorizedSortFilterProxyModel_new();
}

KCategorizedSortFilterProxyModel* k_categorizedsortfilterproxymodel_new2(void* parent) {
    return KCategorizedSortFilterProxyModel_new2((QObject*)parent);
}

const QMetaObject* k_categorizedsortfilterproxymodel_meta_object(void* self) {
    return KCategorizedSortFilterProxyModel_MetaObject((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KCategorizedSortFilterProxyModel_OnMetaObject((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_categorizedsortfilterproxymodel_qbase_meta_object(void* self) {
    return KCategorizedSortFilterProxyModel_QBaseMetaObject((KCategorizedSortFilterProxyModel*)self);
}

void* k_categorizedsortfilterproxymodel_metacast(void* self, const char* param1) {
    return KCategorizedSortFilterProxyModel_Metacast((KCategorizedSortFilterProxyModel*)self, param1);
}

void k_categorizedsortfilterproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCategorizedSortFilterProxyModel_OnMetacast((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void* k_categorizedsortfilterproxymodel_qbase_metacast(void* self, const char* param1) {
    return KCategorizedSortFilterProxyModel_QBaseMetacast((KCategorizedSortFilterProxyModel*)self, param1);
}

int32_t k_categorizedsortfilterproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCategorizedSortFilterProxyModel_Metacall((KCategorizedSortFilterProxyModel*)self, param1, param2, param3);
}

void k_categorizedsortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCategorizedSortFilterProxyModel_OnMetacall((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCategorizedSortFilterProxyModel_QBaseMetacall((KCategorizedSortFilterProxyModel*)self, param1, param2, param3);
}

const char* k_categorizedsortfilterproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedsortfilterproxymodel_sort(void* self, int column, int32_t order) {
    KCategorizedSortFilterProxyModel_Sort((KCategorizedSortFilterProxyModel*)self, column, order);
}

void k_categorizedsortfilterproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KCategorizedSortFilterProxyModel_OnSort((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_qbase_sort(void* self, int column, int32_t order) {
    KCategorizedSortFilterProxyModel_QBaseSort((KCategorizedSortFilterProxyModel*)self, column, order);
}

bool k_categorizedsortfilterproxymodel_is_categorized_model(void* self) {
    return KCategorizedSortFilterProxyModel_IsCategorizedModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_categorized_model(void* self, bool categorizedModel) {
    KCategorizedSortFilterProxyModel_SetCategorizedModel((KCategorizedSortFilterProxyModel*)self, categorizedModel);
}

int32_t k_categorizedsortfilterproxymodel_sort_column(void* self) {
    return KCategorizedSortFilterProxyModel_SortColumn((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_sort_order(void* self) {
    return KCategorizedSortFilterProxyModel_SortOrder((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_categories_by_natural_comparison(void* self, bool sortCategoriesByNaturalComparison) {
    KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison((KCategorizedSortFilterProxyModel*)self, sortCategoriesByNaturalComparison);
}

bool k_categorizedsortfilterproxymodel_sort_categories_by_natural_comparison(void* self) {
    return KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison((KCategorizedSortFilterProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_less_than(void* self, void* left, void* right) {
    return KCategorizedSortFilterProxyModel_LessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_categorizedsortfilterproxymodel_on_less_than(void* self, bool (*callback)(void*, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnLessThan((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_qbase_less_than(void* self, void* left, void* right) {
    return KCategorizedSortFilterProxyModel_QBaseLessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

bool k_categorizedsortfilterproxymodel_sub_sort_less_than(void* self, void* left, void* right) {
    return KCategorizedSortFilterProxyModel_SubSortLessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_categorizedsortfilterproxymodel_on_sub_sort_less_than(void* self, bool (*callback)(void*, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnSubSortLessThan((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_qbase_sub_sort_less_than(void* self, void* left, void* right) {
    return KCategorizedSortFilterProxyModel_QBaseSubSortLessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

int32_t k_categorizedsortfilterproxymodel_compare_categories(void* self, void* left, void* right) {
    return KCategorizedSortFilterProxyModel_CompareCategories((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_categorizedsortfilterproxymodel_on_compare_categories(void* self, int32_t (*callback)(void*, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnCompareCategories((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_qbase_compare_categories(void* self, void* left, void* right) {
    return KCategorizedSortFilterProxyModel_QBaseCompareCategories((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

const char* k_categorizedsortfilterproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_categorizedsortfilterproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRegularExpression* k_categorizedsortfilterproxymodel_filter_regular_expression(void* self) {
    return QSortFilterProxyModel_FilterRegularExpression((QSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_filter_key_column(void* self) {
    return QSortFilterProxyModel_FilterKeyColumn((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_filter_key_column(void* self, int column) {
    QSortFilterProxyModel_SetFilterKeyColumn((QSortFilterProxyModel*)self, column);
}

int32_t k_categorizedsortfilterproxymodel_filter_case_sensitivity(void* self) {
    return QSortFilterProxyModel_FilterCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_filter_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetFilterCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

int32_t k_categorizedsortfilterproxymodel_sort_case_sensitivity(void* self) {
    return QSortFilterProxyModel_SortCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetSortCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

bool k_categorizedsortfilterproxymodel_is_sort_locale_aware(void* self) {
    return QSortFilterProxyModel_IsSortLocaleAware((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_locale_aware(void* self, bool on) {
    QSortFilterProxyModel_SetSortLocaleAware((QSortFilterProxyModel*)self, on);
}

bool k_categorizedsortfilterproxymodel_dynamic_sort_filter(void* self) {
    return QSortFilterProxyModel_DynamicSortFilter((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable) {
    QSortFilterProxyModel_SetDynamicSortFilter((QSortFilterProxyModel*)self, enable);
}

int32_t k_categorizedsortfilterproxymodel_sort_role(void* self) {
    return QSortFilterProxyModel_SortRole((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_role(void* self, int role) {
    QSortFilterProxyModel_SetSortRole((QSortFilterProxyModel*)self, role);
}

int32_t k_categorizedsortfilterproxymodel_filter_role(void* self) {
    return QSortFilterProxyModel_FilterRole((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_filter_role(void* self, int role) {
    QSortFilterProxyModel_SetFilterRole((QSortFilterProxyModel*)self, role);
}

bool k_categorizedsortfilterproxymodel_is_recursive_filtering_enabled(void* self) {
    return QSortFilterProxyModel_IsRecursiveFilteringEnabled((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive) {
    QSortFilterProxyModel_SetRecursiveFilteringEnabled((QSortFilterProxyModel*)self, recursive);
}

bool k_categorizedsortfilterproxymodel_auto_accept_child_rows(void* self) {
    return QSortFilterProxyModel_AutoAcceptChildRows((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept) {
    QSortFilterProxyModel_SetAutoAcceptChildRows((QSortFilterProxyModel*)self, accept);
}

void k_categorizedsortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterRegularExpression((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_categorizedsortfilterproxymodel_set_filter_regular_expression2(void* self, void* regularExpression) {
    QSortFilterProxyModel_SetFilterRegularExpression2((QSortFilterProxyModel*)self, (QRegularExpression*)regularExpression);
}

void k_categorizedsortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterWildcard((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_categorizedsortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterFixedString((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_categorizedsortfilterproxymodel_invalidate(void* self) {
    QSortFilterProxyModel_Invalidate((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter) {
    QSortFilterProxyModel_DynamicSortFilterChanged((QSortFilterProxyModel*)self, dynamicSortFilter);
}

void k_categorizedsortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_DynamicSortFilterChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_filter_case_sensitivity_changed(void* self, int32_t filterCaseSensitivity) {
    QSortFilterProxyModel_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, filterCaseSensitivity);
}

void k_categorizedsortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_sort_case_sensitivity_changed(void* self, int32_t sortCaseSensitivity) {
    QSortFilterProxyModel_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, sortCaseSensitivity);
}

void k_categorizedsortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware) {
    QSortFilterProxyModel_SortLocaleAwareChanged((QSortFilterProxyModel*)self, sortLocaleAware);
}

void k_categorizedsortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_SortLocaleAwareChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_sort_role_changed(void* self, int sortRole) {
    QSortFilterProxyModel_SortRoleChanged((QSortFilterProxyModel*)self, sortRole);
}

void k_categorizedsortfilterproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_SortRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_filter_role_changed(void* self, int filterRole) {
    QSortFilterProxyModel_FilterRoleChanged((QSortFilterProxyModel*)self, filterRole);
}

void k_categorizedsortfilterproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_FilterRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled) {
    QSortFilterProxyModel_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, recursiveFilteringEnabled);
}

void k_categorizedsortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows) {
    QSortFilterProxyModel_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, autoAcceptChildRows);
}

void k_categorizedsortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QAbstractItemModel* k_categorizedsortfilterproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_categorizedsortfilterproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_categorizedsortfilterproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_categorizedsortfilterproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_categorizedsortfilterproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_categorizedsortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_categorizedsortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_categorizedsortfilterproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_categorizedsortfilterproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_categorizedsortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_categorizedsortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_categorizedsortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_categorizedsortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_categorizedsortfilterproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedsortfilterproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_categorizedsortfilterproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_categorizedsortfilterproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_categorizedsortfilterproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_categorizedsortfilterproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_categorizedsortfilterproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_categorizedsortfilterproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_categorizedsortfilterproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_categorizedsortfilterproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_categorizedsortfilterproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_categorizedsortfilterproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_categorizedsortfilterproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_categorizedsortfilterproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_categorizedsortfilterproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_categorizedsortfilterproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_categorizedsortfilterproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_categorizedsortfilterproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_categorizedsortfilterproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_categorizedsortfilterproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_categorizedsortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_categorizedsortfilterproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_categorizedsortfilterproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_categorizedsortfilterproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_categorizedsortfilterproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_categorizedsortfilterproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_set_source_model(void* self, void* sourceModel) {
    KCategorizedSortFilterProxyModel_SetSourceModel((KCategorizedSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_categorizedsortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    KCategorizedSortFilterProxyModel_QBaseSetSourceModel((KCategorizedSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_categorizedsortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnSetSourceModel((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_map_to_source(void* self, void* proxyIndex) {
    return KCategorizedSortFilterProxyModel_MapToSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return KCategorizedSortFilterProxyModel_QBaseMapToSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_categorizedsortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnMapToSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_map_from_source(void* self, void* sourceIndex) {
    return KCategorizedSortFilterProxyModel_MapFromSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return KCategorizedSortFilterProxyModel_QBaseMapFromSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_categorizedsortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnMapFromSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_categorizedsortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection) {
    return KCategorizedSortFilterProxyModel_MapSelectionToSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

QItemSelection* k_categorizedsortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection) {
    return KCategorizedSortFilterProxyModel_QBaseMapSelectionToSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

void k_categorizedsortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnMapSelectionToSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_categorizedsortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection) {
    return KCategorizedSortFilterProxyModel_MapSelectionFromSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

QItemSelection* k_categorizedsortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection) {
    return KCategorizedSortFilterProxyModel_QBaseMapSelectionFromSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

void k_categorizedsortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnMapSelectionFromSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return KCategorizedSortFilterProxyModel_FilterAcceptsRow((KCategorizedSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

bool k_categorizedsortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return KCategorizedSortFilterProxyModel_QBaseFilterAcceptsRow((KCategorizedSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

void k_categorizedsortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(void*, int, void*)) {
    KCategorizedSortFilterProxyModel_OnFilterAcceptsRow((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return KCategorizedSortFilterProxyModel_FilterAcceptsColumn((KCategorizedSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

bool k_categorizedsortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return KCategorizedSortFilterProxyModel_QBaseFilterAcceptsColumn((KCategorizedSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

void k_categorizedsortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(void*, int, void*)) {
    KCategorizedSortFilterProxyModel_OnFilterAcceptsColumn((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_index(void* self, int row, int column, void* parent) {
    return KCategorizedSortFilterProxyModel_Index((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseIndex((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnIndex((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_parent(void* self, void* child) {
    return KCategorizedSortFilterProxyModel_Parent((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_parent(void* self, void* child) {
    return KCategorizedSortFilterProxyModel_QBaseParent((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)child);
}

void k_categorizedsortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnParent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_sibling(void* self, int row, int column, void* idx) {
    return KCategorizedSortFilterProxyModel_Sibling((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KCategorizedSortFilterProxyModel_QBaseSibling((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_categorizedsortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnSibling((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_row_count(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_RowCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_categorizedsortfilterproxymodel_qbase_row_count(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseRowCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnRowCount((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_column_count(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_ColumnCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_categorizedsortfilterproxymodel_qbase_column_count(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseColumnCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnColumnCount((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_has_children(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_HasChildren((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_has_children(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseHasChildren((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnHasChildren((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* k_categorizedsortfilterproxymodel_data(void* self, void* index, int role) {
    return KCategorizedSortFilterProxyModel_Data((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

QVariant* k_categorizedsortfilterproxymodel_qbase_data(void* self, void* index, int role) {
    return KCategorizedSortFilterProxyModel_QBaseData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

void k_categorizedsortfilterproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KCategorizedSortFilterProxyModel_OnData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_set_data(void* self, void* index, void* value, int role) {
    return KCategorizedSortFilterProxyModel_SetData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_categorizedsortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KCategorizedSortFilterProxyModel_QBaseSetData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_categorizedsortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KCategorizedSortFilterProxyModel_OnSetData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* k_categorizedsortfilterproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KCategorizedSortFilterProxyModel_HeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, role);
}

QVariant* k_categorizedsortfilterproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KCategorizedSortFilterProxyModel_QBaseHeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, role);
}

void k_categorizedsortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KCategorizedSortFilterProxyModel_OnHeaderData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KCategorizedSortFilterProxyModel_SetHeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_categorizedsortfilterproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KCategorizedSortFilterProxyModel_QBaseSetHeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_categorizedsortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KCategorizedSortFilterProxyModel_OnSetHeaderData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_categorizedsortfilterproxymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KCategorizedSortFilterProxyModel_MimeData((KCategorizedSortFilterProxyModel*)self, indexes);
}

QMimeData* k_categorizedsortfilterproxymodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KCategorizedSortFilterProxyModel_QBaseMimeData((KCategorizedSortFilterProxyModel*)self, indexes);
}

void k_categorizedsortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KCategorizedSortFilterProxyModel_OnMimeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCategorizedSortFilterProxyModel_DropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseDropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnDropMimeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_InsertRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseInsertRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnInsertRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_InsertColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseInsertColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnInsertColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_RemoveRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseRemoveRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnRemoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_RemoveColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseRemoveColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnRemoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_fetch_more(void* self, void* parent) {
    KCategorizedSortFilterProxyModel_FetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_qbase_fetch_more(void* self, void* parent) {
    KCategorizedSortFilterProxyModel_QBaseFetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnFetchMore((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_can_fetch_more(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_CanFetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseCanFetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnCanFetchMore((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_flags(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_Flags((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

int32_t k_categorizedsortfilterproxymodel_qbase_flags(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_QBaseFlags((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnFlags((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_buddy(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_Buddy((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_buddy(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_QBaseBuddy((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnBuddy((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_Match((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_QBaseMatch((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_categorizedsortfilterproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KCategorizedSortFilterProxyModel_OnMatch((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QSize* k_categorizedsortfilterproxymodel_span(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_Span((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

QSize* k_categorizedsortfilterproxymodel_qbase_span(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_QBaseSpan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnSpan((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

const char** k_categorizedsortfilterproxymodel_mime_types(void* self) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_MimeTypes((KCategorizedSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_categorizedsortfilterproxymodel_mime_types\n");
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

const char** k_categorizedsortfilterproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_QBaseMimeTypes((KCategorizedSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_categorizedsortfilterproxymodel_mime_types\n");
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

void k_categorizedsortfilterproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    KCategorizedSortFilterProxyModel_OnMimeTypes((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_supported_drop_actions(void* self) {
    return KCategorizedSortFilterProxyModel_SupportedDropActions((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_qbase_supported_drop_actions(void* self) {
    return KCategorizedSortFilterProxyModel_QBaseSupportedDropActions((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KCategorizedSortFilterProxyModel_OnSupportedDropActions((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_submit(void* self) {
    return KCategorizedSortFilterProxyModel_Submit((KCategorizedSortFilterProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_qbase_submit(void* self) {
    return KCategorizedSortFilterProxyModel_QBaseSubmit((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_submit(void* self, bool (*callback)()) {
    KCategorizedSortFilterProxyModel_OnSubmit((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_revert(void* self) {
    KCategorizedSortFilterProxyModel_Revert((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_revert(void* self) {
    KCategorizedSortFilterProxyModel_QBaseRevert((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_revert(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnRevert((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_categorizedsortfilterproxymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCategorizedSortFilterProxyModel_ItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_categorizedsortfilterproxymodel_qbase_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCategorizedSortFilterProxyModel_QBaseItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_categorizedsortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnItemData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_categorizedsortfilterproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_categorizedsortfilterproxymodel_set_item_data\n");
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
    bool _out = KCategorizedSortFilterProxyModel_SetItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_categorizedsortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_categorizedsortfilterproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_categorizedsortfilterproxymodel_set_item_data\n");
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
    bool _out = KCategorizedSortFilterProxyModel_QBaseSetItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_categorizedsortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KCategorizedSortFilterProxyModel_OnSetItemData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_clear_item_data(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_ClearItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

bool k_categorizedsortfilterproxymodel_qbase_clear_item_data(void* self, void* index) {
    return KCategorizedSortFilterProxyModel_QBaseClearItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnClearItemData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCategorizedSortFilterProxyModel_CanDropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KCategorizedSortFilterProxyModel_QBaseCanDropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnCanDropMimeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_supported_drag_actions(void* self) {
    return KCategorizedSortFilterProxyModel_SupportedDragActions((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_qbase_supported_drag_actions(void* self) {
    return KCategorizedSortFilterProxyModel_QBaseSupportedDragActions((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KCategorizedSortFilterProxyModel_OnSupportedDragActions((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_categorizedsortfilterproxymodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KCategorizedSortFilterProxyModel_RoleNames((KCategorizedSortFilterProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_categorizedsortfilterproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_categorizedsortfilterproxymodel_role_names\n");
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

libqt_map /* of int to char* */ k_categorizedsortfilterproxymodel_qbase_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KCategorizedSortFilterProxyModel_QBaseRoleNames((KCategorizedSortFilterProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_categorizedsortfilterproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_categorizedsortfilterproxymodel_role_names\n");
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

void k_categorizedsortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KCategorizedSortFilterProxyModel_OnRoleNames((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_MoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_QBaseMoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_categorizedsortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCategorizedSortFilterProxyModel_OnMoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_MoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_QBaseMoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_categorizedsortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCategorizedSortFilterProxyModel_OnMoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KCategorizedSortFilterProxyModel_MultiData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_categorizedsortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KCategorizedSortFilterProxyModel_QBaseMultiData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_categorizedsortfilterproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnMultiData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_reset_internal_data(void* self) {
    KCategorizedSortFilterProxyModel_ResetInternalData((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_reset_internal_data(void* self) {
    KCategorizedSortFilterProxyModel_QBaseResetInternalData((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnResetInternalData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_event(void* self, void* event) {
    return KCategorizedSortFilterProxyModel_Event((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

bool k_categorizedsortfilterproxymodel_qbase_event(void* self, void* event) {
    return KCategorizedSortFilterProxyModel_QBaseEvent((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_event_filter(void* self, void* watched, void* event) {
    return KCategorizedSortFilterProxyModel_EventFilter((KCategorizedSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_categorizedsortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KCategorizedSortFilterProxyModel_QBaseEventFilter((KCategorizedSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnEventFilter((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_timer_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_TimerEvent((KCategorizedSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void k_categorizedsortfilterproxymodel_qbase_timer_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_QBaseTimerEvent((KCategorizedSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnTimerEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_child_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_ChildEvent((KCategorizedSortFilterProxyModel*)self, (QChildEvent*)event);
}

void k_categorizedsortfilterproxymodel_qbase_child_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_QBaseChildEvent((KCategorizedSortFilterProxyModel*)self, (QChildEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnChildEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_custom_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_CustomEvent((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_qbase_custom_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_QBaseCustomEvent((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnCustomEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_connect_notify(void* self, void* signal) {
    KCategorizedSortFilterProxyModel_ConnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_qbase_connect_notify(void* self, void* signal) {
    KCategorizedSortFilterProxyModel_QBaseConnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnConnectNotify((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_disconnect_notify(void* self, void* signal) {
    KCategorizedSortFilterProxyModel_DisconnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    KCategorizedSortFilterProxyModel_QBaseDisconnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnDisconnectNotify((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_invalidate_filter(void* self) {
    KCategorizedSortFilterProxyModel_InvalidateFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_invalidate_filter(void* self) {
    KCategorizedSortFilterProxyModel_QBaseInvalidateFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_invalidate_filter(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnInvalidateFilter((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_invalidate_rows_filter(void* self) {
    KCategorizedSortFilterProxyModel_InvalidateRowsFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_invalidate_rows_filter(void* self) {
    KCategorizedSortFilterProxyModel_QBaseInvalidateRowsFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnInvalidateRowsFilter((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_invalidate_columns_filter(void* self) {
    KCategorizedSortFilterProxyModel_InvalidateColumnsFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_invalidate_columns_filter(void* self) {
    KCategorizedSortFilterProxyModel_QBaseInvalidateColumnsFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnInvalidateColumnsFilter((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KCategorizedSortFilterProxyModel_CreateSourceIndex((KCategorizedSortFilterProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KCategorizedSortFilterProxyModel_QBaseCreateSourceIndex((KCategorizedSortFilterProxyModel*)self, row, col, internalPtr);
}

void k_categorizedsortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KCategorizedSortFilterProxyModel_OnCreateSourceIndex((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_create_index(void* self, int row, int column) {
    return KCategorizedSortFilterProxyModel_CreateIndex((KCategorizedSortFilterProxyModel*)self, row, column);
}

QModelIndex* k_categorizedsortfilterproxymodel_qbase_create_index(void* self, int row, int column) {
    return KCategorizedSortFilterProxyModel_QBaseCreateIndex((KCategorizedSortFilterProxyModel*)self, row, column);
}

void k_categorizedsortfilterproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KCategorizedSortFilterProxyModel_OnCreateIndex((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KCategorizedSortFilterProxyModel_EncodeData((KCategorizedSortFilterProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_categorizedsortfilterproxymodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KCategorizedSortFilterProxyModel_QBaseEncodeData((KCategorizedSortFilterProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_categorizedsortfilterproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KCategorizedSortFilterProxyModel_OnEncodeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KCategorizedSortFilterProxyModel_DecodeData((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_categorizedsortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KCategorizedSortFilterProxyModel_QBaseDecodeData((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_categorizedsortfilterproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnDecodeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginInsertRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_QBaseBeginInsertRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KCategorizedSortFilterProxyModel_OnBeginInsertRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_end_insert_rows(void* self) {
    KCategorizedSortFilterProxyModel_EndInsertRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_end_insert_rows(void* self) {
    KCategorizedSortFilterProxyModel_QBaseEndInsertRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnEndInsertRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginRemoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_QBaseBeginRemoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KCategorizedSortFilterProxyModel_OnBeginRemoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_end_remove_rows(void* self) {
    KCategorizedSortFilterProxyModel_EndRemoveRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_end_remove_rows(void* self) {
    KCategorizedSortFilterProxyModel_QBaseEndRemoveRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnEndRemoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KCategorizedSortFilterProxyModel_BeginMoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_categorizedsortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KCategorizedSortFilterProxyModel_QBaseBeginMoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_categorizedsortfilterproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCategorizedSortFilterProxyModel_OnBeginMoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_end_move_rows(void* self) {
    KCategorizedSortFilterProxyModel_EndMoveRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_end_move_rows(void* self) {
    KCategorizedSortFilterProxyModel_QBaseEndMoveRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnEndMoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginInsertColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_QBaseBeginInsertColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KCategorizedSortFilterProxyModel_OnBeginInsertColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_end_insert_columns(void* self) {
    KCategorizedSortFilterProxyModel_EndInsertColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_end_insert_columns(void* self) {
    KCategorizedSortFilterProxyModel_QBaseEndInsertColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnEndInsertColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginRemoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_QBaseBeginRemoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KCategorizedSortFilterProxyModel_OnBeginRemoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_end_remove_columns(void* self) {
    KCategorizedSortFilterProxyModel_EndRemoveColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_end_remove_columns(void* self) {
    KCategorizedSortFilterProxyModel_QBaseEndRemoveColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnEndRemoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KCategorizedSortFilterProxyModel_BeginMoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_categorizedsortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KCategorizedSortFilterProxyModel_QBaseBeginMoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_categorizedsortfilterproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KCategorizedSortFilterProxyModel_OnBeginMoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_end_move_columns(void* self) {
    KCategorizedSortFilterProxyModel_EndMoveColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_end_move_columns(void* self) {
    KCategorizedSortFilterProxyModel_QBaseEndMoveColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnEndMoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_begin_reset_model(void* self) {
    KCategorizedSortFilterProxyModel_BeginResetModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_begin_reset_model(void* self) {
    KCategorizedSortFilterProxyModel_QBaseBeginResetModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnBeginResetModel((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_end_reset_model(void* self) {
    KCategorizedSortFilterProxyModel_EndResetModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_qbase_end_reset_model(void* self) {
    KCategorizedSortFilterProxyModel_QBaseEndResetModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    KCategorizedSortFilterProxyModel_OnEndResetModel((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_change_persistent_index(void* self, void* from, void* to) {
    KCategorizedSortFilterProxyModel_ChangePersistentIndex((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_categorizedsortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KCategorizedSortFilterProxyModel_QBaseChangePersistentIndex((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_categorizedsortfilterproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnChangePersistentIndex((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KCategorizedSortFilterProxyModel_ChangePersistentIndexList((KCategorizedSortFilterProxyModel*)self, from, to);
}

void k_categorizedsortfilterproxymodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KCategorizedSortFilterProxyModel_QBaseChangePersistentIndexList((KCategorizedSortFilterProxyModel*)self, from, to);
}

void k_categorizedsortfilterproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KCategorizedSortFilterProxyModel_OnChangePersistentIndexList((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_PersistentIndexList((KCategorizedSortFilterProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_QBasePersistentIndexList((KCategorizedSortFilterProxyModel*)self);
    return _arr;
}

void k_categorizedsortfilterproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KCategorizedSortFilterProxyModel_OnPersistentIndexList((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QObject* k_categorizedsortfilterproxymodel_sender(void* self) {
    return KCategorizedSortFilterProxyModel_Sender((KCategorizedSortFilterProxyModel*)self);
}

QObject* k_categorizedsortfilterproxymodel_qbase_sender(void* self) {
    return KCategorizedSortFilterProxyModel_QBaseSender((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_sender(void* self, QObject* (*callback)()) {
    KCategorizedSortFilterProxyModel_OnSender((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_sender_signal_index(void* self) {
    return KCategorizedSortFilterProxyModel_SenderSignalIndex((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_qbase_sender_signal_index(void* self) {
    return KCategorizedSortFilterProxyModel_QBaseSenderSignalIndex((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCategorizedSortFilterProxyModel_OnSenderSignalIndex((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_receivers(void* self, const char* signal) {
    return KCategorizedSortFilterProxyModel_Receivers((KCategorizedSortFilterProxyModel*)self, signal);
}

int32_t k_categorizedsortfilterproxymodel_qbase_receivers(void* self, const char* signal) {
    return KCategorizedSortFilterProxyModel_QBaseReceivers((KCategorizedSortFilterProxyModel*)self, signal);
}

void k_categorizedsortfilterproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCategorizedSortFilterProxyModel_OnReceivers((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_is_signal_connected(void* self, void* signal) {
    return KCategorizedSortFilterProxyModel_IsSignalConnected((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

bool k_categorizedsortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return KCategorizedSortFilterProxyModel_QBaseIsSignalConnected((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnIsSignalConnected((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_delete(void* self) {
    KCategorizedSortFilterProxyModel_Delete((KCategorizedSortFilterProxyModel*)(self));
}
