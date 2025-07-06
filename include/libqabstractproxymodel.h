#pragma once
#ifndef SRCQT6C_LIBQABSTRACTPROXYMODEL_H
#define SRCQT6C_LIBQABSTRACTPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractproxymodel.html

/// q_abstractproxymodel_new constructs a new QAbstractProxyModel object.
///
///
QAbstractProxyModel* q_abstractproxymodel_new();

/// q_abstractproxymodel_new2 constructs a new QAbstractProxyModel object.
///
/// ``` QObject* parent ```
QAbstractProxyModel* q_abstractproxymodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractProxyModel* self ```
const QMetaObject* q_abstractproxymodel_meta_object(void* self);

/// ``` QAbstractProxyModel* self, const char* param1 ```
void* q_abstractproxymodel_metacast(void* self, const char* param1);

/// ``` QAbstractProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractproxymodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, int32_t (*slot)(QAbstractProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_abstractproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractproxymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
///
/// ``` QAbstractProxyModel* self, QAbstractItemModel* sourceModel ```
void q_abstractproxymodel_set_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QAbstractItemModel*) ```
void q_abstractproxymodel_on_set_source_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QAbstractItemModel* sourceModel ```
void q_abstractproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// ``` QAbstractProxyModel* self ```
QAbstractItemModel* q_abstractproxymodel_source_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
///
/// ``` QAbstractProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_abstractproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_map_to_source(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_abstractproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_abstractproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_map_from_source(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_abstractproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// ``` QAbstractProxyModel* self, QItemSelection* selection ```
QItemSelection* q_abstractproxymodel_map_selection_to_source(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QItemSelection* (*slot)(QAbstractProxyModel*, QItemSelection*) ```
void q_abstractproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QItemSelection* selection ```
QItemSelection* q_abstractproxymodel_qbase_map_selection_to_source(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// ``` QAbstractProxyModel* self, QItemSelection* selection ```
QItemSelection* q_abstractproxymodel_map_selection_from_source(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QItemSelection* (*slot)(QAbstractProxyModel*, QItemSelection*) ```
void q_abstractproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QItemSelection* selection ```
QItemSelection* q_abstractproxymodel_qbase_map_selection_from_source(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// ``` QAbstractProxyModel* self ```
bool q_abstractproxymodel_submit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)() ```
void q_abstractproxymodel_on_submit(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self ```
bool q_abstractproxymodel_qbase_submit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_revert(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_revert(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_revert(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// ``` QAbstractProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_abstractproxymodel_data(void* self, void* proxyIndex, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QVariant* (*slot)(QAbstractProxyModel*, QModelIndex*, int) ```
void q_abstractproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_abstractproxymodel_qbase_data(void* self, void* proxyIndex, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
///
/// ``` QAbstractProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractproxymodel_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QVariant* (*slot)(QAbstractProxyModel*, int, enum Qt__Orientation, int) ```
void q_abstractproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractproxymodel_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractproxymodel_qbase_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
int64_t q_abstractproxymodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, int64_t (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
int64_t q_abstractproxymodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractproxymodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*, QVariant*, int) ```
void q_abstractproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_abstractproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// ``` QAbstractProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_abstractproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
bool q_abstractproxymodel_clear_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
bool q_abstractproxymodel_qbase_clear_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
QModelIndex* q_abstractproxymodel_buddy(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
QModelIndex* q_abstractproxymodel_qbase_buddy(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
bool q_abstractproxymodel_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
void q_abstractproxymodel_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
void q_abstractproxymodel_qbase_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// ``` QAbstractProxyModel* self, int column, enum Qt__SortOrder order ```
void q_abstractproxymodel_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, int, enum Qt__SortOrder) ```
void q_abstractproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, int column, enum Qt__SortOrder order ```
void q_abstractproxymodel_qbase_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
QSize* q_abstractproxymodel_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QSize* (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
QSize* q_abstractproxymodel_qbase_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
bool q_abstractproxymodel_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// ``` QAbstractProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractproxymodel_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstractproxymodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QMimeData* (*slot)(QAbstractProxyModel*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_abstractproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstractproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// ``` QAbstractProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// ``` QAbstractProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// ``` QAbstractProxyModel* self ```
const char** q_abstractproxymodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, const char** (*slot)() ```
void q_abstractproxymodel_on_mime_types(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self ```
const char** q_abstractproxymodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// ``` QAbstractProxyModel* self ```
int64_t q_abstractproxymodel_supported_drag_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, int64_t (*slot)() ```
void q_abstractproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self ```
int64_t q_abstractproxymodel_qbase_supported_drag_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// ``` QAbstractProxyModel* self ```
int64_t q_abstractproxymodel_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, int64_t (*slot)() ```
void q_abstractproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self ```
int64_t q_abstractproxymodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// ``` QAbstractProxyModel* self ```
libqt_map /* of int to char* */ q_abstractproxymodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_abstractproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self ```
libqt_map /* of int to char* */ q_abstractproxymodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// ``` QAbstractProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_abstractproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, int, int, void*) ```
void q_abstractproxymodel_on_create_source_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Base class method implementation
///
/// ``` QAbstractProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_abstractproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractProxyModel* self, int row, int column ```
bool q_abstractproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractProxyModel* self, int row ```
bool q_abstractproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractProxyModel* self, int column ```
bool q_abstractproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractProxyModel* self, int row ```
bool q_abstractproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractProxyModel* self, int column ```
bool q_abstractproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index ```
bool q_abstractproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_abstractproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstractproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_abstractproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_abstractproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractproxymodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_abstractproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractProxyModel* self, int row, QModelIndex* parent ```
bool q_abstractproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractProxyModel* self, int column, QModelIndex* parent ```
bool q_abstractproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractProxyModel* self, int row, QModelIndex* parent ```
bool q_abstractproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractProxyModel* self, int column, QModelIndex* parent ```
bool q_abstractproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractProxyModel* self, QModelIndex* index, int options ```
bool q_abstractproxymodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_abstractproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_abstractproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstractproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstractproxymodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractproxymodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractproxymodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstractproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstractproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractProxyModel* self ```
const char* q_abstractproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractProxyModel* self, char* name ```
void q_abstractproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractProxyModel* self ```
bool q_abstractproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractProxyModel* self ```
bool q_abstractproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractProxyModel* self ```
bool q_abstractproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractProxyModel* self ```
bool q_abstractproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractProxyModel* self, bool b ```
bool q_abstractproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractProxyModel* self ```
QThread* q_abstractproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractProxyModel* self, QThread* thread ```
bool q_abstractproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractProxyModel* self, int interval ```
int32_t q_abstractproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractProxyModel* self, int id ```
void q_abstractproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractProxyModel* self, enum Qt__TimerId id ```
void q_abstractproxymodel_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractProxyModel* self ```
libqt_list /* of QObject* */ q_abstractproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractProxyModel* self, QObject* parent ```
void q_abstractproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractProxyModel* self, QObject* filterObj ```
void q_abstractproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractProxyModel* self, QObject* obj ```
void q_abstractproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractproxymodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractProxyModel* self, const char* name, QVariant* value ```
bool q_abstractproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractProxyModel* self, const char* name ```
QVariant* q_abstractproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractProxyModel* self ```
const char** q_abstractproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractProxyModel* self ```
QBindingStorage* q_abstractproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractProxyModel* self ```
const QBindingStorage* q_abstractproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QObject*) ```
void q_abstractproxymodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractProxyModel* self, const char* classname ```
bool q_abstractproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractProxyModel* self, QThread* thread, Disambiguated_t* param2 ```
bool q_abstractproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractproxymodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractProxyModel* self, QObject* param1 ```
void q_abstractproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_abstractproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractproxymodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* child ```
QModelIndex* q_abstractproxymodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* child ```
QModelIndex* q_abstractproxymodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
int32_t q_abstractproxymodel_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
int32_t q_abstractproxymodel_qbase_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int32_t (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
int32_t q_abstractproxymodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent ```
int32_t q_abstractproxymodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int32_t (*slot)(QAbstractProxyModel*, QModelIndex*) ```
void q_abstractproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, int, int, QModelIndex*) ```
void q_abstractproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QAbstractProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_abstractproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_abstractproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QEvent* event ```
bool q_abstractproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QEvent* event ```
bool q_abstractproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QEvent*) ```
void q_abstractproxymodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QObject* watched, QEvent* event ```
bool q_abstractproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QObject* watched, QEvent* event ```
bool q_abstractproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QObject*, QEvent*) ```
void q_abstractproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QTimerEvent* event ```
void q_abstractproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QTimerEvent* event ```
void q_abstractproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QTimerEvent*) ```
void q_abstractproxymodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QChildEvent* event ```
void q_abstractproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QChildEvent* event ```
void q_abstractproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QChildEvent*) ```
void q_abstractproxymodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QEvent* event ```
void q_abstractproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QEvent* event ```
void q_abstractproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QEvent*) ```
void q_abstractproxymodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QMetaMethod* signal ```
void q_abstractproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QMetaMethod* signal ```
void q_abstractproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QMetaMethod*) ```
void q_abstractproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QMetaMethod* signal ```
void q_abstractproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QMetaMethod* signal ```
void q_abstractproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QMetaMethod*) ```
void q_abstractproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int column ```
QModelIndex* q_abstractproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int column ```
QModelIndex* q_abstractproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* (*slot)(QAbstractProxyModel*, int, int) ```
void q_abstractproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstractproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstractproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, libqt_list /* of QModelIndex* */ indexes , QDataStream*) ```
void q_abstractproxymodel_on_encode_data(void* self, void (*slot)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_abstractproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* parent, int first, int last ```
void q_abstractproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)() ```
void q_abstractproxymodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, QModelIndex*, QModelIndex*) ```
void q_abstractproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstractproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstractproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*, libqt_list /* of QModelIndex* */ from , libqt_list /* of QModelIndex* */ to ) ```
void q_abstractproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
libqt_list /* of QModelIndex* */ q_abstractproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
libqt_list /* of QModelIndex* */ q_abstractproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstractproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
QObject* q_abstractproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
QObject* q_abstractproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QObject* (*slot)() ```
void q_abstractproxymodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
int32_t q_abstractproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self ```
int32_t q_abstractproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int32_t (*slot)() ```
void q_abstractproxymodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, const char* signal ```
int32_t q_abstractproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, const char* signal ```
int32_t q_abstractproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, int32_t (*slot)(QAbstractProxyModel*, const char*) ```
void q_abstractproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractProxyModel* self, QMetaMethod* signal ```
bool q_abstractproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, QMetaMethod* signal ```
bool q_abstractproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractProxyModel* self, bool (*slot)(QAbstractProxyModel*, QMetaMethod*) ```
void q_abstractproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractProxyModel*) ```
void q_abstractproxymodel_on_source_model_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractproxymodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractproxymodel_on_model_about_to_be_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractproxymodel_on_model_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractproxymodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractProxyModel* self, void (*slot)(QObject*, const char*) ```
void q_abstractproxymodel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dtor.QAbstractProxyModel)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractProxyModel* self ```
void q_abstractproxymodel_delete(void* self);

#endif
