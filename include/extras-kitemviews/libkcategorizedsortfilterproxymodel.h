#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_H
#define EXTRAS_KITEMVIEWS_LIBKCATEGORIZEDSORTFILTERPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html)

/// k_categorizedsortfilterproxymodel_new constructs a new KCategorizedSortFilterProxyModel object.
///
KCategorizedSortFilterProxyModel* k_categorizedsortfilterproxymodel_new();

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html)

/// k_categorizedsortfilterproxymodel_new2 constructs a new KCategorizedSortFilterProxyModel object.
///
/// @param parent QObject*
///
KCategorizedSortFilterProxyModel* k_categorizedsortfilterproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
const QMetaObject* k_categorizedsortfilterproxymodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback const QMetaObject* func(const KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KCategorizedSortFilterProxyModel*
///
const QMetaObject* k_categorizedsortfilterproxymodel_super_meta_object(const void* self);

/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 const char*
///
void* k_categorizedsortfilterproxymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void* func(KCategorizedSortFilterProxyModel* self, const char* param1)
///
void k_categorizedsortfilterproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 const char*
///
void* k_categorizedsortfilterproxymodel_super_metacast(void* self, const char* param1);

/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_categorizedsortfilterproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_categorizedsortfilterproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_categorizedsortfilterproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_categorizedsortfilterproxymodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_categorizedsortfilterproxymodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, int column, enum Qt__SortOrder order)
///
void k_categorizedsortfilterproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
///
/// Base class method implementation
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_categorizedsortfilterproxymodel_super_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#isCategorizedModel)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_is_categorized_model(const void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setCategorizedModel)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param categorizedModel bool
///
void k_categorizedsortfilterproxymodel_set_categorized_model(void* self, bool categorizedModel);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortColumn)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
int32_t k_categorizedsortfilterproxymodel_sort_column(const void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortOrder)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return enum Qt__SortOrder
///
int32_t k_categorizedsortfilterproxymodel_sort_order(const void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setSortCategoriesByNaturalComparison)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortCategoriesByNaturalComparison bool
///
void k_categorizedsortfilterproxymodel_set_sort_categories_by_natural_comparison(void* self, bool sortCategoriesByNaturalComparison);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortCategoriesByNaturalComparison)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_sort_categories_by_natural_comparison(const void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_categorizedsortfilterproxymodel_less_than(const void* self, const void* left, const void* right);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(const KCategorizedSortFilterProxyModel* self, QModelIndex* left, QModelIndex* right)
///
void k_categorizedsortfilterproxymodel_on_less_than(void* self, bool (*callback)(const void*, const void*, const void*));

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
///
/// Base class method implementation
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_less_than(const void* self, const void* left, const void* right);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_categorizedsortfilterproxymodel_sub_sort_less_than(const void* self, const void* left, const void* right);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(const KCategorizedSortFilterProxyModel* self, QModelIndex* left, QModelIndex* right)
///
void k_categorizedsortfilterproxymodel_on_sub_sort_less_than(void* self, bool (*callback)(const void*, const void*, const void*));

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
///
/// Base class method implementation
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_sub_sort_less_than(const void* self, const void* left, const void* right);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
int32_t k_categorizedsortfilterproxymodel_compare_categories(const void* self, const void* left, const void* right);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(const KCategorizedSortFilterProxyModel* self, QModelIndex* left, QModelIndex* right)
///
void k_categorizedsortfilterproxymodel_on_compare_categories(void* self, int32_t (*callback)(const void*, const void*, const void*));

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
///
/// Base class method implementation
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param left QModelIndex*
/// @param right QModelIndex*
///
int32_t k_categorizedsortfilterproxymodel_super_compare_categories(const void* self, const void* left, const void* right);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_categorizedsortfilterproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_categorizedsortfilterproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
QRegularExpression* k_categorizedsortfilterproxymodel_filter_regular_expression(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
int32_t k_categorizedsortfilterproxymodel_filter_key_column(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
///
void k_categorizedsortfilterproxymodel_set_filter_key_column(void* self, int column);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
///
int32_t k_categorizedsortfilterproxymodel_filter_case_sensitivity(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
///
void k_categorizedsortfilterproxymodel_set_filter_case_sensitivity(void* self, int32_t cs);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return enum Qt__CaseSensitivity
///
int32_t k_categorizedsortfilterproxymodel_sort_case_sensitivity(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param cs enum Qt__CaseSensitivity
///
void k_categorizedsortfilterproxymodel_set_sort_case_sensitivity(void* self, int32_t cs);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_is_sort_locale_aware(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param on bool
///
void k_categorizedsortfilterproxymodel_set_sort_locale_aware(void* self, bool on);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_dynamic_sort_filter(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param enable bool
///
void k_categorizedsortfilterproxymodel_set_dynamic_sort_filter(void* self, bool enable);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
int32_t k_categorizedsortfilterproxymodel_sort_role(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param role int
///
void k_categorizedsortfilterproxymodel_set_sort_role(void* self, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
int32_t k_categorizedsortfilterproxymodel_filter_role(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param role int
///
void k_categorizedsortfilterproxymodel_set_filter_role(void* self, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_is_recursive_filtering_enabled(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param recursive bool
///
void k_categorizedsortfilterproxymodel_set_recursive_filtering_enabled(void* self, bool recursive);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_auto_accept_child_rows(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param accept bool
///
void k_categorizedsortfilterproxymodel_set_auto_accept_child_rows(void* self, bool accept);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param pattern const char*
///
void k_categorizedsortfilterproxymodel_set_filter_regular_expression(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param regularExpression QRegularExpression*
///
void k_categorizedsortfilterproxymodel_set_filter_regular_expression2(void* self, const void* regularExpression);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param pattern const char*
///
void k_categorizedsortfilterproxymodel_set_filter_wildcard(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param pattern const char*
///
void k_categorizedsortfilterproxymodel_set_filter_fixed_string(void* self, const char* pattern);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_invalidate(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param dynamicSortFilter bool
///
void k_categorizedsortfilterproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, bool dynamicSortFilter)
///
void k_categorizedsortfilterproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param filterCaseSensitivity enum Qt__CaseSensitivity
///
void k_categorizedsortfilterproxymodel_filter_case_sensitivity_changed(void* self, int32_t filterCaseSensitivity);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, enum Qt__CaseSensitivity filterCaseSensitivity)
///
void k_categorizedsortfilterproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortCaseSensitivity enum Qt__CaseSensitivity
///
void k_categorizedsortfilterproxymodel_sort_case_sensitivity_changed(void* self, int32_t sortCaseSensitivity);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, enum Qt__CaseSensitivity sortCaseSensitivity)
///
void k_categorizedsortfilterproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortLocaleAware bool
///
void k_categorizedsortfilterproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, bool sortLocaleAware)
///
void k_categorizedsortfilterproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sortRole int
///
void k_categorizedsortfilterproxymodel_sort_role_changed(void* self, int sortRole);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, int sortRole)
///
void k_categorizedsortfilterproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param filterRole int
///
void k_categorizedsortfilterproxymodel_filter_role_changed(void* self, int filterRole);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, int filterRole)
///
void k_categorizedsortfilterproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param recursiveFilteringEnabled bool
///
void k_categorizedsortfilterproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, bool recursiveFilteringEnabled)
///
void k_categorizedsortfilterproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param autoAcceptChildRows bool
///
void k_categorizedsortfilterproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, bool autoAcceptChildRows)
///
void k_categorizedsortfilterproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
QAbstractItemModel* k_categorizedsortfilterproxymodel_source_model(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
///
bool k_categorizedsortfilterproxymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
///
bool k_categorizedsortfilterproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
///
bool k_categorizedsortfilterproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
///
bool k_categorizedsortfilterproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
///
bool k_categorizedsortfilterproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_categorizedsortfilterproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_categorizedsortfilterproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
bool k_categorizedsortfilterproxymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_categorizedsortfilterproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_categorizedsortfilterproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_categorizedsortfilterproxymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_categorizedsortfilterproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_categorizedsortfilterproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_categorizedsortfilterproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_categorizedsortfilterproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_categorizedsortfilterproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_categorizedsortfilterproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_categorizedsortfilterproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_categorizedsortfilterproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_categorizedsortfilterproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCategorizedSortFilterProxyModel*
///
const char* k_categorizedsortfilterproxymodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param name const char*
///
void k_categorizedsortfilterproxymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param b bool
///
bool k_categorizedsortfilterproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
QThread* k_categorizedsortfilterproxymodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param thread QThread*
///
bool k_categorizedsortfilterproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param interval int
///
int32_t k_categorizedsortfilterproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t k_categorizedsortfilterproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param id int
///
void k_categorizedsortfilterproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param id enum Qt__TimerId
///
void k_categorizedsortfilterproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_categorizedsortfilterproxymodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QObject*
///
void k_categorizedsortfilterproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param filterObj QObject*
///
void k_categorizedsortfilterproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param obj QObject*
///
void k_categorizedsortfilterproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_categorizedsortfilterproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_categorizedsortfilterproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param receiver QObject*
///
bool k_categorizedsortfilterproxymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_categorizedsortfilterproxymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_categorizedsortfilterproxymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param name const char*
///
QVariant* k_categorizedsortfilterproxymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KCategorizedSortFilterProxyModel*
///
const char** k_categorizedsortfilterproxymodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategorizedSortFilterProxyModel*
///
QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KCategorizedSortFilterProxyModel*
///
const QBindingStorage* k_categorizedsortfilterproxymodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param classname const char*
///
bool k_categorizedsortfilterproxymodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_categorizedsortfilterproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_categorizedsortfilterproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_categorizedsortfilterproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param signal const char*
///
bool k_categorizedsortfilterproxymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_categorizedsortfilterproxymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_categorizedsortfilterproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_categorizedsortfilterproxymodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param param1 QObject*
///
void k_categorizedsortfilterproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QObject* param1)
///
void k_categorizedsortfilterproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_categorizedsortfilterproxymodel_set_source_model(void* self, void* sourceModel);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_categorizedsortfilterproxymodel_super_set_source_model(void* self, void* sourceModel);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QAbstractItemModel* sourceModel)
///
void k_categorizedsortfilterproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_map_to_source(const void* self, const void* proxyIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_super_map_to_source(const void* self, const void* proxyIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, QModelIndex* proxyIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_map_from_source(const void* self, const void* sourceIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_super_map_from_source(const void* self, const void* sourceIndex);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param proxySelection QItemSelection*
///
QItemSelection* k_categorizedsortfilterproxymodel_map_selection_to_source(const void* self, const void* proxySelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param proxySelection QItemSelection*
///
QItemSelection* k_categorizedsortfilterproxymodel_super_map_selection_to_source(const void* self, const void* proxySelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QItemSelection* func(KCategorizedSortFilterProxyModel* self, QItemSelection* proxySelection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
///
QItemSelection* k_categorizedsortfilterproxymodel_map_selection_from_source(const void* self, const void* sourceSelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param sourceSelection QItemSelection*
///
QItemSelection* k_categorizedsortfilterproxymodel_super_map_selection_from_source(const void* self, const void* sourceSelection);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QItemSelection* func(KCategorizedSortFilterProxyModel* self, QItemSelection* sourceSelection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_filter_accepts_row(const void* self, int source_row, const void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param source_row int
/// @param source_parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_filter_accepts_row(const void* self, int source_row, const void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int source_row, QModelIndex* source_parent)
///
void k_categorizedsortfilterproxymodel_on_filter_accepts_row(void* self, bool (*callback)(const void*, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_filter_accepts_column(const void* self, int source_column, const void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param source_column int
/// @param source_parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_filter_accepts_column(const void* self, int source_column, const void* source_parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int source_column, QModelIndex* source_parent)
///
void k_categorizedsortfilterproxymodel_on_filter_accepts_column(void* self, bool (*callback)(const void*, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_index(const void* self, int row, int column, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_super_index(const void* self, int row, int column, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_parent(const void* self, const void* child);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_super_parent(const void* self, const void* child);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_categorizedsortfilterproxymodel_row_count(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_categorizedsortfilterproxymodel_super_row_count(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_categorizedsortfilterproxymodel_column_count(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
int32_t k_categorizedsortfilterproxymodel_super_column_count(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_has_children(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_has_children(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_categorizedsortfilterproxymodel_data(const void* self, const void* index, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_categorizedsortfilterproxymodel_super_data(const void* self, const void* index, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QVariant* func(KCategorizedSortFilterProxyModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_categorizedsortfilterproxymodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_categorizedsortfilterproxymodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_categorizedsortfilterproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_categorizedsortfilterproxymodel_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_categorizedsortfilterproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QVariant* func(KCategorizedSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_categorizedsortfilterproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_categorizedsortfilterproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_categorizedsortfilterproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_categorizedsortfilterproxymodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_categorizedsortfilterproxymodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QMimeData* func(KCategorizedSortFilterProxyModel* self, libqt_list of QModelIndex* indexes)
///
void k_categorizedsortfilterproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
void k_categorizedsortfilterproxymodel_fetch_more(void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
void k_categorizedsortfilterproxymodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_categorizedsortfilterproxymodel_flags(const void* self, const void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_categorizedsortfilterproxymodel_super_flags(const void* self, const void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self, QModelIndex* index)
///
void k_categorizedsortfilterproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_buddy(const void* self, const void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_categorizedsortfilterproxymodel_super_buddy(const void* self, const void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedsortfilterproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedsortfilterproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_list of QModelIndex* func(KCategorizedSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_categorizedsortfilterproxymodel_on_match(void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
QSize* k_categorizedsortfilterproxymodel_span(const void* self, const void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
QSize* k_categorizedsortfilterproxymodel_super_span(const void* self, const void* index);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QSize* func(KCategorizedSortFilterProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
const char** k_categorizedsortfilterproxymodel_mime_types(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
const char** k_categorizedsortfilterproxymodel_super_mime_types(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback const char** func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_mime_types(void* self, const char** (*callback)(const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_categorizedsortfilterproxymodel_supported_drop_actions(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_categorizedsortfilterproxymodel_super_supported_drop_actions(const void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
bool k_categorizedsortfilterproxymodel_super_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_revert(void* self, void (*callback)(void*));

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
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_categorizedsortfilterproxymodel_item_data(const void* self, const void* index);

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
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_categorizedsortfilterproxymodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_map of int to QVariant* func(KCategorizedSortFilterProxyModel* self, QModelIndex* index)
///
void k_categorizedsortfilterproxymodel_on_item_data(void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_categorizedsortfilterproxymodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_categorizedsortfilterproxymodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_categorizedsortfilterproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
bool k_categorizedsortfilterproxymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* index)
///
void k_categorizedsortfilterproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_categorizedsortfilterproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_categorizedsortfilterproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_categorizedsortfilterproxymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_categorizedsortfilterproxymodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*));

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
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_categorizedsortfilterproxymodel_role_names(const void* self);

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
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_categorizedsortfilterproxymodel_super_role_names(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_map of int to char* func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_role_names(void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_categorizedsortfilterproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_categorizedsortfilterproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_categorizedsortfilterproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_categorizedsortfilterproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_categorizedsortfilterproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_categorizedsortfilterproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_categorizedsortfilterproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_categorizedsortfilterproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_categorizedsortfilterproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
///
bool k_categorizedsortfilterproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
///
bool k_categorizedsortfilterproxymodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QEvent* event)
///
void k_categorizedsortfilterproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_categorizedsortfilterproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_categorizedsortfilterproxymodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QObject* watched, QEvent* event)
///
void k_categorizedsortfilterproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QTimerEvent*
///
void k_categorizedsortfilterproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QTimerEvent*
///
void k_categorizedsortfilterproxymodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QTimerEvent* event)
///
void k_categorizedsortfilterproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QChildEvent*
///
void k_categorizedsortfilterproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QChildEvent*
///
void k_categorizedsortfilterproxymodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QChildEvent* event)
///
void k_categorizedsortfilterproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
///
void k_categorizedsortfilterproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param event QEvent*
///
void k_categorizedsortfilterproxymodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QEvent* event)
///
void k_categorizedsortfilterproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_categorizedsortfilterproxymodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_categorizedsortfilterproxymodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QMetaMethod* signal)
///
void k_categorizedsortfilterproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_categorizedsortfilterproxymodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
///
void k_categorizedsortfilterproxymodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QMetaMethod* signal)
///
void k_categorizedsortfilterproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_invalidate_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_invalidate_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_invalidate_filter(void* self, void (*callback)(void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_invalidate_rows_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_invalidate_rows_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_invalidate_rows_filter(void* self, void (*callback)(void*));

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_invalidate_columns_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_invalidate_columns_filter(void* self);

/// Inherited from QSortFilterProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_invalidate_columns_filter(void* self, void (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_categorizedsortfilterproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_categorizedsortfilterproxymodel_super_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, int row, int col, void* internalPtr)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(const void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_categorizedsortfilterproxymodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_categorizedsortfilterproxymodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QModelIndex* func(KCategorizedSortFilterProxyModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_categorizedsortfilterproxymodel_on_create_index(void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_categorizedsortfilterproxymodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_categorizedsortfilterproxymodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_categorizedsortfilterproxymodel_on_encode_data(void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_categorizedsortfilterproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_categorizedsortfilterproxymodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_categorizedsortfilterproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_categorizedsortfilterproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_categorizedsortfilterproxymodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_categorizedsortfilterproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_categorizedsortfilterproxymodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_categorizedsortfilterproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_categorizedsortfilterproxymodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_categorizedsortfilterproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_categorizedsortfilterproxymodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_categorizedsortfilterproxymodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_categorizedsortfilterproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_categorizedsortfilterproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_categorizedsortfilterproxymodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_categorizedsortfilterproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedsortfilterproxymodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedsortfilterproxymodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback libqt_list of QModelIndex* func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_persistent_index_list(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
QObject* k_categorizedsortfilterproxymodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
QObject* k_categorizedsortfilterproxymodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback QObject* func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
int32_t k_categorizedsortfilterproxymodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
///
int32_t k_categorizedsortfilterproxymodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param signal const char*
///
int32_t k_categorizedsortfilterproxymodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param signal const char*
///
int32_t k_categorizedsortfilterproxymodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback int32_t func(KCategorizedSortFilterProxyModel* self, const char* signal)
///
void k_categorizedsortfilterproxymodel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
///
bool k_categorizedsortfilterproxymodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCategorizedSortFilterProxyModel*
/// @param signal QMetaMethod*
///
bool k_categorizedsortfilterproxymodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback bool func(KCategorizedSortFilterProxyModel* self, QMetaMethod* signal)
///
void k_categorizedsortfilterproxymodel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_categorizedsortfilterproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self)
///
void k_categorizedsortfilterproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_categorizedsortfilterproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_categorizedsortfilterproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_categorizedsortfilterproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_categorizedsortfilterproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedSortFilterProxyModel*
/// @param callback void func(KCategorizedSortFilterProxyModel* self, const char* objectName)
///
void k_categorizedsortfilterproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#dtor.KCategorizedSortFilterProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KCategorizedSortFilterProxyModel*
///
void k_categorizedsortfilterproxymodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#public-types)

typedef enum {
    KCATEGORIZEDSORTFILTERPROXYMODEL_ADDITIONALROLES_CATEGORYDISPLAYROLE = 399415562,
    KCATEGORIZEDSORTFILTERPROXYMODEL_ADDITIONALROLES_CATEGORYSORTROLE = 663060064
} KCategorizedSortFilterProxyModel__AdditionalRoles;

#endif
