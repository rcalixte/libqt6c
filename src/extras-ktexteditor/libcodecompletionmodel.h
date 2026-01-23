#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCODECOMPLETIONMODEL_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCODECOMPLETIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html)

/// k_texteditor__codecompletionmodel_new constructs a new KTextEditor::CodeCompletionModel object.
///
/// @param parent QObject*
///
KTextEditor__CodeCompletionModel* k_texteditor__codecompletionmodel_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__CodeCompletionModel*
///
const QMetaObject* k_texteditor__codecompletionmodel_meta_object(void* self);

/// @param self KTextEditor__CodeCompletionModel*
/// @param param1 const char*
///
void* k_texteditor__codecompletionmodel_metacast(void* self, const char* param1);

/// @param self KTextEditor__CodeCompletionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__codecompletionmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func(KTextEditor__CodeCompletionModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texteditor__codecompletionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__codecompletionmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__codecompletionmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#setRowCount)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param rowCount int
///
void k_texteditor__codecompletionmodel_set_row_count(void* self, int rowCount);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#completionInvoked)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
/// @param invocationType enum KTextEditor__CodeCompletionModel__InvocationType
///
void k_texteditor__codecompletionmodel_completion_invoked(void* self, void* view, void* range, int32_t invocationType);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#completionInvoked)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, KTextEditor__Range* range, enum KTextEditor__CodeCompletionModel__InvocationType invocationType)
///
void k_texteditor__codecompletionmodel_on_completion_invoked(void* self, void (*callback)(void*, void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#completionInvoked)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
/// @param invocationType enum KTextEditor__CodeCompletionModel__InvocationType
///
void k_texteditor__codecompletionmodel_qbase_completion_invoked(void* self, void* view, void* range, int32_t invocationType);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#executeCompletionItem)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param view KTextEditor__View*
/// @param word KTextEditor__Range*
/// @param index QModelIndex*
///
void k_texteditor__codecompletionmodel_execute_completion_item(void* self, void* view, void* word, void* index);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#executeCompletionItem)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, KTextEditor__View* view, KTextEditor__Range* word, QModelIndex* index)
///
void k_texteditor__codecompletionmodel_on_execute_completion_item(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#executeCompletionItem)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param view KTextEditor__View*
/// @param word KTextEditor__Range*
/// @param index QModelIndex*
///
void k_texteditor__codecompletionmodel_qbase_execute_completion_item(void* self, void* view, void* word, void* index);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#columnCount)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
int32_t k_texteditor__codecompletionmodel_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
int32_t k_texteditor__codecompletionmodel_qbase_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#index)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QModelIndex* func(KTextEditor__CodeCompletionModel* self, int row, int column, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#index)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#itemData)
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
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_texteditor__codecompletionmodel_item_data(void* self, void* index);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback libqt_map of int to QVariant* func(KTextEditor__CodeCompletionModel* self, QModelIndex* index)
///
void k_texteditor__codecompletionmodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#itemData)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_texteditor__codecompletionmodel_qbase_item_data(void* self, void* index);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#parent)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_parent(void* self, void* index);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QModelIndex* func(KTextEditor__CodeCompletionModel* self, QModelIndex* index)
///
void k_texteditor__codecompletionmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#parent)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_qbase_parent(void* self, void* index);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#rowCount)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
int32_t k_texteditor__codecompletionmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
int32_t k_texteditor__codecompletionmodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#hasGroups)
///
/// @param self KTextEditor__CodeCompletionModel*
///
bool k_texteditor__codecompletionmodel_has_groups(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#waitForReset)
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_wait_for_reset(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#waitForReset)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self)
///
void k_texteditor__codecompletionmodel_on_wait_for_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#hasGroupsChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param model KTextEditor__CodeCompletionModel*
/// @param hasGroups bool
///
void k_texteditor__codecompletionmodel_has_groups_changed(void* self, void* model, bool hasGroups);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#hasGroupsChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, KTextEditor__CodeCompletionModel* model, bool hasGroups)
///
void k_texteditor__codecompletionmodel_on_has_groups_changed(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#setHasGroups)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param hasGroups bool
///
void k_texteditor__codecompletionmodel_set_has_groups(void* self, bool hasGroups);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#setHasGroups)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, bool hasGroups)
///
void k_texteditor__codecompletionmodel_on_set_has_groups(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodel.html#setHasGroups)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param hasGroups bool
///
void k_texteditor__codecompletionmodel_qbase_set_has_groups(void* self, bool hasGroups);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__codecompletionmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__codecompletionmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
///
bool k_texteditor__codecompletionmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
///
bool k_texteditor__codecompletionmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
///
bool k_texteditor__codecompletionmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
///
bool k_texteditor__codecompletionmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
///
bool k_texteditor__codecompletionmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_texteditor__codecompletionmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_texteditor__codecompletionmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
bool k_texteditor__codecompletionmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_texteditor__codecompletionmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_texteditor__codecompletionmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_texteditor__codecompletionmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self)
///
void k_texteditor__codecompletionmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self)
///
void k_texteditor__codecompletionmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_texteditor__codecompletionmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_texteditor__codecompletionmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* )
///
void k_texteditor__codecompletionmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_texteditor__codecompletionmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QPersistentModelIndex** parents)
///
void k_texteditor__codecompletionmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_texteditor__codecompletionmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_texteditor__codecompletionmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_texteditor__codecompletionmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QPersistentModelIndex** parents)
///
void k_texteditor__codecompletionmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_texteditor__codecompletionmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_texteditor__codecompletionmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__CodeCompletionModel*
///
const char* k_texteditor__codecompletionmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param name char*
///
void k_texteditor__codecompletionmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__CodeCompletionModel*
///
bool k_texteditor__codecompletionmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__CodeCompletionModel*
///
bool k_texteditor__codecompletionmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__CodeCompletionModel*
///
bool k_texteditor__codecompletionmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__CodeCompletionModel*
///
bool k_texteditor__codecompletionmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param b bool
///
bool k_texteditor__codecompletionmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__CodeCompletionModel*
///
QThread* k_texteditor__codecompletionmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param thread QThread*
///
bool k_texteditor__codecompletionmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param interval int
///
int32_t k_texteditor__codecompletionmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__codecompletionmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param id int
///
void k_texteditor__codecompletionmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param id enum Qt__TimerId
///
void k_texteditor__codecompletionmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__codecompletionmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QObject*
///
void k_texteditor__codecompletionmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param filterObj QObject*
///
void k_texteditor__codecompletionmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param obj QObject*
///
void k_texteditor__codecompletionmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__codecompletionmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__codecompletionmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__codecompletionmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__codecompletionmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__codecompletionmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param name const char*
///
QVariant* k_texteditor__codecompletionmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__CodeCompletionModel*
///
const char** k_texteditor__codecompletionmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__CodeCompletionModel*
///
QBindingStorage* k_texteditor__codecompletionmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__CodeCompletionModel*
///
const QBindingStorage* k_texteditor__codecompletionmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self)
///
void k_texteditor__codecompletionmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param classname const char*
///
bool k_texteditor__codecompletionmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_texteditor__codecompletionmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__codecompletionmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__codecompletionmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__codecompletionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__codecompletionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param param1 QObject*
///
void k_texteditor__codecompletionmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QObject* param1)
///
void k_texteditor__codecompletionmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QModelIndex* func(KTextEditor__CodeCompletionModel* self, int row, int column, QModelIndex* idx)
///
void k_texteditor__codecompletionmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_texteditor__codecompletionmodel_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_texteditor__codecompletionmodel_qbase_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QVariant* func(KTextEditor__CodeCompletionModel* self, QModelIndex* index, int role)
///
void k_texteditor__codecompletionmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_texteditor__codecompletionmodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_texteditor__codecompletionmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_texteditor__codecompletionmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_texteditor__codecompletionmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_texteditor__codecompletionmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QVariant* func(KTextEditor__CodeCompletionModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_texteditor__codecompletionmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_texteditor__codecompletionmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_texteditor__codecompletionmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_texteditor__codecompletionmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_texteditor__codecompletionmodel_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_texteditor__codecompletionmodel_qbase_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* index, libqt_map of int to QVariant*)
///
void k_texteditor__codecompletionmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
bool k_texteditor__codecompletionmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* index)
///
void k_texteditor__codecompletionmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
const char** k_texteditor__codecompletionmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
const char** k_texteditor__codecompletionmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback const char** func()
///
void k_texteditor__codecompletionmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_texteditor__codecompletionmodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_texteditor__codecompletionmodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QMimeData* func(KTextEditor__CodeCompletionModel* self, QModelIndex** indexes)
///
void k_texteditor__codecompletionmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_texteditor__codecompletionmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_texteditor__codecompletionmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func()
///
void k_texteditor__codecompletionmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_texteditor__codecompletionmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_texteditor__codecompletionmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func()
///
void k_texteditor__codecompletionmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, int row, int count, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, int column, int count, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, int row, int count, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, int column, int count, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_texteditor__codecompletionmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_texteditor__codecompletionmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_texteditor__codecompletionmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_texteditor__codecompletionmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_texteditor__codecompletionmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_texteditor__codecompletionmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
void k_texteditor__codecompletionmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
void k_texteditor__codecompletionmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
///
bool k_texteditor__codecompletionmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent)
///
void k_texteditor__codecompletionmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_texteditor__codecompletionmodel_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_texteditor__codecompletionmodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func(KTextEditor__CodeCompletionModel* self, QModelIndex* index)
///
void k_texteditor__codecompletionmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_texteditor__codecompletionmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_texteditor__codecompletionmodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, int column, enum Qt__SortOrder order)
///
void k_texteditor__codecompletionmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
QModelIndex* k_texteditor__codecompletionmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QModelIndex* func(KTextEditor__CodeCompletionModel* self, QModelIndex* index)
///
void k_texteditor__codecompletionmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_texteditor__codecompletionmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_texteditor__codecompletionmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QModelIndex** func(KTextEditor__CodeCompletionModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_texteditor__codecompletionmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
QSize* k_texteditor__codecompletionmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
///
QSize* k_texteditor__codecompletionmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QSize* func(KTextEditor__CodeCompletionModel* self, QModelIndex* index)
///
void k_texteditor__codecompletionmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
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
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_texteditor__codecompletionmodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
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
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_texteditor__codecompletionmodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback libqt_map of int to char* func()
///
void k_texteditor__codecompletionmodel_on_role_names(void* self, libqt_map (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_texteditor__codecompletionmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_texteditor__codecompletionmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_texteditor__codecompletionmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
bool k_texteditor__codecompletionmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
bool k_texteditor__codecompletionmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func()
///
void k_texteditor__codecompletionmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QEvent*
///
bool k_texteditor__codecompletionmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QEvent*
///
bool k_texteditor__codecompletionmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QEvent* event)
///
void k_texteditor__codecompletionmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__codecompletionmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__codecompletionmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QObject* watched, QEvent* event)
///
void k_texteditor__codecompletionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QTimerEvent*
///
void k_texteditor__codecompletionmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QTimerEvent*
///
void k_texteditor__codecompletionmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QTimerEvent* event)
///
void k_texteditor__codecompletionmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QChildEvent*
///
void k_texteditor__codecompletionmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QChildEvent*
///
void k_texteditor__codecompletionmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QChildEvent* event)
///
void k_texteditor__codecompletionmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QEvent*
///
void k_texteditor__codecompletionmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param event QEvent*
///
void k_texteditor__codecompletionmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QEvent* event)
///
void k_texteditor__codecompletionmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal QMetaMethod*
///
void k_texteditor__codecompletionmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal QMetaMethod*
///
void k_texteditor__codecompletionmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QMetaMethod* signal)
///
void k_texteditor__codecompletionmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal QMetaMethod*
///
void k_texteditor__codecompletionmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal QMetaMethod*
///
void k_texteditor__codecompletionmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QMetaMethod* signal)
///
void k_texteditor__codecompletionmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
///
QModelIndex* k_texteditor__codecompletionmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
///
QModelIndex* k_texteditor__codecompletionmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QModelIndex* func(KTextEditor__CodeCompletionModel* self, int row, int column)
///
void k_texteditor__codecompletionmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_texteditor__codecompletionmodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_texteditor__codecompletionmodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex** indexes, QDataStream* stream)
///
void k_texteditor__codecompletionmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_texteditor__codecompletionmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_texteditor__codecompletionmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_texteditor__codecompletionmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_texteditor__codecompletionmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_texteditor__codecompletionmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_texteditor__codecompletionmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_texteditor__codecompletionmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_texteditor__codecompletionmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_texteditor__codecompletionmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_texteditor__codecompletionmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func()
///
void k_texteditor__codecompletionmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_texteditor__codecompletionmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_texteditor__codecompletionmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* from, QModelIndex* to)
///
void k_texteditor__codecompletionmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_texteditor__codecompletionmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_texteditor__codecompletionmodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex** from, QModelIndex** to)
///
void k_texteditor__codecompletionmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_texteditor__codecompletionmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_texteditor__codecompletionmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QModelIndex** func()
///
void k_texteditor__codecompletionmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
QObject* k_texteditor__codecompletionmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
QObject* k_texteditor__codecompletionmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback QObject* func()
///
void k_texteditor__codecompletionmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
int32_t k_texteditor__codecompletionmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
///
int32_t k_texteditor__codecompletionmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func()
///
void k_texteditor__codecompletionmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal const char*
///
int32_t k_texteditor__codecompletionmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal const char*
///
int32_t k_texteditor__codecompletionmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback int32_t func(KTextEditor__CodeCompletionModel* self, const char* signal)
///
void k_texteditor__codecompletionmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal QMetaMethod*
///
bool k_texteditor__codecompletionmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param signal QMetaMethod*
///
bool k_texteditor__codecompletionmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback bool func(KTextEditor__CodeCompletionModel* self, QMetaMethod* signal)
///
void k_texteditor__codecompletionmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* parent, int first, int last)
///
void k_texteditor__codecompletionmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self)
///
void k_texteditor__codecompletionmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self)
///
void k_texteditor__codecompletionmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_texteditor__codecompletionmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_texteditor__codecompletionmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_texteditor__codecompletionmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_texteditor__codecompletionmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__CodeCompletionModel*
/// @param callback void func(KTextEditor__CodeCompletionModel* self, const char* objectName)
///
void k_texteditor__codecompletionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__CodeCompletionModel*
///
void k_texteditor__codecompletionmodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/codecompletionmodel.html#public-types)

typedef enum {
    KTEXTEDITOR_CODECOMPLETIONMODEL_COLUMNS_PREFIX = 0,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COLUMNS_ICON = 1,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COLUMNS_SCOPE = 2,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COLUMNS_NAME = 3,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COLUMNS_ARGUMENTS = 4,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COLUMNS_POSTFIX = 5
} KTextEditor__CodeCompletionModel__Columns;

/// [Upstream resources](https://api.kde.org/codecompletionmodel.html#public-types)

typedef enum {
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_NOPROPERTY = 0,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_FIRSTPROPERTY = 1,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_PUBLIC = 1,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_PROTECTED = 2,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_PRIVATE = 4,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_STATIC = 8,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_CONST = 16,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_NAMESPACE = 32,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_CLASS = 64,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_STRUCT = 128,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_UNION = 256,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_FUNCTION = 512,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_VARIABLE = 1024,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_ENUM = 2048,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_TEMPLATE = 4096,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_TYPEALIAS = 8192,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_VIRTUAL = 16384,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_OVERRIDE = 32768,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_INLINE = 65536,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_FRIEND = 131072,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_SIGNAL = 262144,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_SLOT = 524288,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_LOCALSCOPE = 1048576,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_NAMESPACESCOPE = 2097152,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_GLOBALSCOPE = 4194304,
    KTEXTEDITOR_CODECOMPLETIONMODEL_COMPLETIONPROPERTY_LASTPROPERTY = 4194304
} KTextEditor__CodeCompletionModel__CompletionProperty;

/// [Upstream resources](https://api.kde.org/codecompletionmodel.html#public-types)

typedef enum {
    KTEXTEDITOR_CODECOMPLETIONMODEL_HIGHLIGHTMETHOD_NOHIGHLIGHTING = 0,
    KTEXTEDITOR_CODECOMPLETIONMODEL_HIGHLIGHTMETHOD_INTERNALHIGHLIGHTING = 1,
    KTEXTEDITOR_CODECOMPLETIONMODEL_HIGHLIGHTMETHOD_CUSTOMHIGHLIGHTING = 2
} KTextEditor__CodeCompletionModel__HighlightMethod;

/// [Upstream resources](https://api.kde.org/codecompletionmodel.html#public-types)

typedef enum {
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_COMPLETIONROLE = 256,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_SCOPEINDEX = 257,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_MATCHQUALITY = 258,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_SETMATCHCONTEXT = 259,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_HIGHLIGHTINGMETHOD = 260,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_CUSTOMHIGHLIGHT = 261,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_INHERITANCEDEPTH = 262,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_ISEXPANDABLE = 263,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_EXPANDINGWIDGET = 264,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_ITEMSELECTED = 265,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_ARGUMENTHINTDEPTH = 266,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_BESTMATCHESCOUNT = 267,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_ACCESSIBILITYNEXT = 268,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_ACCESSIBILITYPREVIOUS = 269,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_ACCESSIBILITYACCEPT = 270,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_GROUPROLE = 271,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_UNIMPORTANTITEMROLE = 272,
    KTEXTEDITOR_CODECOMPLETIONMODEL_EXTRAITEMDATAROLES_LASTEXTRAITEMDATAROLE = 273
} KTextEditor__CodeCompletionModel__ExtraItemDataRoles;

/// [Upstream resources](https://api.kde.org/codecompletionmodel.html#public-types)

typedef enum {
    KTEXTEDITOR_CODECOMPLETIONMODEL_INVOCATIONTYPE_AUTOMATICINVOCATION = 0,
    KTEXTEDITOR_CODECOMPLETIONMODEL_INVOCATIONTYPE_USERINVOCATION = 1,
    KTEXTEDITOR_CODECOMPLETIONMODEL_INVOCATIONTYPE_MANUALINVOCATION = 2
} KTextEditor__CodeCompletionModel__InvocationType;

#endif
