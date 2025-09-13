#pragma once
#ifndef SRCQT6C_LIBQCONCATENATETABLESPROXYMODEL_H
#define SRCQT6C_LIBQCONCATENATETABLESPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html

/// q_concatenatetablesproxymodel_new constructs a new QConcatenateTablesProxyModel object.
///
QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new();

/// q_concatenatetablesproxymodel_new2 constructs a new QConcatenateTablesProxyModel object.
///
/// @param parent QObject*
QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QConcatenateTablesProxyModel*
const QMetaObject* q_concatenatetablesproxymodel_meta_object(void* self);

/// @param self QConcatenateTablesProxyModel*
/// @param param1 const char*
void* q_concatenatetablesproxymodel_metacast(void* self, const char* param1);

/// @param self QConcatenateTablesProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_concatenatetablesproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func(QConcatenateTablesProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_concatenatetablesproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_concatenatetablesproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_concatenatetablesproxymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#sourceModels)
///
/// @param self QConcatenateTablesProxyModel*
libqt_list /* of QAbstractItemModel* */ q_concatenatetablesproxymodel_source_models(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#addSourceModel)
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceModel QAbstractItemModel*
void q_concatenatetablesproxymodel_add_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#removeSourceModel)
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceModel QAbstractItemModel*
void q_concatenatetablesproxymodel_remove_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mapFromSource)
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceIndex QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mapToSource)
///
/// @param self QConcatenateTablesProxyModel*
/// @param proxyIndex QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#data)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_concatenatetablesproxymodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QVariant* func(QConcatenateTablesProxyModel* self, QModelIndex* index, int role)
void q_concatenatetablesproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_concatenatetablesproxymodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setData)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_concatenatetablesproxymodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role)
void q_concatenatetablesproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setData)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_concatenatetablesproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#itemData)
///
/// @param self QConcatenateTablesProxyModel*
/// @param proxyIndex QModelIndex*
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_item_data(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex)
void q_concatenatetablesproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#itemData)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param proxyIndex QModelIndex*
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_qbase_item_data(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setItemData)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_concatenatetablesproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
void q_concatenatetablesproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_concatenatetablesproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#flags)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_concatenatetablesproxymodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func(QConcatenateTablesProxyModel* self, QModelIndex* index)
void q_concatenatetablesproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_concatenatetablesproxymodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#index)
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QModelIndex* func(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#parent)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QModelIndex* func(QConcatenateTablesProxyModel* self, QModelIndex* index)
void q_concatenatetablesproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_qbase_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#rowCount)
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
int32_t q_concatenatetablesproxymodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func(QConcatenateTablesProxyModel* self, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
int32_t q_concatenatetablesproxymodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#headerData)
///
/// @param self QConcatenateTablesProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_concatenatetablesproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QVariant* func(QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, int role)
void q_concatenatetablesproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_concatenatetablesproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#columnCount)
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
int32_t q_concatenatetablesproxymodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func(QConcatenateTablesProxyModel* self, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
int32_t q_concatenatetablesproxymodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QConcatenateTablesProxyModel*
const char** q_concatenatetablesproxymodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback const char** func()
void q_concatenatetablesproxymodel_on_mime_types(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
const char** q_concatenatetablesproxymodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeData)
///
/// @param self QConcatenateTablesProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_concatenatetablesproxymodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QMimeData* func(QConcatenateTablesProxyModel* self, QModelIndex** indexes)
void q_concatenatetablesproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_concatenatetablesproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#canDropMimeData)
///
/// @param self QConcatenateTablesProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#canDropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#canDropMimeData)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dropMimeData)
///
/// @param self QConcatenateTablesProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#span)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
QSize* q_concatenatetablesproxymodel_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#span)
///
/// Allows for overriding the related default method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QSize* func(QConcatenateTablesProxyModel* self, QModelIndex* index)
void q_concatenatetablesproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#span)
///
/// Base class method implementation
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
QSize* q_concatenatetablesproxymodel_qbase_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_concatenatetablesproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_concatenatetablesproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
bool q_concatenatetablesproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
bool q_concatenatetablesproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
bool q_concatenatetablesproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
bool q_concatenatetablesproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
bool q_concatenatetablesproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_concatenatetablesproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_concatenatetablesproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
bool q_concatenatetablesproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void q_concatenatetablesproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
void q_concatenatetablesproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, enum Qt__Orientation orientation, int first, int last)
void q_concatenatetablesproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self)
void q_concatenatetablesproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self)
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool q_concatenatetablesproxymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_concatenatetablesproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void q_concatenatetablesproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_concatenatetablesproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QPersistentModelIndex** parents)
void q_concatenatetablesproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_concatenatetablesproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_concatenatetablesproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_concatenatetablesproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QPersistentModelIndex** parents)
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_concatenatetablesproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QConcatenateTablesProxyModel*
const char* q_concatenatetablesproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QConcatenateTablesProxyModel*
/// @param name char*
void q_concatenatetablesproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QConcatenateTablesProxyModel*
bool q_concatenatetablesproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QConcatenateTablesProxyModel*
bool q_concatenatetablesproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QConcatenateTablesProxyModel*
bool q_concatenatetablesproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QConcatenateTablesProxyModel*
bool q_concatenatetablesproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QConcatenateTablesProxyModel*
/// @param b bool
bool q_concatenatetablesproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QConcatenateTablesProxyModel*
QThread* q_concatenatetablesproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QConcatenateTablesProxyModel*
/// @param thread QThread*
bool q_concatenatetablesproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QConcatenateTablesProxyModel*
/// @param interval int
int32_t q_concatenatetablesproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QConcatenateTablesProxyModel*
/// @param id int
void q_concatenatetablesproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QConcatenateTablesProxyModel*
/// @param id enum Qt__TimerId
void q_concatenatetablesproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QConcatenateTablesProxyModel*
libqt_list /* of QObject* */ q_concatenatetablesproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QObject*
void q_concatenatetablesproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QConcatenateTablesProxyModel*
/// @param filterObj QObject*
void q_concatenatetablesproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QConcatenateTablesProxyModel*
/// @param obj QObject*
void q_concatenatetablesproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_concatenatetablesproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QConcatenateTablesProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_concatenatetablesproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_concatenatetablesproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_concatenatetablesproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QConcatenateTablesProxyModel*
/// @param name const char*
/// @param value QVariant*
bool q_concatenatetablesproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QConcatenateTablesProxyModel*
/// @param name const char*
QVariant* q_concatenatetablesproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QConcatenateTablesProxyModel*
const char** q_concatenatetablesproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QConcatenateTablesProxyModel*
QBindingStorage* q_concatenatetablesproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QConcatenateTablesProxyModel*
const QBindingStorage* q_concatenatetablesproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self)
void q_concatenatetablesproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QConcatenateTablesProxyModel*
/// @param classname const char*
bool q_concatenatetablesproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QConcatenateTablesProxyModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_concatenatetablesproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QConcatenateTablesProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_concatenatetablesproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_concatenatetablesproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QConcatenateTablesProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_concatenatetablesproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QConcatenateTablesProxyModel*
/// @param param1 QObject*
void q_concatenatetablesproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QObject* param1)
void q_concatenatetablesproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QModelIndex* func(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx)
void q_concatenatetablesproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_concatenatetablesproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_concatenatetablesproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
void q_concatenatetablesproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
bool q_concatenatetablesproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
bool q_concatenatetablesproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* index)
void q_concatenatetablesproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_concatenatetablesproxymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_concatenatetablesproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func()
void q_concatenatetablesproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_concatenatetablesproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_concatenatetablesproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func()
void q_concatenatetablesproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_concatenatetablesproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_concatenatetablesproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
void q_concatenatetablesproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_concatenatetablesproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_concatenatetablesproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
void q_concatenatetablesproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
void q_concatenatetablesproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
void q_concatenatetablesproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
bool q_concatenatetablesproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* parent)
void q_concatenatetablesproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_concatenatetablesproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_concatenatetablesproxymodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, int column, enum Qt__SortOrder order)
void q_concatenatetablesproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
QModelIndex* q_concatenatetablesproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QModelIndex* func(QConcatenateTablesProxyModel* self, QModelIndex* index)
void q_concatenatetablesproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QModelIndex** func(QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
void q_concatenatetablesproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback libqt_map /* of int to char* */ func()
void q_concatenatetablesproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_concatenatetablesproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_concatenatetablesproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
void q_concatenatetablesproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
bool q_concatenatetablesproxymodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
bool q_concatenatetablesproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func()
void q_concatenatetablesproxymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QEvent*
bool q_concatenatetablesproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QEvent*
bool q_concatenatetablesproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QEvent* event)
void q_concatenatetablesproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_concatenatetablesproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_concatenatetablesproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event)
void q_concatenatetablesproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QTimerEvent*
void q_concatenatetablesproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QTimerEvent*
void q_concatenatetablesproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QTimerEvent* event)
void q_concatenatetablesproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QChildEvent*
void q_concatenatetablesproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QChildEvent*
void q_concatenatetablesproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QChildEvent* event)
void q_concatenatetablesproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QEvent*
void q_concatenatetablesproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param event QEvent*
void q_concatenatetablesproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QEvent* event)
void q_concatenatetablesproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal QMetaMethod*
void q_concatenatetablesproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal QMetaMethod*
void q_concatenatetablesproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QMetaMethod* signal)
void q_concatenatetablesproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal QMetaMethod*
void q_concatenatetablesproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal QMetaMethod*
void q_concatenatetablesproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QMetaMethod* signal)
void q_concatenatetablesproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
QModelIndex* q_concatenatetablesproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
QModelIndex* q_concatenatetablesproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QModelIndex* func(QConcatenateTablesProxyModel* self, int row, int column)
void q_concatenatetablesproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_concatenatetablesproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_concatenatetablesproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex** indexes, QDataStream* stream)
void q_concatenatetablesproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_concatenatetablesproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_concatenatetablesproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
void q_concatenatetablesproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_concatenatetablesproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_concatenatetablesproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
void q_concatenatetablesproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_concatenatetablesproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_concatenatetablesproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_concatenatetablesproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
void q_concatenatetablesproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func()
void q_concatenatetablesproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_concatenatetablesproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_concatenatetablesproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to)
void q_concatenatetablesproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_concatenatetablesproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_concatenatetablesproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex** from, QModelIndex** to)
void q_concatenatetablesproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QModelIndex** func()
void q_concatenatetablesproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
QObject* q_concatenatetablesproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
QObject* q_concatenatetablesproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback QObject* func()
void q_concatenatetablesproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
int32_t q_concatenatetablesproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
int32_t q_concatenatetablesproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func()
void q_concatenatetablesproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal const char*
int32_t q_concatenatetablesproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal const char*
int32_t q_concatenatetablesproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback int32_t func(QConcatenateTablesProxyModel* self, const char* signal)
void q_concatenatetablesproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal QMetaMethod*
bool q_concatenatetablesproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param signal QMetaMethod*
bool q_concatenatetablesproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback bool func(QConcatenateTablesProxyModel* self, QMetaMethod* signal)
void q_concatenatetablesproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last)
void q_concatenatetablesproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self)
void q_concatenatetablesproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self)
void q_concatenatetablesproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_concatenatetablesproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_concatenatetablesproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_concatenatetablesproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_concatenatetablesproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QConcatenateTablesProxyModel*
/// @param callback void func(QConcatenateTablesProxyModel* self, const char* objectName)
void q_concatenatetablesproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dtor.QConcatenateTablesProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self QConcatenateTablesProxyModel*
void q_concatenatetablesproxymodel_delete(void* self);

#endif
