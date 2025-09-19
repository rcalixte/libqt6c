#include "../extras-kitemviews/libkcategorizedsortfilterproxymodel.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqabstractproxymodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqfileinfo.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqsortfilterproxymodel.hpp"
#include "../libqvariant.hpp"
#include "libkdirsortfilterproxymodel.hpp"
#include "libkdirsortfilterproxymodel.h"

KDirSortFilterProxyModel* k_dirsortfilterproxymodel_new() {
    return KDirSortFilterProxyModel_new();
}

KDirSortFilterProxyModel* k_dirsortfilterproxymodel_new2(void* parent) {
    return KDirSortFilterProxyModel_new2((QObject*)parent);
}

const QMetaObject* k_dirsortfilterproxymodel_meta_object(void* self) {
    return KDirSortFilterProxyModel_MetaObject((KDirSortFilterProxyModel*)self);
}

void* k_dirsortfilterproxymodel_metacast(void* self, const char* param1) {
    return KDirSortFilterProxyModel_Metacast((KDirSortFilterProxyModel*)self, param1);
}

int32_t k_dirsortfilterproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirSortFilterProxyModel_Metacall((KDirSortFilterProxyModel*)self, param1, param2, param3);
}

void k_dirsortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDirSortFilterProxyModel_OnMetacall((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirSortFilterProxyModel_QBaseMetacall((KDirSortFilterProxyModel*)self, param1, param2, param3);
}

const char* k_dirsortfilterproxymodel_tr(const char* s) {
    libqt_string _str = KDirSortFilterProxyModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_dirsortfilterproxymodel_has_children(void* self, void* parent) {
    return KDirSortFilterProxyModel_HasChildren((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnHasChildren((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_qbase_has_children(void* self, void* parent) {
    return KDirSortFilterProxyModel_QBaseHasChildren((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_can_fetch_more(void* self, void* parent) {
    return KDirSortFilterProxyModel_CanFetchMore((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnCanFetchMore((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return KDirSortFilterProxyModel_QBaseCanFetchMore((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_dirsortfilterproxymodel_points_for_permissions(void* info) {
    return KDirSortFilterProxyModel_PointsForPermissions((QFileInfo*)info);
}

void k_dirsortfilterproxymodel_set_sort_folders_first(void* self, bool foldersFirst) {
    KDirSortFilterProxyModel_SetSortFoldersFirst((KDirSortFilterProxyModel*)self, foldersFirst);
}

bool k_dirsortfilterproxymodel_sort_folders_first(void* self) {
    return KDirSortFilterProxyModel_SortFoldersFirst((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_sort_hidden_files_last(void* self, bool hiddenFilesLast) {
    KDirSortFilterProxyModel_SetSortHiddenFilesLast((KDirSortFilterProxyModel*)self, hiddenFilesLast);
}

bool k_dirsortfilterproxymodel_sort_hidden_files_last(void* self) {
    return KDirSortFilterProxyModel_SortHiddenFilesLast((KDirSortFilterProxyModel*)self);
}

int32_t k_dirsortfilterproxymodel_supported_drag_options(void* self) {
    return KDirSortFilterProxyModel_SupportedDragOptions((KDirSortFilterProxyModel*)self);
}

bool k_dirsortfilterproxymodel_sub_sort_less_than(void* self, void* left, void* right) {
    return KDirSortFilterProxyModel_SubSortLessThan((KDirSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_dirsortfilterproxymodel_on_sub_sort_less_than(void* self, bool (*callback)(void*, void*, void*)) {
    KDirSortFilterProxyModel_OnSubSortLessThan((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_qbase_sub_sort_less_than(void* self, void* left, void* right) {
    return KDirSortFilterProxyModel_QBaseSubSortLessThan((KDirSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

const char* k_dirsortfilterproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = KDirSortFilterProxyModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_dirsortfilterproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KDirSortFilterProxyModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_dirsortfilterproxymodel_is_categorized_model(void* self) {
    return KCategorizedSortFilterProxyModel_IsCategorizedModel((KCategorizedSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_categorized_model(void* self, bool categorizedModel) {
    KCategorizedSortFilterProxyModel_SetCategorizedModel((KCategorizedSortFilterProxyModel*)self, categorizedModel);
}

int32_t k_dirsortfilterproxymodel_sort_column(void* self) {
    return KCategorizedSortFilterProxyModel_SortColumn((KCategorizedSortFilterProxyModel*)self);
}

int32_t k_dirsortfilterproxymodel_sort_order(void* self) {
    return KCategorizedSortFilterProxyModel_SortOrder((KCategorizedSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_sort_categories_by_natural_comparison(void* self, bool sortCategoriesByNaturalComparison) {
    KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison((KCategorizedSortFilterProxyModel*)self, sortCategoriesByNaturalComparison);
}

bool k_dirsortfilterproxymodel_sort_categories_by_natural_comparison(void* self) {
    return KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison((KCategorizedSortFilterProxyModel*)self);
}

QRegularExpression* k_dirsortfilterproxymodel_filter_regular_expression(void* self) {
    return QSortFilterProxyModel_FilterRegularExpression((QSortFilterProxyModel*)self);
}

int32_t k_dirsortfilterproxymodel_filter_key_column(void* self) {
    return QSortFilterProxyModel_FilterKeyColumn((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_filter_key_column(void* self, int column) {
    QSortFilterProxyModel_SetFilterKeyColumn((QSortFilterProxyModel*)self, column);
}

int32_t k_dirsortfilterproxymodel_filter_case_sensitivity(void* self) {
    return QSortFilterProxyModel_FilterCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_filter_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetFilterCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

int32_t k_dirsortfilterproxymodel_sort_case_sensitivity(void* self) {
    return QSortFilterProxyModel_SortCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_sort_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetSortCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

bool k_dirsortfilterproxymodel_is_sort_locale_aware(void* self) {
    return QSortFilterProxyModel_IsSortLocaleAware((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_sort_locale_aware(void* self, bool on) {
    QSortFilterProxyModel_SetSortLocaleAware((QSortFilterProxyModel*)self, on);
}

bool k_dirsortfilterproxymodel_dynamic_sort_filter(void* self) {
    return QSortFilterProxyModel_DynamicSortFilter((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable) {
    QSortFilterProxyModel_SetDynamicSortFilter((QSortFilterProxyModel*)self, enable);
}

int32_t k_dirsortfilterproxymodel_sort_role(void* self) {
    return QSortFilterProxyModel_SortRole((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_sort_role(void* self, int role) {
    QSortFilterProxyModel_SetSortRole((QSortFilterProxyModel*)self, role);
}

int32_t k_dirsortfilterproxymodel_filter_role(void* self) {
    return QSortFilterProxyModel_FilterRole((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_filter_role(void* self, int role) {
    QSortFilterProxyModel_SetFilterRole((QSortFilterProxyModel*)self, role);
}

bool k_dirsortfilterproxymodel_is_recursive_filtering_enabled(void* self) {
    return QSortFilterProxyModel_IsRecursiveFilteringEnabled((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive) {
    QSortFilterProxyModel_SetRecursiveFilteringEnabled((QSortFilterProxyModel*)self, recursive);
}

bool k_dirsortfilterproxymodel_auto_accept_child_rows(void* self) {
    return QSortFilterProxyModel_AutoAcceptChildRows((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept) {
    QSortFilterProxyModel_SetAutoAcceptChildRows((QSortFilterProxyModel*)self, accept);
}

void k_dirsortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterRegularExpression((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_dirsortfilterproxymodel_set_filter_regular_expression2(void* self, void* regularExpression) {
    QSortFilterProxyModel_SetFilterRegularExpression2((QSortFilterProxyModel*)self, (QRegularExpression*)regularExpression);
}

void k_dirsortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterWildcard((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_dirsortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterFixedString((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_dirsortfilterproxymodel_invalidate(void* self) {
    QSortFilterProxyModel_Invalidate((QSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter) {
    QSortFilterProxyModel_DynamicSortFilterChanged((QSortFilterProxyModel*)self, dynamicSortFilter);
}

void k_dirsortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_DynamicSortFilterChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_filter_case_sensitivity_changed(void* self, int32_t filterCaseSensitivity) {
    QSortFilterProxyModel_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, filterCaseSensitivity);
}

void k_dirsortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_sort_case_sensitivity_changed(void* self, int32_t sortCaseSensitivity) {
    QSortFilterProxyModel_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, sortCaseSensitivity);
}

void k_dirsortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware) {
    QSortFilterProxyModel_SortLocaleAwareChanged((QSortFilterProxyModel*)self, sortLocaleAware);
}

void k_dirsortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_SortLocaleAwareChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_sort_role_changed(void* self, int sortRole) {
    QSortFilterProxyModel_SortRoleChanged((QSortFilterProxyModel*)self, sortRole);
}

void k_dirsortfilterproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_SortRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_filter_role_changed(void* self, int filterRole) {
    QSortFilterProxyModel_FilterRoleChanged((QSortFilterProxyModel*)self, filterRole);
}

void k_dirsortfilterproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_FilterRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled) {
    QSortFilterProxyModel_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, recursiveFilteringEnabled);
}

void k_dirsortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows) {
    QSortFilterProxyModel_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, autoAcceptChildRows);
}

void k_dirsortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QAbstractItemModel* k_dirsortfilterproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_dirsortfilterproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_dirsortfilterproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_dirsortfilterproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_dirsortfilterproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_dirsortfilterproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_dirsortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirsortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirsortfilterproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_dirsortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_dirsortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_dirsortfilterproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_dirsortfilterproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_dirsortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_dirsortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_dirsortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_dirsortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_dirsortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_dirsortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_dirsortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_dirsortfilterproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirsortfilterproxymodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_dirsortfilterproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_dirsortfilterproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_dirsortfilterproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_dirsortfilterproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_dirsortfilterproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_dirsortfilterproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_dirsortfilterproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_dirsortfilterproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_dirsortfilterproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_dirsortfilterproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_dirsortfilterproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_dirsortfilterproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_dirsortfilterproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_dirsortfilterproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_dirsortfilterproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_dirsortfilterproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_dirsortfilterproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_dirsortfilterproxymodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_dirsortfilterproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_dirsortfilterproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_dirsortfilterproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_dirsortfilterproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_dirsortfilterproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirsortfilterproxymodel_dynamic_property_names");
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

QBindingStorage* k_dirsortfilterproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_dirsortfilterproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_dirsortfilterproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_dirsortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_dirsortfilterproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_dirsortfilterproxymodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_dirsortfilterproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_dirsortfilterproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_dirsortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_dirsortfilterproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_dirsortfilterproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_sort(void* self, int column, int32_t order) {
    KDirSortFilterProxyModel_Sort((KDirSortFilterProxyModel*)self, column, order);
}

void k_dirsortfilterproxymodel_qbase_sort(void* self, int column, int32_t order) {
    KDirSortFilterProxyModel_QBaseSort((KDirSortFilterProxyModel*)self, column, order);
}

void k_dirsortfilterproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KDirSortFilterProxyModel_OnSort((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_less_than(void* self, void* left, void* right) {
    return KDirSortFilterProxyModel_LessThan((KDirSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

bool k_dirsortfilterproxymodel_qbase_less_than(void* self, void* left, void* right) {
    return KDirSortFilterProxyModel_QBaseLessThan((KDirSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_dirsortfilterproxymodel_on_less_than(void* self, bool (*callback)(void*, void*, void*)) {
    KDirSortFilterProxyModel_OnLessThan((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_compare_categories(void* self, void* left, void* right) {
    return KDirSortFilterProxyModel_CompareCategories((KDirSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

int32_t k_dirsortfilterproxymodel_qbase_compare_categories(void* self, void* left, void* right) {
    return KDirSortFilterProxyModel_QBaseCompareCategories((KDirSortFilterProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_dirsortfilterproxymodel_on_compare_categories(void* self, int32_t (*callback)(void*, void*, void*)) {
    KDirSortFilterProxyModel_OnCompareCategories((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_set_source_model(void* self, void* sourceModel) {
    KDirSortFilterProxyModel_SetSourceModel((KDirSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_dirsortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    KDirSortFilterProxyModel_QBaseSetSourceModel((KDirSortFilterProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_dirsortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnSetSourceModel((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_map_to_source(void* self, void* proxyIndex) {
    return KDirSortFilterProxyModel_MapToSource((KDirSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return KDirSortFilterProxyModel_QBaseMapToSource((KDirSortFilterProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_dirsortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnMapToSource((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_map_from_source(void* self, void* sourceIndex) {
    return KDirSortFilterProxyModel_MapFromSource((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return KDirSortFilterProxyModel_QBaseMapFromSource((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_dirsortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnMapFromSource((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_dirsortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection) {
    return KDirSortFilterProxyModel_MapSelectionToSource((KDirSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

QItemSelection* k_dirsortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection) {
    return KDirSortFilterProxyModel_QBaseMapSelectionToSource((KDirSortFilterProxyModel*)self, (QItemSelection*)proxySelection);
}

void k_dirsortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnMapSelectionToSource((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_dirsortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection) {
    return KDirSortFilterProxyModel_MapSelectionFromSource((KDirSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

QItemSelection* k_dirsortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection) {
    return KDirSortFilterProxyModel_QBaseMapSelectionFromSource((KDirSortFilterProxyModel*)self, (QItemSelection*)sourceSelection);
}

void k_dirsortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnMapSelectionFromSource((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return KDirSortFilterProxyModel_FilterAcceptsRow((KDirSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

bool k_dirsortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return KDirSortFilterProxyModel_QBaseFilterAcceptsRow((KDirSortFilterProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

void k_dirsortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(void*, int, void*)) {
    KDirSortFilterProxyModel_OnFilterAcceptsRow((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return KDirSortFilterProxyModel_FilterAcceptsColumn((KDirSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

bool k_dirsortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return KDirSortFilterProxyModel_QBaseFilterAcceptsColumn((KDirSortFilterProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

void k_dirsortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(void*, int, void*)) {
    KDirSortFilterProxyModel_OnFilterAcceptsColumn((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_index(void* self, int row, int column, void* parent) {
    return KDirSortFilterProxyModel_Index((KDirSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return KDirSortFilterProxyModel_QBaseIndex((KDirSortFilterProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDirSortFilterProxyModel_OnIndex((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_parent(void* self, void* child) {
    return KDirSortFilterProxyModel_Parent((KDirSortFilterProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_parent(void* self, void* child) {
    return KDirSortFilterProxyModel_QBaseParent((KDirSortFilterProxyModel*)self, (QModelIndex*)child);
}

void k_dirsortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnParent((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_sibling(void* self, int row, int column, void* idx) {
    return KDirSortFilterProxyModel_Sibling((KDirSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KDirSortFilterProxyModel_QBaseSibling((KDirSortFilterProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_dirsortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDirSortFilterProxyModel_OnSibling((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_row_count(void* self, void* parent) {
    return KDirSortFilterProxyModel_RowCount((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_dirsortfilterproxymodel_qbase_row_count(void* self, void* parent) {
    return KDirSortFilterProxyModel_QBaseRowCount((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnRowCount((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_column_count(void* self, void* parent) {
    return KDirSortFilterProxyModel_ColumnCount((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_dirsortfilterproxymodel_qbase_column_count(void* self, void* parent) {
    return KDirSortFilterProxyModel_QBaseColumnCount((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnColumnCount((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* k_dirsortfilterproxymodel_data(void* self, void* index, int role) {
    return KDirSortFilterProxyModel_Data((KDirSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

QVariant* k_dirsortfilterproxymodel_qbase_data(void* self, void* index, int role) {
    return KDirSortFilterProxyModel_QBaseData((KDirSortFilterProxyModel*)self, (QModelIndex*)index, role);
}

void k_dirsortfilterproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KDirSortFilterProxyModel_OnData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_set_data(void* self, void* index, void* value, int role) {
    return KDirSortFilterProxyModel_SetData((KDirSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_dirsortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KDirSortFilterProxyModel_QBaseSetData((KDirSortFilterProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_dirsortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KDirSortFilterProxyModel_OnSetData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QVariant* k_dirsortfilterproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KDirSortFilterProxyModel_HeaderData((KDirSortFilterProxyModel*)self, section, orientation, role);
}

QVariant* k_dirsortfilterproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KDirSortFilterProxyModel_QBaseHeaderData((KDirSortFilterProxyModel*)self, section, orientation, role);
}

void k_dirsortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KDirSortFilterProxyModel_OnHeaderData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KDirSortFilterProxyModel_SetHeaderData((KDirSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_dirsortfilterproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KDirSortFilterProxyModel_QBaseSetHeaderData((KDirSortFilterProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_dirsortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KDirSortFilterProxyModel_OnSetHeaderData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_dirsortfilterproxymodel_mime_data(void* self, libqt_list indexes) {
    return KDirSortFilterProxyModel_MimeData((KDirSortFilterProxyModel*)self, indexes);
}

QMimeData* k_dirsortfilterproxymodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KDirSortFilterProxyModel_QBaseMimeData((KDirSortFilterProxyModel*)self, indexes);
}

void k_dirsortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KDirSortFilterProxyModel_OnMimeData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirSortFilterProxyModel_DropMimeData((KDirSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirSortFilterProxyModel_QBaseDropMimeData((KDirSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KDirSortFilterProxyModel_OnDropMimeData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return KDirSortFilterProxyModel_InsertRows((KDirSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KDirSortFilterProxyModel_QBaseInsertRows((KDirSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KDirSortFilterProxyModel_OnInsertRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return KDirSortFilterProxyModel_InsertColumns((KDirSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KDirSortFilterProxyModel_QBaseInsertColumns((KDirSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KDirSortFilterProxyModel_OnInsertColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return KDirSortFilterProxyModel_RemoveRows((KDirSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KDirSortFilterProxyModel_QBaseRemoveRows((KDirSortFilterProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KDirSortFilterProxyModel_OnRemoveRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return KDirSortFilterProxyModel_RemoveColumns((KDirSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KDirSortFilterProxyModel_QBaseRemoveColumns((KDirSortFilterProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KDirSortFilterProxyModel_OnRemoveColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_fetch_more(void* self, void* parent) {
    KDirSortFilterProxyModel_FetchMore((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_qbase_fetch_more(void* self, void* parent) {
    KDirSortFilterProxyModel_QBaseFetchMore((KDirSortFilterProxyModel*)self, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnFetchMore((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_flags(void* self, void* index) {
    return KDirSortFilterProxyModel_Flags((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

int32_t k_dirsortfilterproxymodel_qbase_flags(void* self, void* index) {
    return KDirSortFilterProxyModel_QBaseFlags((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_dirsortfilterproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnFlags((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_buddy(void* self, void* index) {
    return KDirSortFilterProxyModel_Buddy((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_buddy(void* self, void* index) {
    return KDirSortFilterProxyModel_QBaseBuddy((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_dirsortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnBuddy((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_dirsortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KDirSortFilterProxyModel_Match((KDirSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_dirsortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KDirSortFilterProxyModel_QBaseMatch((KDirSortFilterProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_dirsortfilterproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KDirSortFilterProxyModel_OnMatch((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QSize* k_dirsortfilterproxymodel_span(void* self, void* index) {
    return KDirSortFilterProxyModel_Span((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

QSize* k_dirsortfilterproxymodel_qbase_span(void* self, void* index) {
    return KDirSortFilterProxyModel_QBaseSpan((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_dirsortfilterproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnSpan((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

const char** k_dirsortfilterproxymodel_mime_types(void* self) {
    libqt_list _arr = KDirSortFilterProxyModel_MimeTypes((KDirSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirsortfilterproxymodel_mime_types");
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

const char** k_dirsortfilterproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = KDirSortFilterProxyModel_QBaseMimeTypes((KDirSortFilterProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirsortfilterproxymodel_mime_types");
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

void k_dirsortfilterproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    KDirSortFilterProxyModel_OnMimeTypes((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_supported_drop_actions(void* self) {
    return KDirSortFilterProxyModel_SupportedDropActions((KDirSortFilterProxyModel*)self);
}

int32_t k_dirsortfilterproxymodel_qbase_supported_drop_actions(void* self) {
    return KDirSortFilterProxyModel_QBaseSupportedDropActions((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KDirSortFilterProxyModel_OnSupportedDropActions((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_submit(void* self) {
    return KDirSortFilterProxyModel_Submit((KDirSortFilterProxyModel*)self);
}

bool k_dirsortfilterproxymodel_qbase_submit(void* self) {
    return KDirSortFilterProxyModel_QBaseSubmit((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_submit(void* self, bool (*callback)()) {
    KDirSortFilterProxyModel_OnSubmit((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_revert(void* self) {
    KDirSortFilterProxyModel_Revert((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_revert(void* self) {
    KDirSortFilterProxyModel_QBaseRevert((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_revert(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnRevert((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_dirsortfilterproxymodel_item_data(void* self, void* index) {
    return KDirSortFilterProxyModel_ItemData((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ k_dirsortfilterproxymodel_qbase_item_data(void* self, void* index) {
    return KDirSortFilterProxyModel_QBaseItemData((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_dirsortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnItemData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KDirSortFilterProxyModel_SetItemData((KDirSortFilterProxyModel*)self, (QModelIndex*)index, roles);
}

bool k_dirsortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KDirSortFilterProxyModel_QBaseSetItemData((KDirSortFilterProxyModel*)self, (QModelIndex*)index, roles);
}

void k_dirsortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KDirSortFilterProxyModel_OnSetItemData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_clear_item_data(void* self, void* index) {
    return KDirSortFilterProxyModel_ClearItemData((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

bool k_dirsortfilterproxymodel_qbase_clear_item_data(void* self, void* index) {
    return KDirSortFilterProxyModel_QBaseClearItemData((KDirSortFilterProxyModel*)self, (QModelIndex*)index);
}

void k_dirsortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnClearItemData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirSortFilterProxyModel_CanDropMimeData((KDirSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_dirsortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KDirSortFilterProxyModel_QBaseCanDropMimeData((KDirSortFilterProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_dirsortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KDirSortFilterProxyModel_OnCanDropMimeData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_supported_drag_actions(void* self) {
    return KDirSortFilterProxyModel_SupportedDragActions((KDirSortFilterProxyModel*)self);
}

int32_t k_dirsortfilterproxymodel_qbase_supported_drag_actions(void* self) {
    return KDirSortFilterProxyModel_QBaseSupportedDragActions((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KDirSortFilterProxyModel_OnSupportedDragActions((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_dirsortfilterproxymodel_role_names(void* self) {
    return KDirSortFilterProxyModel_RoleNames((KDirSortFilterProxyModel*)self);
}

libqt_map /* of int to char* */ k_dirsortfilterproxymodel_qbase_role_names(void* self) {
    return KDirSortFilterProxyModel_QBaseRoleNames((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KDirSortFilterProxyModel_OnRoleNames((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KDirSortFilterProxyModel_MoveRows((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirsortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KDirSortFilterProxyModel_QBaseMoveRows((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_dirsortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirSortFilterProxyModel_OnMoveRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KDirSortFilterProxyModel_MoveColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_dirsortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KDirSortFilterProxyModel_QBaseMoveColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_dirsortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirSortFilterProxyModel_OnMoveColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KDirSortFilterProxyModel_MultiData((KDirSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_dirsortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KDirSortFilterProxyModel_QBaseMultiData((KDirSortFilterProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_dirsortfilterproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KDirSortFilterProxyModel_OnMultiData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_reset_internal_data(void* self) {
    KDirSortFilterProxyModel_ResetInternalData((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_reset_internal_data(void* self) {
    KDirSortFilterProxyModel_QBaseResetInternalData((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnResetInternalData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_event(void* self, void* event) {
    return KDirSortFilterProxyModel_Event((KDirSortFilterProxyModel*)self, (QEvent*)event);
}

bool k_dirsortfilterproxymodel_qbase_event(void* self, void* event) {
    return KDirSortFilterProxyModel_QBaseEvent((KDirSortFilterProxyModel*)self, (QEvent*)event);
}

void k_dirsortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnEvent((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_event_filter(void* self, void* watched, void* event) {
    return KDirSortFilterProxyModel_EventFilter((KDirSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_dirsortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KDirSortFilterProxyModel_QBaseEventFilter((KDirSortFilterProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_dirsortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDirSortFilterProxyModel_OnEventFilter((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_timer_event(void* self, void* event) {
    KDirSortFilterProxyModel_TimerEvent((KDirSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void k_dirsortfilterproxymodel_qbase_timer_event(void* self, void* event) {
    KDirSortFilterProxyModel_QBaseTimerEvent((KDirSortFilterProxyModel*)self, (QTimerEvent*)event);
}

void k_dirsortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnTimerEvent((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_child_event(void* self, void* event) {
    KDirSortFilterProxyModel_ChildEvent((KDirSortFilterProxyModel*)self, (QChildEvent*)event);
}

void k_dirsortfilterproxymodel_qbase_child_event(void* self, void* event) {
    KDirSortFilterProxyModel_QBaseChildEvent((KDirSortFilterProxyModel*)self, (QChildEvent*)event);
}

void k_dirsortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnChildEvent((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_custom_event(void* self, void* event) {
    KDirSortFilterProxyModel_CustomEvent((KDirSortFilterProxyModel*)self, (QEvent*)event);
}

void k_dirsortfilterproxymodel_qbase_custom_event(void* self, void* event) {
    KDirSortFilterProxyModel_QBaseCustomEvent((KDirSortFilterProxyModel*)self, (QEvent*)event);
}

void k_dirsortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnCustomEvent((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_connect_notify(void* self, void* signal) {
    KDirSortFilterProxyModel_ConnectNotify((KDirSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_dirsortfilterproxymodel_qbase_connect_notify(void* self, void* signal) {
    KDirSortFilterProxyModel_QBaseConnectNotify((KDirSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_dirsortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnConnectNotify((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_disconnect_notify(void* self, void* signal) {
    KDirSortFilterProxyModel_DisconnectNotify((KDirSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_dirsortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    KDirSortFilterProxyModel_QBaseDisconnectNotify((KDirSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_dirsortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnDisconnectNotify((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_invalidate_filter(void* self) {
    KDirSortFilterProxyModel_InvalidateFilter((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_invalidate_filter(void* self) {
    KDirSortFilterProxyModel_QBaseInvalidateFilter((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_invalidate_filter(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnInvalidateFilter((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_invalidate_rows_filter(void* self) {
    KDirSortFilterProxyModel_InvalidateRowsFilter((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_invalidate_rows_filter(void* self) {
    KDirSortFilterProxyModel_QBaseInvalidateRowsFilter((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnInvalidateRowsFilter((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_invalidate_columns_filter(void* self) {
    KDirSortFilterProxyModel_InvalidateColumnsFilter((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_invalidate_columns_filter(void* self) {
    KDirSortFilterProxyModel_QBaseInvalidateColumnsFilter((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnInvalidateColumnsFilter((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KDirSortFilterProxyModel_CreateSourceIndex((KDirSortFilterProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return KDirSortFilterProxyModel_QBaseCreateSourceIndex((KDirSortFilterProxyModel*)self, row, col, internalPtr);
}

void k_dirsortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KDirSortFilterProxyModel_OnCreateSourceIndex((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_dirsortfilterproxymodel_create_index(void* self, int row, int column) {
    return KDirSortFilterProxyModel_CreateIndex((KDirSortFilterProxyModel*)self, row, column);
}

QModelIndex* k_dirsortfilterproxymodel_qbase_create_index(void* self, int row, int column) {
    return KDirSortFilterProxyModel_QBaseCreateIndex((KDirSortFilterProxyModel*)self, row, column);
}

void k_dirsortfilterproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KDirSortFilterProxyModel_OnCreateIndex((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KDirSortFilterProxyModel_EncodeData((KDirSortFilterProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_dirsortfilterproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KDirSortFilterProxyModel_QBaseEncodeData((KDirSortFilterProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_dirsortfilterproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KDirSortFilterProxyModel_OnEncodeData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KDirSortFilterProxyModel_DecodeData((KDirSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_dirsortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KDirSortFilterProxyModel_QBaseDecodeData((KDirSortFilterProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_dirsortfilterproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KDirSortFilterProxyModel_OnDecodeData((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_BeginInsertRows((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_QBaseBeginInsertRows((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KDirSortFilterProxyModel_OnBeginInsertRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_end_insert_rows(void* self) {
    KDirSortFilterProxyModel_EndInsertRows((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_end_insert_rows(void* self) {
    KDirSortFilterProxyModel_QBaseEndInsertRows((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnEndInsertRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_BeginRemoveRows((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_QBaseBeginRemoveRows((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KDirSortFilterProxyModel_OnBeginRemoveRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_end_remove_rows(void* self) {
    KDirSortFilterProxyModel_EndRemoveRows((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_end_remove_rows(void* self) {
    KDirSortFilterProxyModel_QBaseEndRemoveRows((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnEndRemoveRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KDirSortFilterProxyModel_BeginMoveRows((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_dirsortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KDirSortFilterProxyModel_QBaseBeginMoveRows((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_dirsortfilterproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirSortFilterProxyModel_OnBeginMoveRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_end_move_rows(void* self) {
    KDirSortFilterProxyModel_EndMoveRows((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_end_move_rows(void* self) {
    KDirSortFilterProxyModel_QBaseEndMoveRows((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnEndMoveRows((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_BeginInsertColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_QBaseBeginInsertColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KDirSortFilterProxyModel_OnBeginInsertColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_end_insert_columns(void* self) {
    KDirSortFilterProxyModel_EndInsertColumns((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_end_insert_columns(void* self) {
    KDirSortFilterProxyModel_QBaseEndInsertColumns((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnEndInsertColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_BeginRemoveColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KDirSortFilterProxyModel_QBaseBeginRemoveColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_dirsortfilterproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KDirSortFilterProxyModel_OnBeginRemoveColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_end_remove_columns(void* self) {
    KDirSortFilterProxyModel_EndRemoveColumns((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_end_remove_columns(void* self) {
    KDirSortFilterProxyModel_QBaseEndRemoveColumns((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnEndRemoveColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KDirSortFilterProxyModel_BeginMoveColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_dirsortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KDirSortFilterProxyModel_QBaseBeginMoveColumns((KDirSortFilterProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_dirsortfilterproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KDirSortFilterProxyModel_OnBeginMoveColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_end_move_columns(void* self) {
    KDirSortFilterProxyModel_EndMoveColumns((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_end_move_columns(void* self) {
    KDirSortFilterProxyModel_QBaseEndMoveColumns((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnEndMoveColumns((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_begin_reset_model(void* self) {
    KDirSortFilterProxyModel_BeginResetModel((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_begin_reset_model(void* self) {
    KDirSortFilterProxyModel_QBaseBeginResetModel((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnBeginResetModel((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_end_reset_model(void* self) {
    KDirSortFilterProxyModel_EndResetModel((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_qbase_end_reset_model(void* self) {
    KDirSortFilterProxyModel_QBaseEndResetModel((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    KDirSortFilterProxyModel_OnEndResetModel((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_change_persistent_index(void* self, void* from, void* to) {
    KDirSortFilterProxyModel_ChangePersistentIndex((KDirSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_dirsortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KDirSortFilterProxyModel_QBaseChangePersistentIndex((KDirSortFilterProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_dirsortfilterproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KDirSortFilterProxyModel_OnChangePersistentIndex((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KDirSortFilterProxyModel_ChangePersistentIndexList((KDirSortFilterProxyModel*)self, from, to);
}

void k_dirsortfilterproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KDirSortFilterProxyModel_QBaseChangePersistentIndexList((KDirSortFilterProxyModel*)self, from, to);
}

void k_dirsortfilterproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KDirSortFilterProxyModel_OnChangePersistentIndexList((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_dirsortfilterproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = KDirSortFilterProxyModel_PersistentIndexList((KDirSortFilterProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_dirsortfilterproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KDirSortFilterProxyModel_QBasePersistentIndexList((KDirSortFilterProxyModel*)self);
    return _arr;
}

void k_dirsortfilterproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KDirSortFilterProxyModel_OnPersistentIndexList((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

QObject* k_dirsortfilterproxymodel_sender(void* self) {
    return KDirSortFilterProxyModel_Sender((KDirSortFilterProxyModel*)self);
}

QObject* k_dirsortfilterproxymodel_qbase_sender(void* self) {
    return KDirSortFilterProxyModel_QBaseSender((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_sender(void* self, QObject* (*callback)()) {
    KDirSortFilterProxyModel_OnSender((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_sender_signal_index(void* self) {
    return KDirSortFilterProxyModel_SenderSignalIndex((KDirSortFilterProxyModel*)self);
}

int32_t k_dirsortfilterproxymodel_qbase_sender_signal_index(void* self) {
    return KDirSortFilterProxyModel_QBaseSenderSignalIndex((KDirSortFilterProxyModel*)self);
}

void k_dirsortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDirSortFilterProxyModel_OnSenderSignalIndex((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

int32_t k_dirsortfilterproxymodel_receivers(void* self, const char* signal) {
    return KDirSortFilterProxyModel_Receivers((KDirSortFilterProxyModel*)self, signal);
}

int32_t k_dirsortfilterproxymodel_qbase_receivers(void* self, const char* signal) {
    return KDirSortFilterProxyModel_QBaseReceivers((KDirSortFilterProxyModel*)self, signal);
}

void k_dirsortfilterproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDirSortFilterProxyModel_OnReceivers((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

bool k_dirsortfilterproxymodel_is_signal_connected(void* self, void* signal) {
    return KDirSortFilterProxyModel_IsSignalConnected((KDirSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

bool k_dirsortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return KDirSortFilterProxyModel_QBaseIsSignalConnected((KDirSortFilterProxyModel*)self, (QMetaMethod*)signal);
}

void k_dirsortfilterproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDirSortFilterProxyModel_OnIsSignalConnected((KDirSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_dirsortfilterproxymodel_delete(void* self) {
    KDirSortFilterProxyModel_Delete((KDirSortFilterProxyModel*)(self));
}
