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
#include "libemojiproxymodel.hpp"
#include "libemojiproxymodel.h"

TextEmoticonsCore__EmojiProxyModel* k_textemoticonscore__emojiproxymodel_new() {
    return TextEmoticonsCore__EmojiProxyModel_new();
}

TextEmoticonsCore__EmojiProxyModel* k_textemoticonscore__emojiproxymodel_new2(void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_new2((QObject*)parent);
}

const QMetaObject* k_textemoticonscore__emojiproxymodel_meta_object(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_MetaObject((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnMetaObject((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* k_textemoticonscore__emojiproxymodel_super_meta_object(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMetaObject((TextEmoticonsCore__EmojiProxyModel*)self);
}

void* k_textemoticonscore__emojiproxymodel_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__EmojiProxyModel_Metacast((TextEmoticonsCore__EmojiProxyModel*)self, param1);
}

void k_textemoticonscore__emojiproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEmoticonsCore__EmojiProxyModel_OnMetacast((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void* k_textemoticonscore__emojiproxymodel_super_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMetacast((TextEmoticonsCore__EmojiProxyModel*)self, param1);
}

int32_t k_textemoticonscore__emojiproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__EmojiProxyModel_Metacall((TextEmoticonsCore__EmojiProxyModel*)self, param1, param2, param3);
}

void k_textemoticonscore__emojiproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnMetacall((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMetacall((TextEmoticonsCore__EmojiProxyModel*)self, param1, param2, param3);
}

const char* k_textemoticonscore__emojiproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__emojiproxymodel_category(void* self) {
    libqt_string _str = TextEmoticonsCore__EmojiProxyModel_Category((TextEmoticonsCore__EmojiProxyModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emojiproxymodel_set_category(void* self, const char* newCategories) {
    TextEmoticonsCore__EmojiProxyModel_SetCategory((TextEmoticonsCore__EmojiProxyModel*)self, qstring(newCategories));
}

const char** k_textemoticonscore__emojiproxymodel_recent_emoticons(void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiProxyModel_RecentEmoticons((TextEmoticonsCore__EmojiProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojiproxymodel_recent_emoticons\n");
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

void k_textemoticonscore__emojiproxymodel_set_recent_emoticons(void* self, const char* newRecentEmoticons[static 1]) {
    size_t newRecentEmoticons_len = libqt_strv_length(newRecentEmoticons);
    libqt_string* newRecentEmoticons_qstr = (libqt_string*)malloc(newRecentEmoticons_len * sizeof(libqt_string));
    if (newRecentEmoticons_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojiproxymodel_set_recent_emoticons\n");
        abort();
    }
    for (size_t i = 0; i < newRecentEmoticons_len; ++i) {
        newRecentEmoticons_qstr[i] = qstring(newRecentEmoticons[i]);
    }
    libqt_list newRecentEmoticons_list = qlist(newRecentEmoticons_qstr, newRecentEmoticons_len);
    TextEmoticonsCore__EmojiProxyModel_SetRecentEmoticons((TextEmoticonsCore__EmojiProxyModel*)self, newRecentEmoticons_list);
    free(newRecentEmoticons_qstr);
}

const char* k_textemoticonscore__emojiproxymodel_search_identifier(void* self) {
    libqt_string _str = TextEmoticonsCore__EmojiProxyModel_SearchIdentifier((TextEmoticonsCore__EmojiProxyModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emojiproxymodel_set_search_identifier(void* self, const char* newSearchIdentifier) {
    TextEmoticonsCore__EmojiProxyModel_SetSearchIdentifier((TextEmoticonsCore__EmojiProxyModel*)self, qstring(newSearchIdentifier));
}

bool k_textemoticonscore__emojiproxymodel_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow((TextEmoticonsCore__EmojiProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

void k_textemoticonscore__emojiproxymodel_on_filter_accepts_row(void* self, bool (*callback)(void*, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsRow((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_super_filter_accepts_row(void* self, int source_row, void* source_parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsRow((TextEmoticonsCore__EmojiProxyModel*)self, source_row, (QModelIndex*)source_parent);
}

bool k_textemoticonscore__emojiproxymodel_less_than(void* self, void* left, void* right) {
    return TextEmoticonsCore__EmojiProxyModel_LessThan((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

void k_textemoticonscore__emojiproxymodel_on_less_than(void* self, bool (*callback)(void*, void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnLessThan((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_super_less_than(void* self, void* left, void* right) {
    return TextEmoticonsCore__EmojiProxyModel_SuperLessThan((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)left, (QModelIndex*)right);
}

const char* k_textemoticonscore__emojiproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__emojiproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRegularExpression* k_textemoticonscore__emojiproxymodel_filter_regular_expression(void* self) {
    return QSortFilterProxyModel_FilterRegularExpression((QSortFilterProxyModel*)self);
}

int32_t k_textemoticonscore__emojiproxymodel_filter_key_column(void* self) {
    return QSortFilterProxyModel_FilterKeyColumn((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_filter_key_column(void* self, int column) {
    QSortFilterProxyModel_SetFilterKeyColumn((QSortFilterProxyModel*)self, column);
}

int32_t k_textemoticonscore__emojiproxymodel_filter_case_sensitivity(void* self) {
    return QSortFilterProxyModel_FilterCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_filter_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetFilterCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

int32_t k_textemoticonscore__emojiproxymodel_sort_case_sensitivity(void* self) {
    return QSortFilterProxyModel_SortCaseSensitivity((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_sort_case_sensitivity(void* self, int32_t cs) {
    QSortFilterProxyModel_SetSortCaseSensitivity((QSortFilterProxyModel*)self, cs);
}

bool k_textemoticonscore__emojiproxymodel_is_sort_locale_aware(void* self) {
    return QSortFilterProxyModel_IsSortLocaleAware((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_sort_locale_aware(void* self, bool on) {
    QSortFilterProxyModel_SetSortLocaleAware((QSortFilterProxyModel*)self, on);
}

int32_t k_textemoticonscore__emojiproxymodel_sort_column(void* self) {
    return QSortFilterProxyModel_SortColumn((QSortFilterProxyModel*)self);
}

int32_t k_textemoticonscore__emojiproxymodel_sort_order(void* self) {
    return QSortFilterProxyModel_SortOrder((QSortFilterProxyModel*)self);
}

bool k_textemoticonscore__emojiproxymodel_dynamic_sort_filter(void* self) {
    return QSortFilterProxyModel_DynamicSortFilter((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_dynamic_sort_filter(void* self, bool enable) {
    QSortFilterProxyModel_SetDynamicSortFilter((QSortFilterProxyModel*)self, enable);
}

int32_t k_textemoticonscore__emojiproxymodel_sort_role(void* self) {
    return QSortFilterProxyModel_SortRole((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_sort_role(void* self, int role) {
    QSortFilterProxyModel_SetSortRole((QSortFilterProxyModel*)self, role);
}

int32_t k_textemoticonscore__emojiproxymodel_filter_role(void* self) {
    return QSortFilterProxyModel_FilterRole((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_filter_role(void* self, int role) {
    QSortFilterProxyModel_SetFilterRole((QSortFilterProxyModel*)self, role);
}

bool k_textemoticonscore__emojiproxymodel_is_recursive_filtering_enabled(void* self) {
    return QSortFilterProxyModel_IsRecursiveFilteringEnabled((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_recursive_filtering_enabled(void* self, bool recursive) {
    QSortFilterProxyModel_SetRecursiveFilteringEnabled((QSortFilterProxyModel*)self, recursive);
}

bool k_textemoticonscore__emojiproxymodel_auto_accept_child_rows(void* self) {
    return QSortFilterProxyModel_AutoAcceptChildRows((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_set_auto_accept_child_rows(void* self, bool accept) {
    QSortFilterProxyModel_SetAutoAcceptChildRows((QSortFilterProxyModel*)self, accept);
}

void k_textemoticonscore__emojiproxymodel_set_filter_regular_expression(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterRegularExpression((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_textemoticonscore__emojiproxymodel_set_filter_regular_expression2(void* self, void* regularExpression) {
    QSortFilterProxyModel_SetFilterRegularExpression2((QSortFilterProxyModel*)self, (QRegularExpression*)regularExpression);
}

void k_textemoticonscore__emojiproxymodel_set_filter_wildcard(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterWildcard((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_textemoticonscore__emojiproxymodel_set_filter_fixed_string(void* self, const char* pattern) {
    QSortFilterProxyModel_SetFilterFixedString((QSortFilterProxyModel*)self, qstring(pattern));
}

void k_textemoticonscore__emojiproxymodel_invalidate(void* self) {
    QSortFilterProxyModel_Invalidate((QSortFilterProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_dynamic_sort_filter_changed(void* self, bool dynamicSortFilter) {
    QSortFilterProxyModel_DynamicSortFilterChanged((QSortFilterProxyModel*)self, dynamicSortFilter);
}

void k_textemoticonscore__emojiproxymodel_on_dynamic_sort_filter_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_DynamicSortFilterChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_filter_case_sensitivity_changed(void* self, int32_t filterCaseSensitivity) {
    QSortFilterProxyModel_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, filterCaseSensitivity);
}

void k_textemoticonscore__emojiproxymodel_on_filter_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_sort_case_sensitivity_changed(void* self, int32_t sortCaseSensitivity) {
    QSortFilterProxyModel_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, sortCaseSensitivity);
}

void k_textemoticonscore__emojiproxymodel_on_sort_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t)) {
    QSortFilterProxyModel_Connect_SortCaseSensitivityChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_sort_locale_aware_changed(void* self, bool sortLocaleAware) {
    QSortFilterProxyModel_SortLocaleAwareChanged((QSortFilterProxyModel*)self, sortLocaleAware);
}

void k_textemoticonscore__emojiproxymodel_on_sort_locale_aware_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_SortLocaleAwareChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_sort_role_changed(void* self, int sortRole) {
    QSortFilterProxyModel_SortRoleChanged((QSortFilterProxyModel*)self, sortRole);
}

void k_textemoticonscore__emojiproxymodel_on_sort_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_SortRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_filter_role_changed(void* self, int filterRole) {
    QSortFilterProxyModel_FilterRoleChanged((QSortFilterProxyModel*)self, filterRole);
}

void k_textemoticonscore__emojiproxymodel_on_filter_role_changed(void* self, void (*callback)(void*, int)) {
    QSortFilterProxyModel_Connect_FilterRoleChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_recursive_filtering_enabled_changed(void* self, bool recursiveFilteringEnabled) {
    QSortFilterProxyModel_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, recursiveFilteringEnabled);
}

void k_textemoticonscore__emojiproxymodel_on_recursive_filtering_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_auto_accept_child_rows_changed(void* self, bool autoAcceptChildRows) {
    QSortFilterProxyModel_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, autoAcceptChildRows);
}

void k_textemoticonscore__emojiproxymodel_on_auto_accept_child_rows_changed(void* self, void (*callback)(void*, bool)) {
    QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged((QSortFilterProxyModel*)self, (intptr_t)callback);
}

QAbstractItemModel* k_textemoticonscore__emojiproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

bool k_textemoticonscore__emojiproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_textemoticonscore__emojiproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_textemoticonscore__emojiproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_textemoticonscore__emojiproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_textemoticonscore__emojiproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_textemoticonscore__emojiproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojiproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojiproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojiproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_textemoticonscore__emojiproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_textemoticonscore__emojiproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_textemoticonscore__emojiproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_textemoticonscore__emojiproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_textemoticonscore__emojiproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_textemoticonscore__emojiproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_textemoticonscore__emojiproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_textemoticonscore__emojiproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_textemoticonscore__emojiproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emojiproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textemoticonscore__emojiproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textemoticonscore__emojiproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textemoticonscore__emojiproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textemoticonscore__emojiproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textemoticonscore__emojiproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textemoticonscore__emojiproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textemoticonscore__emojiproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textemoticonscore__emojiproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textemoticonscore__emojiproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textemoticonscore__emojiproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textemoticonscore__emojiproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textemoticonscore__emojiproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textemoticonscore__emojiproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textemoticonscore__emojiproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textemoticonscore__emojiproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textemoticonscore__emojiproxymodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textemoticonscore__emojiproxymodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textemoticonscore__emojiproxymodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textemoticonscore__emojiproxymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__emojiproxymodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textemoticonscore__emojiproxymodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textemoticonscore__emojiproxymodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textemoticonscore__emojiproxymodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textemoticonscore__emojiproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textemoticonscore__emojiproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textemoticonscore__emojiproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textemoticonscore__emojiproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textemoticonscore__emojiproxymodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojiproxymodel_dynamic_property_names\n");
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

QBindingStorage* k_textemoticonscore__emojiproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textemoticonscore__emojiproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textemoticonscore__emojiproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textemoticonscore__emojiproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textemoticonscore__emojiproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textemoticonscore__emojiproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textemoticonscore__emojiproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textemoticonscore__emojiproxymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textemoticonscore__emojiproxymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textemoticonscore__emojiproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textemoticonscore__emojiproxymodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textemoticonscore__emojiproxymodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textemoticonscore__emojiproxymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__emojiproxymodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textemoticonscore__emojiproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textemoticonscore__emojiproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_set_source_model(void* self, void* sourceModel) {
    TextEmoticonsCore__EmojiProxyModel_SetSourceModel((TextEmoticonsCore__EmojiProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_textemoticonscore__emojiproxymodel_super_set_source_model(void* self, void* sourceModel) {
    TextEmoticonsCore__EmojiProxyModel_SuperSetSourceModel((TextEmoticonsCore__EmojiProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void k_textemoticonscore__emojiproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnSetSourceModel((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_map_to_source(void* self, void* proxyIndex) {
    return TextEmoticonsCore__EmojiProxyModel_MapToSource((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)proxyIndex);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_map_to_source(void* self, void* proxyIndex) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMapToSource((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)proxyIndex);
}

void k_textemoticonscore__emojiproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnMapToSource((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_map_from_source(void* self, void* sourceIndex) {
    return TextEmoticonsCore__EmojiProxyModel_MapFromSource((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceIndex);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_map_from_source(void* self, void* sourceIndex) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMapFromSource((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceIndex);
}

void k_textemoticonscore__emojiproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnMapFromSource((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_textemoticonscore__emojiproxymodel_map_selection_to_source(void* self, void* proxySelection) {
    return TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource((TextEmoticonsCore__EmojiProxyModel*)self, (QItemSelection*)proxySelection);
}

QItemSelection* k_textemoticonscore__emojiproxymodel_super_map_selection_to_source(void* self, void* proxySelection) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionToSource((TextEmoticonsCore__EmojiProxyModel*)self, (QItemSelection*)proxySelection);
}

void k_textemoticonscore__emojiproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnMapSelectionToSource((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QItemSelection* k_textemoticonscore__emojiproxymodel_map_selection_from_source(void* self, void* sourceSelection) {
    return TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource((TextEmoticonsCore__EmojiProxyModel*)self, (QItemSelection*)sourceSelection);
}

QItemSelection* k_textemoticonscore__emojiproxymodel_super_map_selection_from_source(void* self, void* sourceSelection) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionFromSource((TextEmoticonsCore__EmojiProxyModel*)self, (QItemSelection*)sourceSelection);
}

void k_textemoticonscore__emojiproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnMapSelectionFromSource((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn((TextEmoticonsCore__EmojiProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

bool k_textemoticonscore__emojiproxymodel_super_filter_accepts_column(void* self, int source_column, void* source_parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsColumn((TextEmoticonsCore__EmojiProxyModel*)self, source_column, (QModelIndex*)source_parent);
}

void k_textemoticonscore__emojiproxymodel_on_filter_accepts_column(void* self, bool (*callback)(void*, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsColumn((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_index(void* self, int row, int column, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_Index((TextEmoticonsCore__EmojiProxyModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_index(void* self, int row, int column, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperIndex((TextEmoticonsCore__EmojiProxyModel*)self, row, column, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnIndex((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_parent(void* self, void* child) {
    return TextEmoticonsCore__EmojiProxyModel_Parent((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)child);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_parent(void* self, void* child) {
    return TextEmoticonsCore__EmojiProxyModel_SuperParent((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)child);
}

void k_textemoticonscore__emojiproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnParent((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_sibling(void* self, int row, int column, void* idx) {
    return TextEmoticonsCore__EmojiProxyModel_Sibling((TextEmoticonsCore__EmojiProxyModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_sibling(void* self, int row, int column, void* idx) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSibling((TextEmoticonsCore__EmojiProxyModel*)self, row, column, (QModelIndex*)idx);
}

void k_textemoticonscore__emojiproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnSibling((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_row_count(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_RowCount((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_textemoticonscore__emojiproxymodel_super_row_count(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperRowCount((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnRowCount((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_column_count(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_ColumnCount((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

int32_t k_textemoticonscore__emojiproxymodel_super_column_count(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperColumnCount((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnColumnCount((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_has_children(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_HasChildren((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_has_children(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperHasChildren((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnHasChildren((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QVariant* k_textemoticonscore__emojiproxymodel_data(void* self, void* index, int role) {
    return TextEmoticonsCore__EmojiProxyModel_Data((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, role);
}

QVariant* k_textemoticonscore__emojiproxymodel_super_data(void* self, void* index, int role) {
    return TextEmoticonsCore__EmojiProxyModel_SuperData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, role);
}

void k_textemoticonscore__emojiproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_set_data(void* self, void* index, void* value, int role) {
    return TextEmoticonsCore__EmojiProxyModel_SetData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_textemoticonscore__emojiproxymodel_super_set_data(void* self, void* index, void* value, int role) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSetData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_textemoticonscore__emojiproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnSetData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QVariant* k_textemoticonscore__emojiproxymodel_header_data(void* self, int section, int32_t orientation, int role) {
    return TextEmoticonsCore__EmojiProxyModel_HeaderData((TextEmoticonsCore__EmojiProxyModel*)self, section, orientation, role);
}

QVariant* k_textemoticonscore__emojiproxymodel_super_header_data(void* self, int section, int32_t orientation, int role) {
    return TextEmoticonsCore__EmojiProxyModel_SuperHeaderData((TextEmoticonsCore__EmojiProxyModel*)self, section, orientation, role);
}

void k_textemoticonscore__emojiproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnHeaderData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return TextEmoticonsCore__EmojiProxyModel_SetHeaderData((TextEmoticonsCore__EmojiProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_textemoticonscore__emojiproxymodel_super_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSetHeaderData((TextEmoticonsCore__EmojiProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void k_textemoticonscore__emojiproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnSetHeaderData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QMimeData* k_textemoticonscore__emojiproxymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return TextEmoticonsCore__EmojiProxyModel_MimeData((TextEmoticonsCore__EmojiProxyModel*)self, indexes);
}

QMimeData* k_textemoticonscore__emojiproxymodel_super_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMimeData((TextEmoticonsCore__EmojiProxyModel*)self, indexes);
}

void k_textemoticonscore__emojiproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list /* of QModelIndex* */)) {
    TextEmoticonsCore__EmojiProxyModel_OnMimeData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_DropMimeData((TextEmoticonsCore__EmojiProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperDropMimeData((TextEmoticonsCore__EmojiProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnDropMimeData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_InsertRows((TextEmoticonsCore__EmojiProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_insert_rows(void* self, int row, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperInsertRows((TextEmoticonsCore__EmojiProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnInsertRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_InsertColumns((TextEmoticonsCore__EmojiProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_insert_columns(void* self, int column, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_RemoveRows((TextEmoticonsCore__EmojiProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_remove_rows(void* self, int row, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self, row, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_RemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_remove_columns(void* self, int column, int count, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, column, count, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_fetch_more(void* self, void* parent) {
    TextEmoticonsCore__EmojiProxyModel_FetchMore((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_super_fetch_more(void* self, void* parent) {
    TextEmoticonsCore__EmojiProxyModel_SuperFetchMore((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnFetchMore((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_can_fetch_more(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_CanFetchMore((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_can_fetch_more(void* self, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperCanFetchMore((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnCanFetchMore((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_flags(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_Flags((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

int32_t k_textemoticonscore__emojiproxymodel_super_flags(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_SuperFlags((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojiproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnFlags((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_buddy(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_Buddy((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_buddy(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_SuperBuddy((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojiproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnBuddy((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_textemoticonscore__emojiproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = TextEmoticonsCore__EmojiProxyModel_Match((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_textemoticonscore__emojiproxymodel_super_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = TextEmoticonsCore__EmojiProxyModel_SuperMatch((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_textemoticonscore__emojiproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int32_t)) {
    TextEmoticonsCore__EmojiProxyModel_OnMatch((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QSize* k_textemoticonscore__emojiproxymodel_span(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_Span((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

QSize* k_textemoticonscore__emojiproxymodel_super_span(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSpan((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojiproxymodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnSpan((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_sort(void* self, int column, int32_t order) {
    TextEmoticonsCore__EmojiProxyModel_Sort((TextEmoticonsCore__EmojiProxyModel*)self, column, order);
}

void k_textemoticonscore__emojiproxymodel_super_sort(void* self, int column, int32_t order) {
    TextEmoticonsCore__EmojiProxyModel_SuperSort((TextEmoticonsCore__EmojiProxyModel*)self, column, order);
}

void k_textemoticonscore__emojiproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    TextEmoticonsCore__EmojiProxyModel_OnSort((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

const char** k_textemoticonscore__emojiproxymodel_mime_types(void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiProxyModel_MimeTypes((TextEmoticonsCore__EmojiProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojiproxymodel_mime_types\n");
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

const char** k_textemoticonscore__emojiproxymodel_super_mime_types(void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiProxyModel_SuperMimeTypes((TextEmoticonsCore__EmojiProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojiproxymodel_mime_types\n");
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

void k_textemoticonscore__emojiproxymodel_on_mime_types(void* self, const char** (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnMimeTypes((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_supported_drop_actions(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SupportedDropActions((TextEmoticonsCore__EmojiProxyModel*)self);
}

int32_t k_textemoticonscore__emojiproxymodel_super_supported_drop_actions(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSupportedDropActions((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnSupportedDropActions((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_submit(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_Submit((TextEmoticonsCore__EmojiProxyModel*)self);
}

bool k_textemoticonscore__emojiproxymodel_super_submit(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSubmit((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_submit(void* self, bool (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnSubmit((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_revert(void* self) {
    TextEmoticonsCore__EmojiProxyModel_Revert((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_revert(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperRevert((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_revert(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnRevert((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_textemoticonscore__emojiproxymodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiProxyModel_ItemData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ k_textemoticonscore__emojiproxymodel_super_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiProxyModel_SuperItemData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_textemoticonscore__emojiproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnItemData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_textemoticonscore__emojiproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_textemoticonscore__emojiproxymodel_set_item_data\n");
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
    bool _out = TextEmoticonsCore__EmojiProxyModel_SetItemData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool k_textemoticonscore__emojiproxymodel_super_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_textemoticonscore__emojiproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_textemoticonscore__emojiproxymodel_set_item_data\n");
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
    bool _out = TextEmoticonsCore__EmojiProxyModel_SuperSetItemData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void k_textemoticonscore__emojiproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    TextEmoticonsCore__EmojiProxyModel_OnSetItemData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_clear_item_data(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_ClearItemData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

bool k_textemoticonscore__emojiproxymodel_super_clear_item_data(void* self, void* index) {
    return TextEmoticonsCore__EmojiProxyModel_SuperClearItemData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index);
}

void k_textemoticonscore__emojiproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnClearItemData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_CanDropMimeData((TextEmoticonsCore__EmojiProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_textemoticonscore__emojiproxymodel_super_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return TextEmoticonsCore__EmojiProxyModel_SuperCanDropMimeData((TextEmoticonsCore__EmojiProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_textemoticonscore__emojiproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnCanDropMimeData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_supported_drag_actions(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SupportedDragActions((TextEmoticonsCore__EmojiProxyModel*)self);
}

int32_t k_textemoticonscore__emojiproxymodel_super_supported_drag_actions(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSupportedDragActions((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnSupportedDragActions((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_textemoticonscore__emojiproxymodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiProxyModel_RoleNames((TextEmoticonsCore__EmojiProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojiproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojiproxymodel_role_names\n");
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

libqt_map /* of int to char* */ k_textemoticonscore__emojiproxymodel_super_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = TextEmoticonsCore__EmojiProxyModel_SuperRoleNames((TextEmoticonsCore__EmojiProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojiproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_textemoticonscore__emojiproxymodel_role_names\n");
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

void k_textemoticonscore__emojiproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnRoleNames((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiProxyModel_MoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojiproxymodel_super_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_textemoticonscore__emojiproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnMoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiProxyModel_MoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_textemoticonscore__emojiproxymodel_super_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return TextEmoticonsCore__EmojiProxyModel_SuperMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_textemoticonscore__emojiproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    TextEmoticonsCore__EmojiProxyModel_MultiData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_textemoticonscore__emojiproxymodel_super_multi_data(void* self, void* index, void* roleDataSpan) {
    TextEmoticonsCore__EmojiProxyModel_SuperMultiData((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_textemoticonscore__emojiproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnMultiData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_reset_internal_data(void* self) {
    TextEmoticonsCore__EmojiProxyModel_ResetInternalData((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_reset_internal_data(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperResetInternalData((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_reset_internal_data(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnResetInternalData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_event(void* self, void* event) {
    return TextEmoticonsCore__EmojiProxyModel_Event((TextEmoticonsCore__EmojiProxyModel*)self, (QEvent*)event);
}

bool k_textemoticonscore__emojiproxymodel_super_event(void* self, void* event) {
    return TextEmoticonsCore__EmojiProxyModel_SuperEvent((TextEmoticonsCore__EmojiProxyModel*)self, (QEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnEvent((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__EmojiProxyModel_EventFilter((TextEmoticonsCore__EmojiProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textemoticonscore__emojiproxymodel_super_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__EmojiProxyModel_SuperEventFilter((TextEmoticonsCore__EmojiProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnEventFilter((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_timer_event(void* self, void* event) {
    TextEmoticonsCore__EmojiProxyModel_TimerEvent((TextEmoticonsCore__EmojiProxyModel*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_super_timer_event(void* self, void* event) {
    TextEmoticonsCore__EmojiProxyModel_SuperTimerEvent((TextEmoticonsCore__EmojiProxyModel*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnTimerEvent((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_child_event(void* self, void* event) {
    TextEmoticonsCore__EmojiProxyModel_ChildEvent((TextEmoticonsCore__EmojiProxyModel*)self, (QChildEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_super_child_event(void* self, void* event) {
    TextEmoticonsCore__EmojiProxyModel_SuperChildEvent((TextEmoticonsCore__EmojiProxyModel*)self, (QChildEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnChildEvent((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_custom_event(void* self, void* event) {
    TextEmoticonsCore__EmojiProxyModel_CustomEvent((TextEmoticonsCore__EmojiProxyModel*)self, (QEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_super_custom_event(void* self, void* event) {
    TextEmoticonsCore__EmojiProxyModel_SuperCustomEvent((TextEmoticonsCore__EmojiProxyModel*)self, (QEvent*)event);
}

void k_textemoticonscore__emojiproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnCustomEvent((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_connect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiProxyModel_ConnectNotify((TextEmoticonsCore__EmojiProxyModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojiproxymodel_super_connect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiProxyModel_SuperConnectNotify((TextEmoticonsCore__EmojiProxyModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojiproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnConnectNotify((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_disconnect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiProxyModel_DisconnectNotify((TextEmoticonsCore__EmojiProxyModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojiproxymodel_super_disconnect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiProxyModel_SuperDisconnectNotify((TextEmoticonsCore__EmojiProxyModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojiproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnDisconnectNotify((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_invalidate_filter(void* self) {
    TextEmoticonsCore__EmojiProxyModel_InvalidateFilter((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_invalidate_filter(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperInvalidateFilter((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_invalidate_filter(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnInvalidateFilter((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_invalidate_rows_filter(void* self) {
    TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_invalidate_rows_filter(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperInvalidateRowsFilter((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_invalidate_rows_filter(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnInvalidateRowsFilter((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_invalidate_columns_filter(void* self) {
    TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_invalidate_columns_filter(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperInvalidateColumnsFilter((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_invalidate_columns_filter(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnInvalidateColumnsFilter((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex((TextEmoticonsCore__EmojiProxyModel*)self, row, col, internalPtr);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_create_source_index(void* self, int row, int col, void* internalPtr) {
    return TextEmoticonsCore__EmojiProxyModel_SuperCreateSourceIndex((TextEmoticonsCore__EmojiProxyModel*)self, row, col, internalPtr);
}

void k_textemoticonscore__emojiproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnCreateSourceIndex((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_create_index(void* self, int row, int column) {
    return TextEmoticonsCore__EmojiProxyModel_CreateIndex((TextEmoticonsCore__EmojiProxyModel*)self, row, column);
}

QModelIndex* k_textemoticonscore__emojiproxymodel_super_create_index(void* self, int row, int column) {
    return TextEmoticonsCore__EmojiProxyModel_SuperCreateIndex((TextEmoticonsCore__EmojiProxyModel*)self, row, column);
}

void k_textemoticonscore__emojiproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnCreateIndex((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    TextEmoticonsCore__EmojiProxyModel_EncodeData((TextEmoticonsCore__EmojiProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_textemoticonscore__emojiproxymodel_super_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    TextEmoticonsCore__EmojiProxyModel_SuperEncodeData((TextEmoticonsCore__EmojiProxyModel*)self, indexes, (QDataStream*)stream);
}

void k_textemoticonscore__emojiproxymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnEncodeData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return TextEmoticonsCore__EmojiProxyModel_DecodeData((TextEmoticonsCore__EmojiProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_textemoticonscore__emojiproxymodel_super_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return TextEmoticonsCore__EmojiProxyModel_SuperDecodeData((TextEmoticonsCore__EmojiProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_textemoticonscore__emojiproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnDecodeData((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_BeginInsertRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_super_begin_insert_rows(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnBeginInsertRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_end_insert_rows(void* self) {
    TextEmoticonsCore__EmojiProxyModel_EndInsertRows((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_end_insert_rows(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperEndInsertRows((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_end_insert_rows(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnEndInsertRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_super_begin_remove_rows(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnBeginRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_end_remove_rows(void* self) {
    TextEmoticonsCore__EmojiProxyModel_EndRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_end_remove_rows(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_end_remove_rows(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnEndRemoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return TextEmoticonsCore__EmojiProxyModel_BeginMoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_textemoticonscore__emojiproxymodel_super_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_textemoticonscore__emojiproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnBeginMoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_end_move_rows(void* self) {
    TextEmoticonsCore__EmojiProxyModel_EndMoveRows((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_end_move_rows(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperEndMoveRows((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_end_move_rows(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnEndMoveRows((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_super_begin_insert_columns(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnBeginInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_end_insert_columns(void* self) {
    TextEmoticonsCore__EmojiProxyModel_EndInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_end_insert_columns(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperEndInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_end_insert_columns(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnEndInsertColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_super_begin_remove_columns(void* self, void* parent, int first, int last) {
    TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)parent, first, last);
}

void k_textemoticonscore__emojiproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnBeginRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_end_remove_columns(void* self) {
    TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_end_remove_columns(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_end_remove_columns(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnEndRemoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_textemoticonscore__emojiproxymodel_super_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_textemoticonscore__emojiproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    TextEmoticonsCore__EmojiProxyModel_OnBeginMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_end_move_columns(void* self) {
    TextEmoticonsCore__EmojiProxyModel_EndMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_end_move_columns(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperEndMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_end_move_columns(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnEndMoveColumns((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_begin_reset_model(void* self) {
    TextEmoticonsCore__EmojiProxyModel_BeginResetModel((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_begin_reset_model(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperBeginResetModel((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_begin_reset_model(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnBeginResetModel((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_end_reset_model(void* self) {
    TextEmoticonsCore__EmojiProxyModel_EndResetModel((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_super_end_reset_model(void* self) {
    TextEmoticonsCore__EmojiProxyModel_SuperEndResetModel((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_end_reset_model(void* self, void (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnEndResetModel((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_change_persistent_index(void* self, void* from, void* to) {
    TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_textemoticonscore__emojiproxymodel_super_change_persistent_index(void* self, void* from, void* to) {
    TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndex((TextEmoticonsCore__EmojiProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_textemoticonscore__emojiproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnChangePersistentIndex((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList((TextEmoticonsCore__EmojiProxyModel*)self, from, to);
}

void k_textemoticonscore__emojiproxymodel_super_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndexList((TextEmoticonsCore__EmojiProxyModel*)self, from, to);
}

void k_textemoticonscore__emojiproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)) {
    TextEmoticonsCore__EmojiProxyModel_OnChangePersistentIndexList((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_textemoticonscore__emojiproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiProxyModel_PersistentIndexList((TextEmoticonsCore__EmojiProxyModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_textemoticonscore__emojiproxymodel_super_persistent_index_list(void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiProxyModel_SuperPersistentIndexList((TextEmoticonsCore__EmojiProxyModel*)self);
    return _arr;
}

void k_textemoticonscore__emojiproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnPersistentIndexList((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

QObject* k_textemoticonscore__emojiproxymodel_sender(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_Sender((TextEmoticonsCore__EmojiProxyModel*)self);
}

QObject* k_textemoticonscore__emojiproxymodel_super_sender(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSender((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_sender(void* self, QObject* (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnSender((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_sender_signal_index(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex((TextEmoticonsCore__EmojiProxyModel*)self);
}

int32_t k_textemoticonscore__emojiproxymodel_super_sender_signal_index(void* self) {
    return TextEmoticonsCore__EmojiProxyModel_SuperSenderSignalIndex((TextEmoticonsCore__EmojiProxyModel*)self);
}

void k_textemoticonscore__emojiproxymodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEmoticonsCore__EmojiProxyModel_OnSenderSignalIndex((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojiproxymodel_receivers(void* self, const char* signal) {
    return TextEmoticonsCore__EmojiProxyModel_Receivers((TextEmoticonsCore__EmojiProxyModel*)self, signal);
}

int32_t k_textemoticonscore__emojiproxymodel_super_receivers(void* self, const char* signal) {
    return TextEmoticonsCore__EmojiProxyModel_SuperReceivers((TextEmoticonsCore__EmojiProxyModel*)self, signal);
}

void k_textemoticonscore__emojiproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEmoticonsCore__EmojiProxyModel_OnReceivers((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojiproxymodel_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsCore__EmojiProxyModel_IsSignalConnected((TextEmoticonsCore__EmojiProxyModel*)self, (QMetaMethod*)signal);
}

bool k_textemoticonscore__emojiproxymodel_super_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsCore__EmojiProxyModel_SuperIsSignalConnected((TextEmoticonsCore__EmojiProxyModel*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojiproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiProxyModel_OnIsSignalConnected((TextEmoticonsCore__EmojiProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojiproxymodel_delete(void* self) {
    TextEmoticonsCore__EmojiProxyModel_Delete((TextEmoticonsCore__EmojiProxyModel*)(self));
}
