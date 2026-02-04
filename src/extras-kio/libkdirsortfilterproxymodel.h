#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKDIRSORTFILTERPROXYMODEL_H
#define SRC_EXTRAS_KIO_QT6C_LIBKDIRSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html)

/// k_dirsortfilterproxymodel_new constructs a new KDirSortFilterProxyModel object.
///
KDirSortFilterProxyModel* k_dirsortfilterproxymodel_new();

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html)

/// k_dirsortfilterproxymodel_new2 constructs a new KDirSortFilterProxyModel object.
///
/// @param parent QObject*
///
KDirSortFilterProxyModel* k_dirsortfilterproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDirSortFilterProxyModel*
///
const QMetaObject* k_dirsortfilterproxymodel_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback const QMetaObject* func()
///
void k_dirsortfilterproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KDirSortFilterProxyModel*
///
const QMetaObject* k_dirsortfilterproxymodel_qbase_meta_object(void* self);

/// @param self KDirSortFilterProxyModel*
/// @param param1 const char*
///
void* k_dirsortfilterproxymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void* func(KDirSortFilterProxyModel* self, const char* param1)
///
void k_dirsortfilterproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KDirSortFilterProxyModel*
/// @param param1 const char*
///
void* k_dirsortfilterproxymodel_qbase_metacast(void* self, const char* param1);

/// @param self KDirSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dirsortfilterproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func(KDirSortFilterProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_dirsortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDirSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dirsortfilterproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_dirsortfilterproxymodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#pointsForPermissions)
///
/// @param info QFileInfo*
///
int32_t k_dirsortfilterproxymodel_points_for_permissions(void* info);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#setSortFoldersFirst)
///
/// @param self KDirSortFilterProxyModel*
/// @param foldersFirst bool
///
void k_dirsortfilterproxymodel_set_sort_folders_first(void* self, bool foldersFirst);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#sortFoldersFirst)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_sort_folders_first(void* self);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#setSortHiddenFilesLast)
///
/// @param self KDirSortFilterProxyModel*
/// @param hiddenFilesLast bool
///
void k_dirsortfilterproxymodel_set_sort_hidden_files_last(void* self, bool hiddenFilesLast);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#sortHiddenFilesLast)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_sort_hidden_files_last(void* self);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#supportedDragOptions)
///
/// @param self KDirSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_dirsortfilterproxymodel_supported_drag_options(void* self);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
///
/// @param self KDirSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_dirsortfilterproxymodel_sub_sort_less_than(void* self, void* left, void* right);

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
///
/// Allows for overriding the related default method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* left, QModelIndex* right)
///
void k_dirsortfilterproxymodel_on_sub_sort_less_than(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
///
/// Base class method implementation
///
/// @param self KDirSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_sub_sort_less_than(void* self, void* left, void* right);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_dirsortfilterproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_dirsortfilterproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#isCategorizedModel)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_is_categorized_model(void* self);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setCategorizedModel)
///
/// @param self KDirSortFilterProxyModel*
/// @param categorizedModel bool
///
void k_dirsortfilterproxymodel_set_categorized_model(void* self, bool categorizedModel);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortColumn)
///
/// @param self KDirSortFilterProxyModel*
///
int32_t k_dirsortfilterproxymodel_sort_column(void* self);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortOrder)
///
/// @param self KDirSortFilterProxyModel*
///
/// @return enum Qt__SortOrder
///
int32_t k_dirsortfilterproxymodel_sort_order(void* self);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setSortCategoriesByNaturalComparison)
///
/// @param self KDirSortFilterProxyModel*
/// @param sortCategoriesByNaturalComparison bool
///
void k_dirsortfilterproxymodel_set_sort_categories_by_natural_comparison(void* self, bool sortCategoriesByNaturalComparison);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortCategoriesByNaturalComparison)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_sort_categories_by_natural_comparison(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
///
/// @param self KDirSortFilterProxyModel*
///
QRegularExpression* k_dirsortfilterproxymodel_filter_regular_expression(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
///
/// @param self KDirSortFilterProxyModel*
///
int32_t k_dirsortfilterproxymodel_filter_key_column(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
///
void k_dirsortfilterproxymodel_set_filter_key_column(void* self, int column);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
///
/// @param self KDirSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
///
int32_t k_dirsortfilterproxymodel_filter_case_sensitivity(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
///
/// @param self KDirSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
///
void k_dirsortfilterproxymodel_set_filter_case_sensitivity(void* self, int32_t cs);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
///
/// @param self KDirSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
///
int32_t k_dirsortfilterproxymodel_sort_case_sensitivity(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
///
/// @param self KDirSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
///
void k_dirsortfilterproxymodel_set_sort_case_sensitivity(void* self, int32_t cs);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_is_sort_locale_aware(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
///
/// @param self KDirSortFilterProxyModel*
/// @param on bool
///
void k_dirsortfilterproxymodel_set_sort_locale_aware(void* self, bool on);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_dynamic_sort_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
///
/// @param self KDirSortFilterProxyModel*
/// @param enable bool
///
void k_dirsortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
///
/// @param self KDirSortFilterProxyModel*
///
int32_t k_dirsortfilterproxymodel_sort_role(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
///
/// @param self KDirSortFilterProxyModel*
/// @param role int
///
void k_dirsortfilterproxymodel_set_sort_role(void* self, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
///
/// @param self KDirSortFilterProxyModel*
///
int32_t k_dirsortfilterproxymodel_filter_role(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
///
/// @param self KDirSortFilterProxyModel*
/// @param role int
///
void k_dirsortfilterproxymodel_set_filter_role(void* self, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_is_recursive_filtering_enabled(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
///
/// @param self KDirSortFilterProxyModel*
/// @param recursive bool
///
void k_dirsortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_auto_accept_child_rows(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
///
/// @param self KDirSortFilterProxyModel*
/// @param accept bool
///
void k_dirsortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self KDirSortFilterProxyModel*
/// @param pattern const char*
///
void k_dirsortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self KDirSortFilterProxyModel*
/// @param regularExpression QRegularExpression*
///
void k_dirsortfilterproxymodel_set_filter_regular_expression2(void* self, void* regularExpression);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
///
/// @param self KDirSortFilterProxyModel*
/// @param pattern const char*
///
void k_dirsortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
///
/// @param self KDirSortFilterProxyModel*
/// @param pattern const char*
///
void k_dirsortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_invalidate(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param dynamicSortFilter bool
///
void k_dirsortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, bool dynamicSortFilter)
///
void k_dirsortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param filterCaseSensitivity enum Qt__CaseSensitivity
///
void k_dirsortfilterproxymodel_filter_case_sensitivity_changed(void* self, int32_t filterCaseSensitivity);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, enum Qt__CaseSensitivity filterCaseSensitivity)
///
void k_dirsortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param sortCaseSensitivity enum Qt__CaseSensitivity
///
void k_dirsortfilterproxymodel_sort_case_sensitivity_changed(void* self, int32_t sortCaseSensitivity);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, enum Qt__CaseSensitivity sortCaseSensitivity)
///
void k_dirsortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param sortLocaleAware bool
///
void k_dirsortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, bool sortLocaleAware)
///
void k_dirsortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param sortRole int
///
void k_dirsortfilterproxymodel_sort_role_changed(void* self, int sortRole);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, int sortRole)
///
void k_dirsortfilterproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param filterRole int
///
void k_dirsortfilterproxymodel_filter_role_changed(void* self, int filterRole);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, int filterRole)
///
void k_dirsortfilterproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param recursiveFilteringEnabled bool
///
void k_dirsortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, bool recursiveFilteringEnabled)
///
void k_dirsortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param autoAcceptChildRows bool
///
void k_dirsortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, bool autoAcceptChildRows)
///
void k_dirsortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self KDirSortFilterProxyModel*
///
QAbstractItemModel* k_dirsortfilterproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
///
bool k_dirsortfilterproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
///
bool k_dirsortfilterproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
///
bool k_dirsortfilterproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
///
bool k_dirsortfilterproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
///
bool k_dirsortfilterproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_dirsortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_dirsortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
bool k_dirsortfilterproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_dirsortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_dirsortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_dirsortfilterproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self)
///
void k_dirsortfilterproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self)
///
void k_dirsortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_dirsortfilterproxymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_dirsortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_dirsortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_dirsortfilterproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_dirsortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_dirsortfilterproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_dirsortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_dirsortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_dirsortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_dirsortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_dirsortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDirSortFilterProxyModel*
///
const char* k_dirsortfilterproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDirSortFilterProxyModel*
/// @param name char*
///
void k_dirsortfilterproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDirSortFilterProxyModel*
/// @param b bool
///
bool k_dirsortfilterproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDirSortFilterProxyModel*
///
QThread* k_dirsortfilterproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirSortFilterProxyModel*
/// @param thread QThread*
///
bool k_dirsortfilterproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirSortFilterProxyModel*
/// @param interval int
///
int32_t k_dirsortfilterproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirSortFilterProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t k_dirsortfilterproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirSortFilterProxyModel*
/// @param id int
///
void k_dirsortfilterproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirSortFilterProxyModel*
/// @param id enum Qt__TimerId
///
void k_dirsortfilterproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDirSortFilterProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_dirsortfilterproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QObject*
///
void k_dirsortfilterproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDirSortFilterProxyModel*
/// @param filterObj QObject*
///
void k_dirsortfilterproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDirSortFilterProxyModel*
/// @param obj QObject*
///
void k_dirsortfilterproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_dirsortfilterproxymodel_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_dirsortfilterproxymodel_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_dirsortfilterproxymodel_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dirsortfilterproxymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_dirsortfilterproxymodel_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirSortFilterProxyModel*
/// @param receiver QObject*
///
bool k_dirsortfilterproxymodel_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_dirsortfilterproxymodel_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDirSortFilterProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_dirsortfilterproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDirSortFilterProxyModel*
/// @param name const char*
///
QVariant* k_dirsortfilterproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDirSortFilterProxyModel*
///
const char** k_dirsortfilterproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirSortFilterProxyModel*
///
QBindingStorage* k_dirsortfilterproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirSortFilterProxyModel*
///
const QBindingStorage* k_dirsortfilterproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self)
///
void k_dirsortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDirSortFilterProxyModel*
/// @param classname const char*
///
bool k_dirsortfilterproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirSortFilterProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_dirsortfilterproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirSortFilterProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_dirsortfilterproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_dirsortfilterproxymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_dirsortfilterproxymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_dirsortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirSortFilterProxyModel*
/// @param signal const char*
///
bool k_dirsortfilterproxymodel_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirSortFilterProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_dirsortfilterproxymodel_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirSortFilterProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dirsortfilterproxymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirSortFilterProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dirsortfilterproxymodel_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirSortFilterProxyModel*
/// @param param1 QObject*
///
void k_dirsortfilterproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QObject* param1)
///
void k_dirsortfilterproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_dirsortfilterproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_dirsortfilterproxymodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, int column, enum Qt__SortOrder order)
///
void k_dirsortfilterproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_dirsortfilterproxymodel_less_than(void* self, void* left, void* right);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_less_than(void* self, void* left, void* right);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* left, QModelIndex* right)
///
void k_dirsortfilterproxymodel_on_less_than(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
int32_t k_dirsortfilterproxymodel_compare_categories(void* self, void* left, void* right);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
int32_t k_dirsortfilterproxymodel_qbase_compare_categories(void* self, void* left, void* right);

/// Inherited from KCategorizedSortFilterProxyModel
///
/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func(KDirSortFilterProxyModel* self, QModelIndex* left, QModelIndex* right)
///
void k_dirsortfilterproxymodel_on_compare_categories(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_dirsortfilterproxymodel_set_source_model(void* self, void* sourceModel);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_dirsortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QAbstractItemModel* sourceModel)
///
void k_dirsortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_map_to_source(void* self, void* proxyIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, QModelIndex* proxyIndex)
///
void k_dirsortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_map_from_source(void* self, void* sourceIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, QModelIndex* sourceIndex)
///
void k_dirsortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param proxySelection QItemSelection*
///
QItemSelection* k_dirsortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param proxySelection QItemSelection*
///
QItemSelection* k_dirsortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QItemSelection* func(KDirSortFilterProxyModel* self, QItemSelection* proxySelection)
///
void k_dirsortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
///
QItemSelection* k_dirsortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
///
QItemSelection* k_dirsortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QItemSelection* func(KDirSortFilterProxyModel* self, QItemSelection* sourceSelection)
///
void k_dirsortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
///
bool k_dirsortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int source_row, QModelIndex* source_parent)
///
void k_dirsortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(void*, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
///
bool k_dirsortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int source_column, QModelIndex* source_parent)
///
void k_dirsortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(void*, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_index(void* self, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, int row, int column, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_parent(void* self, void* child);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_qbase_parent(void* self, void* child);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, QModelIndex* child)
///
void k_dirsortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, int row, int column, QModelIndex* idx)
///
void k_dirsortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_dirsortfilterproxymodel_row_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_dirsortfilterproxymodel_qbase_row_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func(KDirSortFilterProxyModel* self, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_dirsortfilterproxymodel_column_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_dirsortfilterproxymodel_qbase_column_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func(KDirSortFilterProxyModel* self, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_dirsortfilterproxymodel_data(void* self, void* index, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_dirsortfilterproxymodel_qbase_data(void* self, void* index, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QVariant* func(KDirSortFilterProxyModel* self, QModelIndex* index, int role)
///
void k_dirsortfilterproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_dirsortfilterproxymodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_dirsortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_dirsortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_dirsortfilterproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_dirsortfilterproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QVariant* func(KDirSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_dirsortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_dirsortfilterproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_dirsortfilterproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_dirsortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_dirsortfilterproxymodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_dirsortfilterproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QMimeData* func(KDirSortFilterProxyModel* self, libqt_list of QModelIndex* indexes)
///
void k_dirsortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
void k_dirsortfilterproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
///
void k_dirsortfilterproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_dirsortfilterproxymodel_flags(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_dirsortfilterproxymodel_qbase_flags(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func(KDirSortFilterProxyModel* self, QModelIndex* index)
///
void k_dirsortfilterproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_buddy(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_dirsortfilterproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, QModelIndex* index)
///
void k_dirsortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_dirsortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_dirsortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback libqt_list of QModelIndex* func(KDirSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_dirsortfilterproxymodel_on_match(void* self, libqt_list (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
QSize* k_dirsortfilterproxymodel_span(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
QSize* k_dirsortfilterproxymodel_qbase_span(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QSize* func(KDirSortFilterProxyModel* self, QModelIndex* index)
///
void k_dirsortfilterproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
const char** k_dirsortfilterproxymodel_mime_types(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
const char** k_dirsortfilterproxymodel_qbase_mime_types(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback const char** func()
///
void k_dirsortfilterproxymodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_dirsortfilterproxymodel_supported_drop_actions(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_dirsortfilterproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func()
///
void k_dirsortfilterproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
bool k_dirsortfilterproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func()
///
void k_dirsortfilterproxymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
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
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_dirsortfilterproxymodel_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
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
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_dirsortfilterproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback libqt_map of int to QVariant* func(KDirSortFilterProxyModel* self, QModelIndex* index)
///
void k_dirsortfilterproxymodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_dirsortfilterproxymodel_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_dirsortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_dirsortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
bool k_dirsortfilterproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* index)
///
void k_dirsortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_dirsortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_dirsortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_dirsortfilterproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_dirsortfilterproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func()
///
void k_dirsortfilterproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
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
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_dirsortfilterproxymodel_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
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
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_dirsortfilterproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback libqt_map of int to char* func()
///
void k_dirsortfilterproxymodel_on_role_names(void* self, libqt_map (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_dirsortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_dirsortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_dirsortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_dirsortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_dirsortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_dirsortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_dirsortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_dirsortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_dirsortfilterproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QEvent*
///
bool k_dirsortfilterproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QEvent*
///
bool k_dirsortfilterproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QEvent* event)
///
void k_dirsortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dirsortfilterproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dirsortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QObject* watched, QEvent* event)
///
void k_dirsortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QTimerEvent*
///
void k_dirsortfilterproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QTimerEvent*
///
void k_dirsortfilterproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QTimerEvent* event)
///
void k_dirsortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QChildEvent*
///
void k_dirsortfilterproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QChildEvent*
///
void k_dirsortfilterproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QChildEvent* event)
///
void k_dirsortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QEvent*
///
void k_dirsortfilterproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param event QEvent*
///
void k_dirsortfilterproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QEvent* event)
///
void k_dirsortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_dirsortfilterproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_dirsortfilterproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QMetaMethod* signal)
///
void k_dirsortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_dirsortfilterproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_dirsortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QMetaMethod* signal)
///
void k_dirsortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_invalidate_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_invalidate_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_invalidate_filter(void* self, void (*callback)());

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_invalidate_rows_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_invalidate_rows_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*callback)());

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_invalidate_columns_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_invalidate_columns_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_dirsortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_dirsortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, int row, int col, void* internalPtr)
///
void k_dirsortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_dirsortfilterproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_dirsortfilterproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QModelIndex* func(KDirSortFilterProxyModel* self, int row, int column)
///
void k_dirsortfilterproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_dirsortfilterproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_dirsortfilterproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_dirsortfilterproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_dirsortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_dirsortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_dirsortfilterproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_dirsortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_dirsortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_dirsortfilterproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_dirsortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_dirsortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_dirsortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_dirsortfilterproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func()
///
void k_dirsortfilterproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_dirsortfilterproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_dirsortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_dirsortfilterproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_dirsortfilterproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_dirsortfilterproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_dirsortfilterproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_dirsortfilterproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_dirsortfilterproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback libqt_list of QModelIndex* func()
///
void k_dirsortfilterproxymodel_on_persistent_index_list(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
QObject* k_dirsortfilterproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
QObject* k_dirsortfilterproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback QObject* func()
///
void k_dirsortfilterproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
int32_t k_dirsortfilterproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
///
int32_t k_dirsortfilterproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func()
///
void k_dirsortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal const char*
///
int32_t k_dirsortfilterproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal const char*
///
int32_t k_dirsortfilterproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback int32_t func(KDirSortFilterProxyModel* self, const char* signal)
///
void k_dirsortfilterproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal QMetaMethod*
///
bool k_dirsortfilterproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param signal QMetaMethod*
///
bool k_dirsortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirSortFilterProxyModel*
/// @param callback bool func(KDirSortFilterProxyModel* self, QMetaMethod* signal)
///
void k_dirsortfilterproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self)
///
void k_dirsortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_dirsortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self)
///
void k_dirsortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self)
///
void k_dirsortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_dirsortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_dirsortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_dirsortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_dirsortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirSortFilterProxyModel*
/// @param callback void func(KDirSortFilterProxyModel* self, const char* objectName)
///
void k_dirsortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#dtor.KDirSortFilterProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KDirSortFilterProxyModel*
///
void k_dirsortfilterproxymodel_delete(void* self);

#endif
