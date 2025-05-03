#pragma once
#ifndef SRCQT6C_LIBQIDENTITYPROXYMODEL_H
#define SRCQT6C_LIBQIDENTITYPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqabstractproxymodel.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqdatastream.h"
#include "libqitemselectionmodel.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qidentityproxymodel.html

/// q_identityproxymodel_new constructs a new QIdentityProxyModel object.
///
///
QIdentityProxyModel* q_identityproxymodel_new();

/// q_identityproxymodel_new2 constructs a new QIdentityProxyModel object.
///
/// ``` QObject* parent ```
QIdentityProxyModel* q_identityproxymodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QIdentityProxyModel* self ```
QMetaObject* q_identityproxymodel_meta_object(void* self);

/// ``` QIdentityProxyModel* self, const char* param1 ```
void* q_identityproxymodel_metacast(void* self, const char* param1);

/// ``` QIdentityProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_identityproxymodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_identityproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_identityproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_identityproxymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_column_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_identityproxymodel_index(void* self, int row, int column, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_identityproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_identityproxymodel_map_from_source(void* self, void* sourceIndex);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_map_from_source(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_identityproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_identityproxymodel_map_to_source(void* self, void* proxyIndex);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_map_to_source(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_identityproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// ``` QIdentityProxyModel* self, QModelIndex* child ```
QModelIndex* q_identityproxymodel_parent(void* self, void* child);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* child ```
QModelIndex* q_identityproxymodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_row_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_identityproxymodel_header_data(void* self, int section, int64_t orientation, int role);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QVariant* (*slot)(QIdentityProxyModel*, int, enum Qt__Orientation, int) ```
void q_identityproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_identityproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_identityproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_identityproxymodel_sibling(void* self, int row, int column, void* idx);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_identityproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_map_selection_from_source(void* self, void* selection);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QItemSelection* (*slot)(QIdentityProxyModel*, QItemSelection*) ```
void q_identityproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_qbase_map_selection_from_source(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_map_selection_to_source(void* self, void* selection);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QItemSelection* (*slot)(QIdentityProxyModel*, QItemSelection*) ```
void q_identityproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_qbase_map_selection_to_source(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// ``` QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QIdentityProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_identityproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// ``` QIdentityProxyModel* self, QAbstractItemModel* sourceModel ```
void q_identityproxymodel_set_source_model(void* self, void* sourceModel);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QAbstractItemModel*) ```
void q_identityproxymodel_on_set_source_model(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QAbstractItemModel* sourceModel ```
void q_identityproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_identityproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_identityproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// ``` QIdentityProxyModel* self ```
QAbstractItemModel* q_identityproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QIdentityProxyModel* self, int row, int column ```
bool q_identityproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QIdentityProxyModel* self, int row ```
bool q_identityproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QIdentityProxyModel* self, int column ```
bool q_identityproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QIdentityProxyModel* self, int row ```
bool q_identityproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QIdentityProxyModel* self, int column ```
bool q_identityproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
bool q_identityproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QIdentityProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_identityproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_identityproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QIdentityProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_identityproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_identityproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_identityproxymodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_identityproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QIdentityProxyModel* self, int row, QModelIndex* parent ```
bool q_identityproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QIdentityProxyModel* self, int column, QModelIndex* parent ```
bool q_identityproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QIdentityProxyModel* self, int row, QModelIndex* parent ```
bool q_identityproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QIdentityProxyModel* self, int column, QModelIndex* parent ```
bool q_identityproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, int options ```
bool q_identityproxymodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QIdentityProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_identityproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_identityproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[] ```
void q_identityproxymodel_layout_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_identityproxymodel_on_layout_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_identityproxymodel_layout_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_identityproxymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[] ```
void q_identityproxymodel_layout_about_to_be_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_identityproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_identityproxymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_identityproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QIdentityProxyModel* self ```
const char* q_identityproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QIdentityProxyModel* self, char* name ```
void q_identityproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QIdentityProxyModel* self, bool b ```
bool q_identityproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QIdentityProxyModel* self ```
QThread* q_identityproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QIdentityProxyModel* self, QThread* thread ```
void q_identityproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIdentityProxyModel* self, int interval ```
int32_t q_identityproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QIdentityProxyModel* self, int id ```
void q_identityproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QIdentityProxyModel* self ```
libqt_list /* of QObject* */ q_identityproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QIdentityProxyModel* self, QObject* parent ```
void q_identityproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QIdentityProxyModel* self, QObject* filterObj ```
void q_identityproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QIdentityProxyModel* self, QObject* obj ```
void q_identityproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_identityproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIdentityProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_identityproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_identityproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_identityproxymodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QIdentityProxyModel* self, const char* name, QVariant* value ```
bool q_identityproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QIdentityProxyModel* self, const char* name ```
QVariant* q_identityproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QIdentityProxyModel* self ```
const char** q_identityproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIdentityProxyModel* self ```
QBindingStorage* q_identityproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIdentityProxyModel* self ```
QBindingStorage* q_identityproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QIdentityProxyModel* self, void (*slot)(QObject*) ```
void q_identityproxymodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QIdentityProxyModel* self, const char* classname ```
bool q_identityproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIdentityProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_identityproxymodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_identityproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIdentityProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_identityproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIdentityProxyModel* self, QObject* param1 ```
void q_identityproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QIdentityProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_identityproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)() ```
void q_identityproxymodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_identityproxymodel_data(void* self, void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_identityproxymodel_qbase_data(void* self, void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QVariant* (*slot)(QIdentityProxyModel*, QModelIndex*, int) ```
void q_identityproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_identityproxymodel_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_identityproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
int64_t q_identityproxymodel_flags(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
int64_t q_identityproxymodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int64_t (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_identityproxymodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_identityproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, QVariant*, int) ```
void q_identityproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_identityproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_identityproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_identityproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_identityproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_identityproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_identityproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
bool q_identityproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
bool q_identityproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QModelIndex* q_identityproxymodel_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QModelIndex* q_identityproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
void q_identityproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
void q_identityproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int column, enum Qt__SortOrder order ```
void q_identityproxymodel_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int column, enum Qt__SortOrder order ```
void q_identityproxymodel_qbase_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, int, enum Qt__SortOrder) ```
void q_identityproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QSize* q_identityproxymodel_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QSize* q_identityproxymodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QSize* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_has_children(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_identityproxymodel_mime_data(void* self, void* indexes[]);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_identityproxymodel_qbase_mime_data(void* self, void* indexes[]);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMimeData* (*slot)(QIdentityProxyModel*, QModelIndex*[]) ```
void q_identityproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_identityproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
const char** q_identityproxymodel_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
const char** q_identityproxymodel_qbase_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, const char** (*slot)() ```
void q_identityproxymodel_on_mime_types(void* self, const char** (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int64_t (*slot)() ```
void q_identityproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int64_t (*slot)() ```
void q_identityproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_map /* of int to char* */ q_identityproxymodel_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_map /* of int to char* */ q_identityproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_identityproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_identityproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_identityproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_identityproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
bool q_identityproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
bool q_identityproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QEvent*) ```
void q_identityproxymodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QObject* watched, QEvent* event ```
bool q_identityproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QObject* watched, QEvent* event ```
bool q_identityproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QObject*, QEvent*) ```
void q_identityproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QTimerEvent* event ```
void q_identityproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QTimerEvent* event ```
void q_identityproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QTimerEvent*) ```
void q_identityproxymodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QChildEvent* event ```
void q_identityproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QChildEvent* event ```
void q_identityproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QChildEvent*) ```
void q_identityproxymodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
void q_identityproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
void q_identityproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QEvent*) ```
void q_identityproxymodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QMetaMethod*) ```
void q_identityproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QMetaMethod*) ```
void q_identityproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_identityproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_identityproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int, void*) ```
void q_identityproxymodel_on_create_source_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column ```
QModelIndex* q_identityproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column ```
QModelIndex* q_identityproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int) ```
void q_identityproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_identityproxymodel_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_identityproxymodel_qbase_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*[], QDataStream*) ```
void q_identityproxymodel_on_encode_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_identityproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_identityproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_identityproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_identityproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_identityproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_identityproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_identityproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_identityproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_identityproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, QModelIndex*) ```
void q_identityproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_identityproxymodel_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_identityproxymodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*[], QModelIndex*[]) ```
void q_identityproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_identityproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
QObject* q_identityproxymodel_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
QObject* q_identityproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QObject* (*slot)() ```
void q_identityproxymodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int32_t q_identityproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int32_t q_identityproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)() ```
void q_identityproxymodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, const char* signal ```
int32_t q_identityproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, const char* signal ```
int32_t q_identityproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, const char*) ```
void q_identityproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
bool q_identityproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
bool q_identityproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QMetaMethod*) ```
void q_identityproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_delete(void* self);

#endif
