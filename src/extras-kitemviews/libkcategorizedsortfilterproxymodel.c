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
    return KCategorizedSortFilterProxyModel_New();
}

KCategorizedSortFilterProxyModel* k_categorizedsortfilterproxymodel_new2(void* parent) {
    return KCategorizedSortFilterProxyModel_New2((QObject*)parent);
}

const QMetaObject* k_categorizedsortfilterproxymodel_meta_object(const void* self) {
    return KCategorizedSortFilterProxyModel_MetaObject((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    KCategorizedSortFilterProxyModel_OnMetaObject((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_categorizedsortfilterproxymodel_super_meta_object(const void* self) {
    return KCategorizedSortFilterProxyModel_SuperMetaObject((KCategorizedSortFilterProxyModel*)self);
}

void* k_categorizedsortfilterproxymodel_metacast(void* self, const char* param1) {
    return KCategorizedSortFilterProxyModel_Metacast((KCategorizedSortFilterProxyModel*)self, param1);
}

void k_categorizedsortfilterproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCategorizedSortFilterProxyModel_OnMetacast((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void* k_categorizedsortfilterproxymodel_super_metacast(void* self, const char* param1) {
    return KCategorizedSortFilterProxyModel_SuperMetacast((KCategorizedSortFilterProxyModel*)self, param1);
}

int32_t k_categorizedsortfilterproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCategorizedSortFilterProxyModel_Metacall((KCategorizedSortFilterProxyModel*)self, param1, param2, param3);
}

void k_categorizedsortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCategorizedSortFilterProxyModel_OnMetacall((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCategorizedSortFilterProxyModel_SuperMetacall((KCategorizedSortFilterProxyModel*)self, param1, param2, param3);
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

void k_categorizedsortfilterproxymodel_super_sort(void* self, int column, int32_t order) {
    KCategorizedSortFilterProxyModel_SuperSort((KCategorizedSortFilterProxyModel*)self, column, order);
}

bool k_categorizedsortfilterproxymodel_is_categorized_model(const void* self) {
    return KCategorizedSortFilterProxyModel_IsCategorizedModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_categorized_model(void* self, bool categorizedModel) {
    KCategorizedSortFilterProxyModel_SetCategorizedModel((KCategorizedSortFilterProxyModel*)self, categorizedModel);
}

int32_t k_categorizedsortfilterproxymodel_sort_column(const void* self) {
    return KCategorizedSortFilterProxyModel_SortColumn((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_sort_order(const void* self) {
    return KCategorizedSortFilterProxyModel_SortOrder((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_categories_by_natural_comparison(void* self, bool sortCategoriesByNaturalComparison) {
    KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison((KCategorizedSortFilterProxyModel*)self, sortCategoriesByNaturalComparison);
}

bool k_categorizedsortfilterproxymodel_sort_categories_by_natural_comparison(const void* self) {
    return KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison((KCategorizedSortFilterProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_less_than(const void* self, const void* left, const void* right) {
    return KCategorizedSortFilterProxyModel_LessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_categorizedsortfilterproxymodel_on_less_than(void* self, bool (*callback)(const void*, const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnLessThan((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_super_less_than(const void* self, const void* left, const void* right) {
    return KCategorizedSortFilterProxyModel_SuperLessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

bool k_categorizedsortfilterproxymodel_sub_sort_less_than(const void* self, const void* left, const void* right) {
    return KCategorizedSortFilterProxyModel_SubSortLessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_categorizedsortfilterproxymodel_on_sub_sort_less_than(void* self, bool (*callback)(const void*, const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnSubSortLessThan((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_super_sub_sort_less_than(const void* self, const void* left, const void* right) {
    return KCategorizedSortFilterProxyModel_SuperSubSortLessThan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

int32_t k_categorizedsortfilterproxymodel_compare_categories(const void* self, const void* left, const void* right) {
    return KCategorizedSortFilterProxyModel_CompareCategories((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_categorizedsortfilterproxymodel_on_compare_categories(void* self, int32_t (*callback)(const void*, const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnCompareCategories((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_super_compare_categories(const void* self, const void* left, const void* right) {
    return KCategorizedSortFilterProxyModel_SuperCompareCategories((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
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

QRegularExpression* k_categorizedsortfilterproxymodel_filter_regular_expression(const void* self) {
    return QSortFilterProxyModel_FilterRegularExpression((QSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_filter_key_column(const void* self) {
    return QSortFilterProxyModel_FilterKeyColumn((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_filter_key_column(void* self, int column) {
    QSortFilterProxyModel_SetFilterKeyColumn((QSortFilterProxyModel*)self, column);
}

int32_t k_categorizedsortfilterproxymodel_filter_case_sensitivity(const void* self) {
    return QSortFilterProxyModel_FilterCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_filter_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetFilterCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

int32_t k_categorizedsortfilterproxymodel_sort_case_sensitivity(const void* self) {
    return QSortFilterProxyModel_SortCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetSortCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

bool k_categorizedsortfilterproxymodel_is_sort_locale_aware(const void* self) {
    return QSortFilterProxyModel_IsSortLocaleAware((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_locale_aware(void* self, bool on) {
    QSortFilterProxyModel_SetSortLocaleAware((QSortFilterProxyModel*)self, on);
}

bool k_categorizedsortfilterproxymodel_dynamic_sort_filter(const void* self) {
    return QSortFilterProxyModel_DynamicSortFilter((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable) {
    QSortFilterProxyModel_SetDynamicSortFilter((QSortFilterProxyModel*)self, enable);
}

int32_t k_categorizedsortfilterproxymodel_sort_role(const void* self) {
    return QSortFilterProxyModel_SortRole((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_sort_role(void* self, int role) {
    QSortFilterProxyModel_SetSortRole((QSortFilterProxyModel*)self, role);
}

int32_t k_categorizedsortfilterproxymodel_filter_role(const void* self) {
    return QSortFilterProxyModel_FilterRole((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_filter_role(void* self, int role) {
    QSortFilterProxyModel_SetFilterRole((QSortFilterProxyModel*)self, role);
}

bool k_categorizedsortfilterproxymodel_is_recursive_filtering_enabled(const void* self) {
    return QSortFilterProxyModel_IsRecursiveFilteringEnabled((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive) {
    QSortFilterProxyModel_SetRecursiveFilteringEnabled((QSortFilterProxyModel*)self, recursive);
}

bool k_categorizedsortfilterproxymodel_auto_accept_child_rows(const void* self) {
    return QSortFilterProxyModel_AutoAcceptChildRows((QSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept) {
    QSortFilterProxyModel_SetAutoAcceptChildRows((QSortFilterProxyModel*)self, accept);
}

void k_categorizedsortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterRegularExpression((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_categorizedsortfilterproxymodel_set_filter_regular_expression2(void* self, const void* regularExpression) {
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

QAbstractItemModel* k_categorizedsortfilterproxymodel_source_model(const void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_has_index(const void* self, int row, int column) {
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

bool k_categorizedsortfilterproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_categorizedsortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
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

bool k_categorizedsortfilterproxymodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_categorizedsortfilterproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_categorizedsortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_categorizedsortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_categorizedsortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_categorizedsortfilterproxymodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedsortfilterproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_categorizedsortfilterproxymodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_categorizedsortfilterproxymodel_thread(const void* self) {
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

libqt_list /* of QObject* */ k_categorizedsortfilterproxymodel_children(const void* self) {
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

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_categorizedsortfilterproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_categorizedsortfilterproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_categorizedsortfilterproxymodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_categorizedsortfilterproxymodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_categorizedsortfilterproxymodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_categorizedsortfilterproxymodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_categorizedsortfilterproxymodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_categorizedsortfilterproxymodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_categorizedsortfilterproxymodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_categorizedsortfilterproxymodel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_categorizedsortfilterproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_categorizedsortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_inherits(const void* self, const char* classname) {
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

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_categorizedsortfilterproxymodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_categorizedsortfilterproxymodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_categorizedsortfilterproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_categorizedsortfilterproxymodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

void k_categorizedsortfilterproxymodel_super_set_source_model(void* self, void* sourceModel) {
    KCategorizedSortFilterProxyModel_SuperSetSourceModel((KCategorizedSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_categorizedsortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnSetSourceModel((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_map_to_source(const void* self, const void* proxyIndex) {
    return KCategorizedSortFilterProxyModel_MapToSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* k_categorizedsortfilterproxymodel_super_map_to_source(const void* self, const void* proxyIndex) {
    return KCategorizedSortFilterProxyModel_SuperMapToSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_categorizedsortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnMapToSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_map_from_source(const void* self, const void* sourceIndex) {
    return KCategorizedSortFilterProxyModel_MapFromSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_categorizedsortfilterproxymodel_super_map_from_source(const void* self, const void* sourceIndex) {
    return KCategorizedSortFilterProxyModel_SuperMapFromSource((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_categorizedsortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnMapFromSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_categorizedsortfilterproxymodel_map_selection_to_source(const void* self, const void* proxySelection) {
    return KCategorizedSortFilterProxyModel_MapSelectionToSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

QItemSelection* k_categorizedsortfilterproxymodel_super_map_selection_to_source(const void* self, const void* proxySelection) {
    return KCategorizedSortFilterProxyModel_SuperMapSelectionToSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

void k_categorizedsortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnMapSelectionToSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_categorizedsortfilterproxymodel_map_selection_from_source(const void* self, const void* sourceSelection) {
    return KCategorizedSortFilterProxyModel_MapSelectionFromSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

QItemSelection* k_categorizedsortfilterproxymodel_super_map_selection_from_source(const void* self, const void* sourceSelection) {
    return KCategorizedSortFilterProxyModel_SuperMapSelectionFromSource((KCategorizedSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

void k_categorizedsortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnMapSelectionFromSource((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_filter_accepts_row(const void* self, int source_row, const void* source_parent) {
    return KCategorizedSortFilterProxyModel_FilterAcceptsRow((KCategorizedSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

bool k_categorizedsortfilterproxymodel_super_filter_accepts_row(const void* self, int source_row, const void* source_parent) {
    return KCategorizedSortFilterProxyModel_SuperFilterAcceptsRow((KCategorizedSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

void k_categorizedsortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(const void*, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnFilterAcceptsRow((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_filter_accepts_column(const void* self, int source_column, const void* source_parent) {
    return KCategorizedSortFilterProxyModel_FilterAcceptsColumn((KCategorizedSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

bool k_categorizedsortfilterproxymodel_super_filter_accepts_column(const void* self, int source_column, const void* source_parent) {
    return KCategorizedSortFilterProxyModel_SuperFilterAcceptsColumn((KCategorizedSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

void k_categorizedsortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(const void*, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnFilterAcceptsColumn((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_index(const void* self, int row, int column, const void* parent) {
    return KCategorizedSortFilterProxyModel_Index((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_categorizedsortfilterproxymodel_super_index(const void* self, int row, int column, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperIndex((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnIndex((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_parent(const void* self, const void* child) {
    return KCategorizedSortFilterProxyModel_Parent((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_categorizedsortfilterproxymodel_super_parent(const void* self, const void* child) {
    return KCategorizedSortFilterProxyModel_SuperParent((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)child);
}

void k_categorizedsortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnParent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_sibling(const void* self, int row, int column, const void* idx) {
    return KCategorizedSortFilterProxyModel_Sibling((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_categorizedsortfilterproxymodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return KCategorizedSortFilterProxyModel_SuperSibling((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_categorizedsortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnSibling((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_row_count(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_RowCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_categorizedsortfilterproxymodel_super_row_count(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperRowCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnRowCount((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_column_count(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_ColumnCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_categorizedsortfilterproxymodel_super_column_count(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperColumnCount((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnColumnCount((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_has_children(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_HasChildren((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_has_children(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperHasChildren((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnHasChildren((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* k_categorizedsortfilterproxymodel_data(const void* self, const void* index, int role) {
    return KCategorizedSortFilterProxyModel_Data((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

QVariant* k_categorizedsortfilterproxymodel_super_data(const void* self, const void* index, int role) {
    return KCategorizedSortFilterProxyModel_SuperData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

void k_categorizedsortfilterproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int)) {
    KCategorizedSortFilterProxyModel_OnData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_set_data(void* self, const void* index, const void* value, int role) {
    return KCategorizedSortFilterProxyModel_SetData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_categorizedsortfilterproxymodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return KCategorizedSortFilterProxyModel_SuperSetData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_categorizedsortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    KCategorizedSortFilterProxyModel_OnSetData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* k_categorizedsortfilterproxymodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return KCategorizedSortFilterProxyModel_HeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, role);
}

QVariant* k_categorizedsortfilterproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return KCategorizedSortFilterProxyModel_SuperHeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, role);
}

void k_categorizedsortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    KCategorizedSortFilterProxyModel_OnHeaderData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KCategorizedSortFilterProxyModel_SetHeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_categorizedsortfilterproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return KCategorizedSortFilterProxyModel_SuperSetHeaderData((KCategorizedSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_categorizedsortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    KCategorizedSortFilterProxyModel_OnSetHeaderData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_categorizedsortfilterproxymodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KCategorizedSortFilterProxyModel_MimeData((KCategorizedSortFilterProxyModel*)self, indexes);
}

QMimeData* k_categorizedsortfilterproxymodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return KCategorizedSortFilterProxyModel_SuperMimeData((KCategorizedSortFilterProxyModel*)self, indexes);
}

void k_categorizedsortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    KCategorizedSortFilterProxyModel_OnMimeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCategorizedSortFilterProxyModel_DropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperDropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnDropMimeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_insert_rows(void* self, int row, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_InsertRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperInsertRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnInsertRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_insert_columns(void* self, int column, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_InsertColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperInsertColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnInsertColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_remove_rows(void* self, int row, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_RemoveRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperRemoveRows((KCategorizedSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnRemoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_remove_columns(void* self, int column, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_RemoveColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperRemoveColumns((KCategorizedSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnRemoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_fetch_more(void* self, const void* parent) {
    KCategorizedSortFilterProxyModel_FetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_super_fetch_more(void* self, const void* parent) {
    KCategorizedSortFilterProxyModel_SuperFetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnFetchMore((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_can_fetch_more(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_CanFetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_can_fetch_more(const void* self, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperCanFetchMore((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnCanFetchMore((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_flags(const void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_Flags((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

int32_t k_categorizedsortfilterproxymodel_super_flags(const void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_SuperFlags((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnFlags((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedsortfilterproxymodel_buddy(const void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_Buddy((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_categorizedsortfilterproxymodel_super_buddy(const void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_SuperBuddy((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnBuddy((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_Match((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_SuperMatch((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_categorizedsortfilterproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    KCategorizedSortFilterProxyModel_OnMatch((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

QSize* k_categorizedsortfilterproxymodel_span(const void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_Span((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

QSize* k_categorizedsortfilterproxymodel_super_span(const void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_SuperSpan((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnSpan((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

const char** k_categorizedsortfilterproxymodel_mime_types(const void* self) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_MimeTypes((KCategorizedSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_categorizedsortfilterproxymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** k_categorizedsortfilterproxymodel_super_mime_types(const void* self) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_SuperMimeTypes((KCategorizedSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_categorizedsortfilterproxymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_categorizedsortfilterproxymodel_on_mime_types(void* self, const char** (*callback)(const void*)) {
    KCategorizedSortFilterProxyModel_OnMimeTypes((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_supported_drop_actions(const void* self) {
    return KCategorizedSortFilterProxyModel_SupportedDropActions((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_super_supported_drop_actions(const void* self) {
    return KCategorizedSortFilterProxyModel_SuperSupportedDropActions((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*)) {
    KCategorizedSortFilterProxyModel_OnSupportedDropActions((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_submit(void* self) {
    return KCategorizedSortFilterProxyModel_Submit((KCategorizedSortFilterProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_super_submit(void* self) {
    return KCategorizedSortFilterProxyModel_SuperSubmit((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_submit(void* self, bool (*callback)(void*)) {
    KCategorizedSortFilterProxyModel_OnSubmit((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_revert(void* self) {
    KCategorizedSortFilterProxyModel_Revert((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_super_revert(void* self) {
    KCategorizedSortFilterProxyModel_SuperRevert((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_revert(void* self, void (*callback)(void*)) {
    KCategorizedSortFilterProxyModel_OnRevert((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_categorizedsortfilterproxymodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCategorizedSortFilterProxyModel_ItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_categorizedsortfilterproxymodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = KCategorizedSortFilterProxyModel_SuperItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_categorizedsortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnItemData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
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

bool k_categorizedsortfilterproxymodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
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
    bool _out = KCategorizedSortFilterProxyModel_SuperSetItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_categorizedsortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    KCategorizedSortFilterProxyModel_OnSetItemData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_clear_item_data(void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_ClearItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

bool k_categorizedsortfilterproxymodel_super_clear_item_data(void* self, const void* index) {
    return KCategorizedSortFilterProxyModel_SuperClearItemData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_categorizedsortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnClearItemData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCategorizedSortFilterProxyModel_CanDropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_categorizedsortfilterproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return KCategorizedSortFilterProxyModel_SuperCanDropMimeData((KCategorizedSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_categorizedsortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    KCategorizedSortFilterProxyModel_OnCanDropMimeData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_categorizedsortfilterproxymodel_supported_drag_actions(const void* self) {
    return KCategorizedSortFilterProxyModel_SupportedDragActions((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_super_supported_drag_actions(const void* self) {
    return KCategorizedSortFilterProxyModel_SuperSupportedDragActions((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*)) {
    KCategorizedSortFilterProxyModel_OnSupportedDragActions((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_categorizedsortfilterproxymodel_role_names(const void* self) {
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

libqt_map /* of int to char* */ k_categorizedsortfilterproxymodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = KCategorizedSortFilterProxyModel_SuperRoleNames((KCategorizedSortFilterProxyModel*)self);
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

void k_categorizedsortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)(const void*)) {
    KCategorizedSortFilterProxyModel_OnRoleNames((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_MoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_SuperMoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_categorizedsortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KCategorizedSortFilterProxyModel_OnMoveRows((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_MoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_categorizedsortfilterproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return KCategorizedSortFilterProxyModel_SuperMoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_categorizedsortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    KCategorizedSortFilterProxyModel_OnMoveColumns((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KCategorizedSortFilterProxyModel_MultiData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_categorizedsortfilterproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    KCategorizedSortFilterProxyModel_SuperMultiData((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_categorizedsortfilterproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*)) {
    KCategorizedSortFilterProxyModel_OnMultiData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_reset_internal_data(void* self) {
    KCategorizedSortFilterProxyModel_ResetInternalData((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_super_reset_internal_data(void* self) {
    KCategorizedSortFilterProxyModel_SuperResetInternalData((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    KCategorizedSortFilterProxyModel_OnResetInternalData((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_event(void* self, void* event) {
    return KCategorizedSortFilterProxyModel_Event((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

bool k_categorizedsortfilterproxymodel_super_event(void* self, void* event) {
    return KCategorizedSortFilterProxyModel_SuperEvent((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_categorizedsortfilterproxymodel_event_filter(void* self, void* watched, void* event) {
    return KCategorizedSortFilterProxyModel_EventFilter((KCategorizedSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_categorizedsortfilterproxymodel_super_event_filter(void* self, void* watched, void* event) {
    return KCategorizedSortFilterProxyModel_SuperEventFilter((KCategorizedSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCategorizedSortFilterProxyModel_OnEventFilter((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_timer_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_TimerEvent((KCategorizedSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void k_categorizedsortfilterproxymodel_super_timer_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_SuperTimerEvent((KCategorizedSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnTimerEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_child_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_ChildEvent((KCategorizedSortFilterProxyModel*)self, (QChildEvent*)event);
}

void k_categorizedsortfilterproxymodel_super_child_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_SuperChildEvent((KCategorizedSortFilterProxyModel*)self, (QChildEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnChildEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_custom_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_CustomEvent((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_super_custom_event(void* self, void* event) {
    KCategorizedSortFilterProxyModel_SuperCustomEvent((KCategorizedSortFilterProxyModel*)self, (QEvent*)event);
}

void k_categorizedsortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedSortFilterProxyModel_OnCustomEvent((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_connect_notify(void* self, const void* signal) {
    KCategorizedSortFilterProxyModel_ConnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_super_connect_notify(void* self, const void* signal) {
    KCategorizedSortFilterProxyModel_SuperConnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnConnectNotify((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_disconnect_notify(void* self, const void* signal) {
    KCategorizedSortFilterProxyModel_DisconnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_super_disconnect_notify(void* self, const void* signal) {
    KCategorizedSortFilterProxyModel_SuperDisconnectNotify((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KCategorizedSortFilterProxyModel_OnDisconnectNotify((KCategorizedSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_invalidate_filter(void* self) {
    KCategorizedSortFilterProxyModel_InvalidateFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_invalidate_rows_filter(void* self) {
    KCategorizedSortFilterProxyModel_InvalidateRowsFilter((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_invalidate_columns_filter(void* self) {
    KCategorizedSortFilterProxyModel_InvalidateColumnsFilter((KCategorizedSortFilterProxyModel*)self);
}

QModelIndex* k_categorizedsortfilterproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr) {
    return KCategorizedSortFilterProxyModel_CreateSourceIndex((KCategorizedSortFilterProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_categorizedsortfilterproxymodel_create_index(const void* self, int row, int column) {
    return KCategorizedSortFilterProxyModel_CreateIndex((KCategorizedSortFilterProxyModel*)self, row, column);
}

void k_categorizedsortfilterproxymodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    KCategorizedSortFilterProxyModel_EncodeData((KCategorizedSortFilterProxyModel*)self, indexes, (QDataStream*)stream);
}

bool k_categorizedsortfilterproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return KCategorizedSortFilterProxyModel_DecodeData((KCategorizedSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_categorizedsortfilterproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginInsertRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_end_insert_rows(void* self) {
    KCategorizedSortFilterProxyModel_EndInsertRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginRemoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_end_remove_rows(void* self) {
    KCategorizedSortFilterProxyModel_EndRemoveRows((KCategorizedSortFilterProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return KCategorizedSortFilterProxyModel_BeginMoveRows((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_categorizedsortfilterproxymodel_end_move_rows(void* self) {
    KCategorizedSortFilterProxyModel_EndMoveRows((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginInsertColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_end_insert_columns(void* self) {
    KCategorizedSortFilterProxyModel_EndInsertColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    KCategorizedSortFilterProxyModel_BeginRemoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_categorizedsortfilterproxymodel_end_remove_columns(void* self) {
    KCategorizedSortFilterProxyModel_EndRemoveColumns((KCategorizedSortFilterProxyModel*)self);
}

bool k_categorizedsortfilterproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return KCategorizedSortFilterProxyModel_BeginMoveColumns((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_categorizedsortfilterproxymodel_end_move_columns(void* self) {
    KCategorizedSortFilterProxyModel_EndMoveColumns((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_begin_reset_model(void* self) {
    KCategorizedSortFilterProxyModel_BeginResetModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_end_reset_model(void* self) {
    KCategorizedSortFilterProxyModel_EndResetModel((KCategorizedSortFilterProxyModel*)self);
}

void k_categorizedsortfilterproxymodel_change_persistent_index(void* self, const void* from, const void* to) {
    KCategorizedSortFilterProxyModel_ChangePersistentIndex((KCategorizedSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_categorizedsortfilterproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    KCategorizedSortFilterProxyModel_ChangePersistentIndexList((KCategorizedSortFilterProxyModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_persistent_index_list(const void* self) {
    libqt_list _arr = KCategorizedSortFilterProxyModel_PersistentIndexList((KCategorizedSortFilterProxyModel*)self);
    return _arr;
}

QObject* k_categorizedsortfilterproxymodel_sender(const void* self) {
    return KCategorizedSortFilterProxyModel_Sender((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_sender_signal_index(const void* self) {
    return KCategorizedSortFilterProxyModel_SenderSignalIndex((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_categorizedsortfilterproxymodel_receivers(const void* self, const char* signal) {
    return KCategorizedSortFilterProxyModel_Receivers((KCategorizedSortFilterProxyModel*)self, signal);
}

bool k_categorizedsortfilterproxymodel_is_signal_connected(const void* self, const void* signal) {
    return KCategorizedSortFilterProxyModel_IsSignalConnected((KCategorizedSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_categorizedsortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_categorizedsortfilterproxymodel_delete(void* self) {
    KCategorizedSortFilterProxyModel_Delete((KCategorizedSortFilterProxyModel*)(self));
}
