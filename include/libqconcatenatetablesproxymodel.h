#pragma once
#ifndef SRCQT6C_LIBQCONCATENATETABLESPROXYMODEL_H
#define SRCQT6C_LIBQCONCATENATETABLESPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html

/// q_concatenatetablesproxymodel_new constructs a new QConcatenateTablesProxyModel object.
///
///
QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new();

/// q_concatenatetablesproxymodel_new2 constructs a new QConcatenateTablesProxyModel object.
///
/// ``` QObject* parent ```
QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QConcatenateTablesProxyModel* self ```
const QMetaObject* q_concatenatetablesproxymodel_meta_object(void* self);

/// ``` QConcatenateTablesProxyModel* self, const char* param1 ```
void* q_concatenatetablesproxymodel_metacast(void* self, const char* param1);

/// ``` QConcatenateTablesProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_concatenatetablesproxymodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_concatenatetablesproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_concatenatetablesproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_concatenatetablesproxymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#sourceModels)
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QAbstractItemModel* */ q_concatenatetablesproxymodel_source_models(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#addSourceModel)
///
/// ``` QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel ```
void q_concatenatetablesproxymodel_add_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#removeSourceModel)
///
/// ``` QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel ```
void q_concatenatetablesproxymodel_remove_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mapFromSource)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_concatenatetablesproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mapToSource)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_concatenatetablesproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#data)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, int role ```
QVariant* q_concatenatetablesproxymodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QVariant* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#data)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, int role ```
QVariant* q_concatenatetablesproxymodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setData)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setData)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, QVariant*, int) ```
void q_concatenatetablesproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setData)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#itemData)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex ```
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_item_data(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#itemData)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex ```
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_qbase_item_data(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setItemData)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_concatenatetablesproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_concatenatetablesproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setItemData)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_concatenatetablesproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#flags)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
int64_t q_concatenatetablesproxymodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int64_t (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#flags)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
int64_t q_concatenatetablesproxymodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#index)
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_concatenatetablesproxymodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#index)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_concatenatetablesproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#parent)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#parent)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_qbase_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#rowCount)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#headerData)
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_concatenatetablesproxymodel_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QVariant* (*slot)(QConcatenateTablesProxyModel*, int, enum Qt__Orientation, int) ```
void q_concatenatetablesproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#headerData)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_concatenatetablesproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#columnCount)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeTypes)
///
/// ``` QConcatenateTablesProxyModel* self ```
const char** q_concatenatetablesproxymodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, const char** (*slot)() ```
void q_concatenatetablesproxymodel_on_mime_types(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self ```
const char** q_concatenatetablesproxymodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeData)
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_concatenatetablesproxymodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* (*slot)(QConcatenateTablesProxyModel*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_concatenatetablesproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_concatenatetablesproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#canDropMimeData)
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#canDropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#canDropMimeData)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dropMimeData)
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#span)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QSize* q_concatenatetablesproxymodel_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#span)
///
/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QSize* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#span)
///
/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QSize* q_concatenatetablesproxymodel_qbase_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_concatenatetablesproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_concatenatetablesproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column ```
bool q_concatenatetablesproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row ```
bool q_concatenatetablesproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column ```
bool q_concatenatetablesproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row ```
bool q_concatenatetablesproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column ```
bool q_concatenatetablesproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
bool q_concatenatetablesproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_concatenatetablesproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_concatenatetablesproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_concatenatetablesproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_concatenatetablesproxymodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, int options ```
bool q_concatenatetablesproxymodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_concatenatetablesproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_concatenatetablesproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_concatenatetablesproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_concatenatetablesproxymodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_concatenatetablesproxymodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_concatenatetablesproxymodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_concatenatetablesproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_concatenatetablesproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QConcatenateTablesProxyModel* self ```
const char* q_concatenatetablesproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QConcatenateTablesProxyModel* self, char* name ```
void q_concatenatetablesproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QConcatenateTablesProxyModel* self, bool b ```
bool q_concatenatetablesproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QConcatenateTablesProxyModel* self ```
QThread* q_concatenatetablesproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QConcatenateTablesProxyModel* self, QThread* thread ```
bool q_concatenatetablesproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QConcatenateTablesProxyModel* self, int interval ```
int32_t q_concatenatetablesproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QConcatenateTablesProxyModel* self, int id ```
void q_concatenatetablesproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QConcatenateTablesProxyModel* self, enum Qt__TimerId id ```
void q_concatenatetablesproxymodel_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QObject* */ q_concatenatetablesproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* parent ```
void q_concatenatetablesproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* filterObj ```
void q_concatenatetablesproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* obj ```
void q_concatenatetablesproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_concatenatetablesproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_concatenatetablesproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QConcatenateTablesProxyModel* self, const char* name, QVariant* value ```
bool q_concatenatetablesproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QConcatenateTablesProxyModel* self, const char* name ```
QVariant* q_concatenatetablesproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QConcatenateTablesProxyModel* self ```
const char** q_concatenatetablesproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QConcatenateTablesProxyModel* self ```
QBindingStorage* q_concatenatetablesproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QConcatenateTablesProxyModel* self ```
const QBindingStorage* q_concatenatetablesproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QObject*) ```
void q_concatenatetablesproxymodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QConcatenateTablesProxyModel* self, const char* classname ```
bool q_concatenatetablesproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QConcatenateTablesProxyModel* self, QThread* thread, Disambiguated_t* param2 ```
bool q_concatenatetablesproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QConcatenateTablesProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_concatenatetablesproxymodel_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* param1 ```
void q_concatenatetablesproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_concatenatetablesproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_concatenatetablesproxymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_concatenatetablesproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_concatenatetablesproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
bool q_concatenatetablesproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
bool q_concatenatetablesproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int64_t (*slot)() ```
void q_concatenatetablesproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int64_t (*slot)() ```
void q_concatenatetablesproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
void q_concatenatetablesproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
void q_concatenatetablesproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, enum Qt__SortOrder order ```
void q_concatenatetablesproxymodel_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, enum Qt__SortOrder order ```
void q_concatenatetablesproxymodel_qbase_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, int, enum Qt__SortOrder) ```
void q_concatenatetablesproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_concatenatetablesproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_concatenatetablesproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_concatenatetablesproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_concatenatetablesproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_concatenatetablesproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)() ```
void q_concatenatetablesproxymodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
bool q_concatenatetablesproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
bool q_concatenatetablesproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QEvent*) ```
void q_concatenatetablesproxymodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event ```
bool q_concatenatetablesproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event ```
bool q_concatenatetablesproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QObject*, QEvent*) ```
void q_concatenatetablesproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QTimerEvent* event ```
void q_concatenatetablesproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QTimerEvent* event ```
void q_concatenatetablesproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QTimerEvent*) ```
void q_concatenatetablesproxymodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QChildEvent* event ```
void q_concatenatetablesproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QChildEvent* event ```
void q_concatenatetablesproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QChildEvent*) ```
void q_concatenatetablesproxymodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
void q_concatenatetablesproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
void q_concatenatetablesproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QEvent*) ```
void q_concatenatetablesproxymodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QMetaMethod*) ```
void q_concatenatetablesproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QMetaMethod*) ```
void q_concatenatetablesproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column ```
QModelIndex* q_concatenatetablesproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column ```
QModelIndex* q_concatenatetablesproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, int, int) ```
void q_concatenatetablesproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_concatenatetablesproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_concatenatetablesproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, libqt_list /* of QModelIndex* */ indexes , QDataStream*) ```
void q_concatenatetablesproxymodel_on_encode_data(void* self, void (*slot)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_concatenatetablesproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_concatenatetablesproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_concatenatetablesproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_concatenatetablesproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_concatenatetablesproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_concatenatetablesproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_concatenatetablesproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_concatenatetablesproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_concatenatetablesproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_concatenatetablesproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_concatenatetablesproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, libqt_list /* of QModelIndex* */ from , libqt_list /* of QModelIndex* */ to ) ```
void q_concatenatetablesproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_concatenatetablesproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
QObject* q_concatenatetablesproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
QObject* q_concatenatetablesproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QObject* (*slot)() ```
void q_concatenatetablesproxymodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int32_t q_concatenatetablesproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int32_t q_concatenatetablesproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)() ```
void q_concatenatetablesproxymodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, const char* signal ```
int32_t q_concatenatetablesproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, const char* signal ```
int32_t q_concatenatetablesproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, const char*) ```
void q_concatenatetablesproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
bool q_concatenatetablesproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
bool q_concatenatetablesproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QMetaMethod*) ```
void q_concatenatetablesproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_concatenatetablesproxymodel_on_model_about_to_be_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_concatenatetablesproxymodel_on_model_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QObject*, const char*) ```
void q_concatenatetablesproxymodel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dtor.QConcatenateTablesProxyModel)
///
/// Delete this object from C++ memory.
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_delete(void* self);

#endif
