#pragma once
#ifndef SRC_QT6C_LIBQSTRINGLISTMODEL_H
#define SRC_QT6C_LIBQSTRINGLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstringlistmodel.html

/// q_stringlistmodel_new constructs a new QStringListModel object.
///
QStringListModel* q_stringlistmodel_new();

/// q_stringlistmodel_new2 constructs a new QStringListModel object.
///
/// @param strings const char**
QStringListModel* q_stringlistmodel_new2(const char* strings[static 1]);

/// q_stringlistmodel_new3 constructs a new QStringListModel object.
///
/// @param parent QObject*
QStringListModel* q_stringlistmodel_new3(void* parent);

/// q_stringlistmodel_new4 constructs a new QStringListModel object.
///
/// @param strings const char**
/// @param parent QObject*
QStringListModel* q_stringlistmodel_new4(const char* strings[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStringListModel*
const QMetaObject* q_stringlistmodel_meta_object(void* self);

/// @param self QStringListModel*
/// @param param1 const char*
void* q_stringlistmodel_metacast(void* self, const char* param1);

/// @param self QStringListModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_stringlistmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback int32_t func(QStringListModel* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_stringlistmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QStringListModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_stringlistmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_stringlistmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#rowCount)
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
int32_t q_stringlistmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback int32_t func(QStringListModel* self, QModelIndex* parent)
void q_stringlistmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
int32_t q_stringlistmodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#sibling)
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_stringlistmodel_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback QModelIndex* func(QStringListModel* self, int row, int column, QModelIndex* idx)
void q_stringlistmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_stringlistmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#data)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_stringlistmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback QVariant* func(QStringListModel* self, QModelIndex* index, int role)
void q_stringlistmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#data)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_stringlistmodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#setData)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_stringlistmodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* index, QVariant* value, int role)
void q_stringlistmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#setData)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_stringlistmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#clearItemData)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
bool q_stringlistmodel_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* index)
void q_stringlistmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#clearItemData)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param index QModelIndex*
bool q_stringlistmodel_qbase_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#flags)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_stringlistmodel_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback int32_t func(QStringListModel* self, QModelIndex* index)
void q_stringlistmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#flags)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_stringlistmodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#insertRows)
///
/// @param self QStringListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_insert_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, int row, int count, QModelIndex* parent)
void q_stringlistmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#removeRows)
///
/// @param self QStringListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_remove_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, int row, int count, QModelIndex* parent)
void q_stringlistmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#moveRows)
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_stringlistmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#moveRows)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
void q_stringlistmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#moveRows)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_stringlistmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#itemData)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_stringlistmodel_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QStringListModel* self, QModelIndex* index)
void q_stringlistmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#itemData)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_stringlistmodel_qbase_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#setItemData)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_stringlistmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
void q_stringlistmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_stringlistmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#sort)
///
/// @param self QStringListModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_stringlistmodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, int column, enum Qt__SortOrder order)
void q_stringlistmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#sort)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_stringlistmodel_qbase_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#stringList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringListModel*
const char** q_stringlistmodel_string_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#setStringList)
///
/// @param self QStringListModel*
/// @param strings const char**
void q_stringlistmodel_set_string_list(void* self, const char* strings[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#supportedDropActions)
///
/// @param self QStringListModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_stringlistmodel_supported_drop_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback int32_t func()
void q_stringlistmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QStringListModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_stringlistmodel_qbase_supported_drop_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_stringlistmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_stringlistmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
bool q_stringlistmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QStringListModel*
/// @param child QModelIndex*
QModelIndex* q_stringlistmodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback QModelIndex* func(QStringListModel* self, QModelIndex* child)
void q_stringlistmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param child QModelIndex*
QModelIndex* q_stringlistmodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
int32_t q_stringlistmodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback int32_t func(QStringListModel* self, QModelIndex* parent)
void q_stringlistmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
int32_t q_stringlistmodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
bool q_stringlistmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* parent)
void q_stringlistmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QStringListModel*
/// @param row int
bool q_stringlistmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QStringListModel*
/// @param column int
bool q_stringlistmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QStringListModel*
/// @param row int
bool q_stringlistmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QStringListModel*
/// @param column int
bool q_stringlistmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_stringlistmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_stringlistmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
bool q_stringlistmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStringListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void q_stringlistmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
void q_stringlistmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QStringListModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void q_stringlistmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, enum Qt__Orientation orientation, int first, int last)
void q_stringlistmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStringListModel*
void q_stringlistmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self)
void q_stringlistmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStringListModel*
void q_stringlistmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self)
void q_stringlistmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_stringlistmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QStringListModel*
/// @param row int
/// @param parent QModelIndex*
bool q_stringlistmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QStringListModel*
/// @param column int
/// @param parent QModelIndex*
bool q_stringlistmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QStringListModel*
/// @param row int
/// @param parent QModelIndex*
bool q_stringlistmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QStringListModel*
/// @param column int
/// @param parent QModelIndex*
bool q_stringlistmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool q_stringlistmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStringListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_stringlistmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void q_stringlistmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStringListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_stringlistmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QPersistentModelIndex** parents)
void q_stringlistmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStringListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_stringlistmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_stringlistmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStringListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_stringlistmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QPersistentModelIndex** parents)
void q_stringlistmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStringListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_stringlistmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_stringlistmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringListModel*
const char* q_stringlistmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStringListModel*
/// @param name char*
void q_stringlistmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStringListModel*
bool q_stringlistmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStringListModel*
bool q_stringlistmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStringListModel*
bool q_stringlistmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStringListModel*
bool q_stringlistmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStringListModel*
/// @param b bool
bool q_stringlistmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStringListModel*
QThread* q_stringlistmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStringListModel*
/// @param thread QThread*
bool q_stringlistmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStringListModel*
/// @param interval int
int32_t q_stringlistmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStringListModel*
/// @param id int
void q_stringlistmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStringListModel*
/// @param id enum Qt__TimerId
void q_stringlistmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStringListModel*
libqt_list /* of QObject* */ q_stringlistmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStringListModel*
/// @param parent QObject*
void q_stringlistmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStringListModel*
/// @param filterObj QObject*
void q_stringlistmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStringListModel*
/// @param obj QObject*
void q_stringlistmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_stringlistmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStringListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_stringlistmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_stringlistmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_stringlistmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStringListModel*
void q_stringlistmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStringListModel*
void q_stringlistmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStringListModel*
/// @param name const char*
/// @param value QVariant*
bool q_stringlistmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStringListModel*
/// @param name const char*
QVariant* q_stringlistmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringListModel*
const char** q_stringlistmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStringListModel*
QBindingStorage* q_stringlistmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStringListModel*
const QBindingStorage* q_stringlistmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStringListModel*
void q_stringlistmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self)
void q_stringlistmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStringListModel*
/// @param classname const char*
bool q_stringlistmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStringListModel*
void q_stringlistmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStringListModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_stringlistmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStringListModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_stringlistmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_stringlistmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStringListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_stringlistmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStringListModel*
/// @param param1 QObject*
void q_stringlistmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QObject* param1)
void q_stringlistmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_stringlistmodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_stringlistmodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QModelIndex* func(QStringListModel* self, int row, int column, QModelIndex* parent)
void q_stringlistmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_stringlistmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_stringlistmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_stringlistmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_stringlistmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QVariant* func(QStringListModel* self, int section, enum Qt__Orientation orientation, int role)
void q_stringlistmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_stringlistmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_stringlistmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
void q_stringlistmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
const char** q_stringlistmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
const char** q_stringlistmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback const char** func()
void q_stringlistmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_stringlistmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_stringlistmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QMimeData* func(QStringListModel* self, QModelIndex** indexes)
void q_stringlistmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_stringlistmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_stringlistmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_stringlistmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_stringlistmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback int32_t func()
void q_stringlistmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, int column, int count, QModelIndex* parent)
void q_stringlistmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, int column, int count, QModelIndex* parent)
void q_stringlistmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_stringlistmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_stringlistmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
void q_stringlistmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
void q_stringlistmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
void q_stringlistmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent)
void q_stringlistmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
bool q_stringlistmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
bool q_stringlistmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* parent)
void q_stringlistmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param index QModelIndex*
QModelIndex* q_stringlistmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param index QModelIndex*
QModelIndex* q_stringlistmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QModelIndex* func(QStringListModel* self, QModelIndex* index)
void q_stringlistmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_stringlistmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_stringlistmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QModelIndex** func(QStringListModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
void q_stringlistmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param index QModelIndex*
QSize* q_stringlistmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param index QModelIndex*
QSize* q_stringlistmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QSize* func(QStringListModel* self, QModelIndex* index)
void q_stringlistmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
libqt_map /* of int to char* */ q_stringlistmodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
libqt_map /* of int to char* */ q_stringlistmodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback libqt_map /* of int to char* */ func()
void q_stringlistmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_stringlistmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_stringlistmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
void q_stringlistmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
bool q_stringlistmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
bool q_stringlistmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func()
void q_stringlistmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param event QEvent*
bool q_stringlistmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param event QEvent*
bool q_stringlistmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QEvent* event)
void q_stringlistmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_stringlistmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_stringlistmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QObject* watched, QEvent* event)
void q_stringlistmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param event QTimerEvent*
void q_stringlistmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param event QTimerEvent*
void q_stringlistmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QTimerEvent* event)
void q_stringlistmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param event QChildEvent*
void q_stringlistmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param event QChildEvent*
void q_stringlistmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QChildEvent* event)
void q_stringlistmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param event QEvent*
void q_stringlistmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param event QEvent*
void q_stringlistmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QEvent* event)
void q_stringlistmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param signal QMetaMethod*
void q_stringlistmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param signal QMetaMethod*
void q_stringlistmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QMetaMethod* signal)
void q_stringlistmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param signal QMetaMethod*
void q_stringlistmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param signal QMetaMethod*
void q_stringlistmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QMetaMethod* signal)
void q_stringlistmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
QModelIndex* q_stringlistmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
QModelIndex* q_stringlistmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QModelIndex* func(QStringListModel* self, int row, int column)
void q_stringlistmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_stringlistmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_stringlistmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex** indexes, QDataStream* stream)
void q_stringlistmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_stringlistmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_stringlistmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
void q_stringlistmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_stringlistmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_stringlistmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
void q_stringlistmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_stringlistmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_stringlistmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_stringlistmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
void q_stringlistmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
void q_stringlistmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func()
void q_stringlistmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_stringlistmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_stringlistmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* from, QModelIndex* to)
void q_stringlistmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_stringlistmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_stringlistmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex** from, QModelIndex** to)
void q_stringlistmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
libqt_list /* of QModelIndex* */ q_stringlistmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
libqt_list /* of QModelIndex* */ q_stringlistmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QModelIndex** func()
void q_stringlistmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
QObject* q_stringlistmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
QObject* q_stringlistmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback QObject* func()
void q_stringlistmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
int32_t q_stringlistmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
int32_t q_stringlistmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback int32_t func()
void q_stringlistmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param signal const char*
int32_t q_stringlistmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param signal const char*
int32_t q_stringlistmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback int32_t func(QStringListModel* self, const char* signal)
void q_stringlistmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStringListModel*
/// @param signal QMetaMethod*
bool q_stringlistmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStringListModel*
/// @param signal QMetaMethod*
bool q_stringlistmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStringListModel*
/// @param callback bool func(QStringListModel* self, QMetaMethod* signal)
void q_stringlistmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* parent, int first, int last)
void q_stringlistmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self)
void q_stringlistmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self)
void q_stringlistmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_stringlistmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_stringlistmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_stringlistmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_stringlistmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStringListModel*
/// @param callback void func(QStringListModel* self, const char* objectName)
void q_stringlistmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstringlistmodel.html#dtor.QStringListModel)
///
/// Delete this object from C++ memory.
///
/// @param self QStringListModel*
void q_stringlistmodel_delete(void* self);

#endif
