#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSQT6C_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_H
#define SRC_EXTRAS_KITEMVIEWSQT6C_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html

/// k_categorizedsortfilterproxymodel_new constructs a new KCategorizedSortFilterProxyModel object.
///
KCategorizedSortFilterProxyModel* k_categorizedsortfilterproxymodel_new();

/// k_categorizedsortfilterproxymodel_new2 constructs a new KCategorizedSortFilterProxyModel object.
///
/// @param parent QObject*
KCategorizedSortFilterProxyModel* k_categorizedsortfilterproxymodel_new2(void* parent);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KCategorizedSortFilterProxyModel*
const QMetaObject* k_categorizedsortfilterproxymodel_meta_object(void* self);

/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 const char*
void* k_categorizedsortfilterproxymodel_metacast(void* self, const char* param1);

/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_categorizedsortfilterproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t fn(KCategorizedSortFilterProxyModel*, enum QMetaObject__Call, int, void*)
void k_categorizedsortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_categorizedsortfilterproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_categorizedsortfilterproxymodel_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void k_categorizedsortfilterproxymodel_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, int, enum Qt__SortOrder)
void k_categorizedsortfilterproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void k_categorizedsortfilterproxymodel_qbase_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#isCategorizedModel)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_is_categorized_model(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#setCategorizedModel)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param categorizedModel bool
void k_categorizedsortfilterproxymodel_set_categorized_model(void* self, bool categorizedModel);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#sortColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
int32_t k_categorizedsortfilterproxymodel_sort_column(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#sortOrder)
///
/// @param self KCategorizedSortFilterProxyModel*
///
/// @return enum Qt__SortOrder
int32_t k_categorizedsortfilterproxymodel_sort_order(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#setSortCategoriesByNaturalComparison)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortCategoriesByNaturalComparison bool
void k_categorizedsortfilterproxymodel_set_sort_categories_by_natural_comparison(void* self, bool sortCategoriesByNaturalComparison);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#sortCategoriesByNaturalComparison)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_sort_categories_by_natural_comparison(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
bool k_categorizedsortfilterproxymodel_less_than(void* self, void* left, void* right);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_less_than(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_less_than(void* self, void* left, void* right);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
bool k_categorizedsortfilterproxymodel_sub_sort_less_than(void* self, void* left, void* right);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_sub_sort_less_than(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
///
/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_sub_sort_less_than(void* self, void* left, void* right);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
int32_t k_categorizedsortfilterproxymodel_compare_categories(void* self, void* left, void* right);

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_compare_categories(void* self, int32_t (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
int32_t k_categorizedsortfilterproxymodel_qbase_compare_categories(void* self, void* left, void* right);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_categorizedsortfilterproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_categorizedsortfilterproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
///
/// @param self KCategorizedSortFilterProxyModel*
QRegularExpression* k_categorizedsortfilterproxymodel_filter_regular_expression(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
int32_t k_categorizedsortfilterproxymodel_filter_key_column(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
void k_categorizedsortfilterproxymodel_set_filter_key_column(void* self, int column);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
///
/// @param self KCategorizedSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
int32_t k_categorizedsortfilterproxymodel_filter_case_sensitivity(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
void k_categorizedsortfilterproxymodel_set_filter_case_sensitivity(void* self, int32_t cs);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
///
/// @param self KCategorizedSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
int32_t k_categorizedsortfilterproxymodel_sort_case_sensitivity(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
void k_categorizedsortfilterproxymodel_set_sort_case_sensitivity(void* self, int32_t cs);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_is_sort_locale_aware(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param on bool
void k_categorizedsortfilterproxymodel_set_sort_locale_aware(void* self, bool on);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_dynamic_sort_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param enable bool
void k_categorizedsortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
///
/// @param self KCategorizedSortFilterProxyModel*
int32_t k_categorizedsortfilterproxymodel_sort_role(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param role int
void k_categorizedsortfilterproxymodel_set_sort_role(void* self, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
///
/// @param self KCategorizedSortFilterProxyModel*
int32_t k_categorizedsortfilterproxymodel_filter_role(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param role int
void k_categorizedsortfilterproxymodel_set_filter_role(void* self, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_is_recursive_filtering_enabled(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param recursive bool
void k_categorizedsortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_auto_accept_child_rows(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param accept bool
void k_categorizedsortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param pattern const char*
void k_categorizedsortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param regularExpression QRegularExpression*
void k_categorizedsortfilterproxymodel_set_filter_regular_expression2(void* self, void* regularExpression);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param pattern const char*
void k_categorizedsortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param pattern const char*
void k_categorizedsortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_invalidate(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param dynamicSortFilter bool
void k_categorizedsortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, bool)
void k_categorizedsortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param filterCaseSensitivity enum Qt__CaseSensitivity
void k_categorizedsortfilterproxymodel_filter_case_sensitivity_changed(void* self, int32_t filterCaseSensitivity);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, enum Qt__CaseSensitivity)
void k_categorizedsortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortCaseSensitivity enum Qt__CaseSensitivity
void k_categorizedsortfilterproxymodel_sort_case_sensitivity_changed(void* self, int32_t sortCaseSensitivity);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, enum Qt__CaseSensitivity)
void k_categorizedsortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortLocaleAware bool
void k_categorizedsortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, bool)
void k_categorizedsortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortRole int
void k_categorizedsortfilterproxymodel_sort_role_changed(void* self, int sortRole);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, int)
void k_categorizedsortfilterproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param filterRole int
void k_categorizedsortfilterproxymodel_filter_role_changed(void* self, int filterRole);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, int)
void k_categorizedsortfilterproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param recursiveFilteringEnabled bool
void k_categorizedsortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, bool)
void k_categorizedsortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param autoAcceptChildRows bool
void k_categorizedsortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, bool)
void k_categorizedsortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self KCategorizedSortFilterProxyModel*
QAbstractItemModel* k_categorizedsortfilterproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
bool k_categorizedsortfilterproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
bool k_categorizedsortfilterproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
bool k_categorizedsortfilterproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
bool k_categorizedsortfilterproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
bool k_categorizedsortfilterproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_categorizedsortfilterproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_categorizedsortfilterproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
bool k_categorizedsortfilterproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void k_categorizedsortfilterproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, enum Qt__Orientation, int, int)
void k_categorizedsortfilterproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*)
void k_categorizedsortfilterproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*)
void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool k_categorizedsortfilterproxymodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void k_categorizedsortfilterproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*, int*)
void k_categorizedsortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void k_categorizedsortfilterproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */)
void k_categorizedsortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void k_categorizedsortfilterproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void k_categorizedsortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void k_categorizedsortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */)
void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void k_categorizedsortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCategorizedSortFilterProxyModel*
const char* k_categorizedsortfilterproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param name char*
void k_categorizedsortfilterproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param b bool
bool k_categorizedsortfilterproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCategorizedSortFilterProxyModel*
QThread* k_categorizedsortfilterproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param thread QThread*
bool k_categorizedsortfilterproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param interval int
int32_t k_categorizedsortfilterproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param id int
void k_categorizedsortfilterproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param id enum Qt__TimerId
void k_categorizedsortfilterproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCategorizedSortFilterProxyModel*
libqt_list /* of QObject* */ k_categorizedsortfilterproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QObject*
void k_categorizedsortfilterproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param filterObj QObject*
void k_categorizedsortfilterproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param obj QObject*
void k_categorizedsortfilterproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_categorizedsortfilterproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_categorizedsortfilterproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param name const char*
/// @param value QVariant*
bool k_categorizedsortfilterproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param name const char*
QVariant* k_categorizedsortfilterproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCategorizedSortFilterProxyModel*
const char** k_categorizedsortfilterproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategorizedSortFilterProxyModel*
QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategorizedSortFilterProxyModel*
const QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*)
void k_categorizedsortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param classname const char*
bool k_categorizedsortfilterproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_categorizedsortfilterproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_categorizedsortfilterproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 QObject*
void k_categorizedsortfilterproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QObject*)
void k_categorizedsortfilterproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
void k_categorizedsortfilterproxymodel_set_source_model(void* self, void* sourceModel);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
void k_categorizedsortfilterproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QAbstractItemModel*)
void k_categorizedsortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_map_to_source(void* self, void* proxyIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_map_from_source(void* self, void* sourceIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param proxySelection QItemSelection*
QItemSelection* k_categorizedsortfilterproxymodel_map_selection_to_source(void* self, void* proxySelection);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param proxySelection QItemSelection*
QItemSelection* k_categorizedsortfilterproxymodel_qbase_map_selection_to_source(void* self, void* proxySelection);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QItemSelection* fn(KCategorizedSortFilterProxyModel*, QItemSelection*)
void k_categorizedsortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
QItemSelection* k_categorizedsortfilterproxymodel_map_selection_from_source(void* self, void* sourceSelection);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
QItemSelection* k_categorizedsortfilterproxymodel_qbase_map_selection_from_source(void* self, void* sourceSelection);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QItemSelection* fn(KCategorizedSortFilterProxyModel*, QItemSelection*)
void k_categorizedsortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
bool k_categorizedsortfilterproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_filter_accepts_row(void* self, int source_row, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(void*, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
bool k_categorizedsortfilterproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_filter_accepts_column(void* self, int source_column, void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(void*, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_index(void* self, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param child QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_parent(void* self, void* child);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param child QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_qbase_parent(void* self, void* child);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t k_categorizedsortfilterproxymodel_row_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t k_categorizedsortfilterproxymodel_qbase_row_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t k_categorizedsortfilterproxymodel_column_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
int32_t k_categorizedsortfilterproxymodel_qbase_column_count(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_has_children(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_has_children(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
QVariant* k_categorizedsortfilterproxymodel_data(void* self, void* index, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
QVariant* k_categorizedsortfilterproxymodel_qbase_data(void* self, void* index, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QVariant* fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool k_categorizedsortfilterproxymodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool k_categorizedsortfilterproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QVariant*, int)
void k_categorizedsortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* k_categorizedsortfilterproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* k_categorizedsortfilterproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QVariant* fn(KCategorizedSortFilterProxyModel*, int, enum Qt__Orientation, int)
void k_categorizedsortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool k_categorizedsortfilterproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool k_categorizedsortfilterproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, enum Qt__Orientation, QVariant*, int)
void k_categorizedsortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* k_categorizedsortfilterproxymodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* k_categorizedsortfilterproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QMimeData* fn(KCategorizedSortFilterProxyModel*, libqt_list /* of QModelIndex* */)
void k_categorizedsortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
void k_categorizedsortfilterproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
void k_categorizedsortfilterproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t k_categorizedsortfilterproxymodel_flags(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t k_categorizedsortfilterproxymodel_qbase_flags(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int64_t fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_flags(void* self, int64_t (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_buddy(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
QModelIndex* k_categorizedsortfilterproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_list /* of QModelIndex* */ fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, QVariant*, int, flag of enum Qt__MatchFlag)
void k_categorizedsortfilterproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
QSize* k_categorizedsortfilterproxymodel_span(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
QSize* k_categorizedsortfilterproxymodel_qbase_span(void* self, void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QSize* fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
const char** k_categorizedsortfilterproxymodel_mime_types(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
const char** k_categorizedsortfilterproxymodel_qbase_mime_types(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback const char** fn()
void k_categorizedsortfilterproxymodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t k_categorizedsortfilterproxymodel_supported_drop_actions(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t k_categorizedsortfilterproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int64_t fn()
void k_categorizedsortfilterproxymodel_on_supported_drop_actions(void* self, int64_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
bool k_categorizedsortfilterproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn()
void k_categorizedsortfilterproxymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ k_categorizedsortfilterproxymodel_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ k_categorizedsortfilterproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_map /* of int to QVariant* */ fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool k_categorizedsortfilterproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool k_categorizedsortfilterproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */)
void k_categorizedsortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
bool k_categorizedsortfilterproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_categorizedsortfilterproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t k_categorizedsortfilterproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
int64_t k_categorizedsortfilterproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int64_t fn()
void k_categorizedsortfilterproxymodel_on_supported_drag_actions(void* self, int64_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
libqt_map /* of int to char* */ k_categorizedsortfilterproxymodel_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
libqt_map /* of int to char* */ k_categorizedsortfilterproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_map /* of int to char* */ fn()
void k_categorizedsortfilterproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_categorizedsortfilterproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_categorizedsortfilterproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_categorizedsortfilterproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_categorizedsortfilterproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void k_categorizedsortfilterproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void k_categorizedsortfilterproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelRoleDataSpan*)
void k_categorizedsortfilterproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
bool k_categorizedsortfilterproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
bool k_categorizedsortfilterproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QEvent*)
void k_categorizedsortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool k_categorizedsortfilterproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool k_categorizedsortfilterproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QObject*, QEvent*)
void k_categorizedsortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QTimerEvent*
void k_categorizedsortfilterproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QTimerEvent*
void k_categorizedsortfilterproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QTimerEvent*)
void k_categorizedsortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QChildEvent*
void k_categorizedsortfilterproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QChildEvent*
void k_categorizedsortfilterproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QChildEvent*)
void k_categorizedsortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
void k_categorizedsortfilterproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
void k_categorizedsortfilterproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QEvent*)
void k_categorizedsortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
void k_categorizedsortfilterproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
void k_categorizedsortfilterproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QMetaMethod*)
void k_categorizedsortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
void k_categorizedsortfilterproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
void k_categorizedsortfilterproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QMetaMethod*)
void k_categorizedsortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_invalidate_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_invalidate_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_invalidate_filter(void* self, void (*callback)());

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_invalidate_rows_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_invalidate_rows_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*callback)());

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_invalidate_columns_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_invalidate_columns_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
QModelIndex* k_categorizedsortfilterproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
QModelIndex* k_categorizedsortfilterproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, int, int, void*)
void k_categorizedsortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
QModelIndex* k_categorizedsortfilterproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
QModelIndex* k_categorizedsortfilterproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* fn(KCategorizedSortFilterProxyModel*, int, int)
void k_categorizedsortfilterproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void k_categorizedsortfilterproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void k_categorizedsortfilterproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, libqt_list /* of QModelIndex* */, QDataStream*)
void k_categorizedsortfilterproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool k_categorizedsortfilterproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool k_categorizedsortfilterproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, int, int, QModelIndex*, QDataStream*)
void k_categorizedsortfilterproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool k_categorizedsortfilterproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool k_categorizedsortfilterproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_categorizedsortfilterproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool k_categorizedsortfilterproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool k_categorizedsortfilterproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn()
void k_categorizedsortfilterproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void k_categorizedsortfilterproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void k_categorizedsortfilterproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, QModelIndex*)
void k_categorizedsortfilterproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void k_categorizedsortfilterproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void k_categorizedsortfilterproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)
void k_categorizedsortfilterproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
libqt_list /* of QModelIndex* */ k_categorizedsortfilterproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_list /* of QModelIndex* */ fn()
void k_categorizedsortfilterproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
QObject* k_categorizedsortfilterproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
QObject* k_categorizedsortfilterproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QObject* fn()
void k_categorizedsortfilterproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
int32_t k_categorizedsortfilterproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
int32_t k_categorizedsortfilterproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t fn()
void k_categorizedsortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal const char*
int32_t k_categorizedsortfilterproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal const char*
int32_t k_categorizedsortfilterproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t fn(KCategorizedSortFilterProxyModel*, const char*)
void k_categorizedsortfilterproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
bool k_categorizedsortfilterproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
bool k_categorizedsortfilterproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool fn(KCategorizedSortFilterProxyModel*, QMetaMethod*)
void k_categorizedsortfilterproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*)
void k_categorizedsortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int)
void k_categorizedsortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*)
void k_categorizedsortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*)
void k_categorizedsortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, QModelIndex*, int, int, QModelIndex*, int)
void k_categorizedsortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void fn(KCategorizedSortFilterProxyModel*, const char*)
void k_categorizedsortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#dtor.KCategorizedSortFilterProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KCategorizedSortFilterProxyModel*
void k_categorizedsortfilterproxymodel_delete(void* self);

/// https://api-staging.kde.org/kcategorizedsortfilterproxymodel.html#types

typedef enum {
    KCATEGORIZEDSORTFILTERPROXYMODEL_ADDITIONALROLES_CATEGORYDISPLAYROLE = 399415562,
    KCATEGORIZEDSORTFILTERPROXYMODEL_ADDITIONALROLES_CATEGORYSORTROLE = 663060064
} KCategorizedSortFilterProxyModel__AdditionalRoles;

#endif
