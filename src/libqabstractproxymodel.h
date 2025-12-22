#pragma once
#ifndef SRC_QT6C_LIBQABSTRACTPROXYMODEL_H
#define SRC_QT6C_LIBQABSTRACTPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html)

/// q_abstractproxymodel_new constructs a new QAbstractProxyModel object.
///
QAbstractProxyModel* q_abstractproxymodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html)

/// q_abstractproxymodel_new2 constructs a new QAbstractProxyModel object.
///
/// @param parent QObject*
///
QAbstractProxyModel* q_abstractproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractProxyModel*
///
const QMetaObject* q_abstractproxymodel_meta_object(void* self);

/// @param self QAbstractProxyModel*
/// @param param1 const char*
///
void* q_abstractproxymodel_metacast(void* self, const char* param1);

/// @param self QAbstractProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func(QAbstractProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractproxymodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
///
/// @param self QAbstractProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void q_abstractproxymodel_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QAbstractItemModel* sourceModel)
///
void q_abstractproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void q_abstractproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self QAbstractProxyModel*
///
QAbstractItemModel* q_abstractproxymodel_source_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
///
/// @param self QAbstractProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* q_abstractproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, QModelIndex* proxyIndex)
///
void q_abstractproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* q_abstractproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
///
/// @param self QAbstractProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* q_abstractproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, QModelIndex* sourceIndex)
///
void q_abstractproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* q_abstractproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// @param self QAbstractProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_abstractproxymodel_map_selection_to_source(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QItemSelection* func(QAbstractProxyModel* self, QItemSelection* selection)
///
void q_abstractproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_abstractproxymodel_qbase_map_selection_to_source(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// @param self QAbstractProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_abstractproxymodel_map_selection_from_source(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QItemSelection* func(QAbstractProxyModel* self, QItemSelection* selection)
///
void q_abstractproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_abstractproxymodel_qbase_map_selection_from_source(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// @param self QAbstractProxyModel*
///
bool q_abstractproxymodel_submit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func()
///
void q_abstractproxymodel_on_submit(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
///
bool q_abstractproxymodel_qbase_submit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_revert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_revert(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_revert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// @param self QAbstractProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* q_abstractproxymodel_data(void* self, void* proxyIndex, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QVariant* func(QAbstractProxyModel* self, QModelIndex* proxyIndex, int role)
///
void q_abstractproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* q_abstractproxymodel_qbase_data(void* self, void* proxyIndex, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
///
/// @param self QAbstractProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QVariant* func(QAbstractProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
void q_abstractproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstractproxymodel_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QAbstractProxyModel* self, QModelIndex* index)
///
void q_abstractproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstractproxymodel_qbase_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractproxymodel_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func(QAbstractProxyModel* self, QModelIndex* index)
///
void q_abstractproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractproxymodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractproxymodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_abstractproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstractproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void q_abstractproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstractproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// @param self QAbstractProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstractproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_abstractproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstractproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
bool q_abstractproxymodel_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* index)
///
void q_abstractproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
bool q_abstractproxymodel_qbase_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractproxymodel_buddy(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, QModelIndex* index)
///
void q_abstractproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractproxymodel_qbase_buddy(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* parent)
///
void q_abstractproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
void q_abstractproxymodel_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent)
///
void q_abstractproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
void q_abstractproxymodel_qbase_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstractproxymodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, int column, enum Qt__SortOrder order)
///
void q_abstractproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstractproxymodel_qbase_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
QSize* q_abstractproxymodel_span(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QSize* func(QAbstractProxyModel* self, QModelIndex* index)
///
void q_abstractproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
QSize* q_abstractproxymodel_qbase_span(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_has_children(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* parent)
///
void q_abstractproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_has_children(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractproxymodel_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, int row, int column, QModelIndex* idx)
///
void q_abstractproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// @param self QAbstractProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstractproxymodel_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QMimeData* func(QAbstractProxyModel* self, QModelIndex** indexes)
///
void q_abstractproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstractproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// @param self QAbstractProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// @param self QAbstractProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractProxyModel*
///
const char** q_abstractproxymodel_mime_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback const char** func()
///
void q_abstractproxymodel_on_mime_types(void* self, const char** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
///
const char** q_abstractproxymodel_qbase_mime_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// @param self QAbstractProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractproxymodel_supported_drag_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func()
///
void q_abstractproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractproxymodel_qbase_supported_drag_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// @param self QAbstractProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractproxymodel_supported_drop_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func()
///
void q_abstractproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractproxymodel_qbase_supported_drop_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// @param self QAbstractProxyModel*
///
libqt_map /* of int to char* */ q_abstractproxymodel_role_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void q_abstractproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
///
libqt_map /* of int to char* */ q_abstractproxymodel_qbase_role_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* q_abstractproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, int row, int col, void* internalPtr)
///
void q_abstractproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Base class method implementation
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* q_abstractproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
///
bool q_abstractproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractProxyModel*
/// @param row int
///
bool q_abstractproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractProxyModel*
/// @param column int
///
bool q_abstractproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractProxyModel*
/// @param row int
///
bool q_abstractproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractProxyModel*
/// @param column int
///
bool q_abstractproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
///
bool q_abstractproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_abstractproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_abstractproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_abstractproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_abstractproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self)
///
void q_abstractproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self)
///
void q_abstractproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_abstractproxymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_abstractproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void q_abstractproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstractproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QPersistentModelIndex** parents)
///
void q_abstractproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstractproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QPersistentModelIndex** parents)
///
void q_abstractproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractProxyModel*
///
const char* q_abstractproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractProxyModel*
/// @param name char*
///
void q_abstractproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractProxyModel*
///
bool q_abstractproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractProxyModel*
///
bool q_abstractproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractProxyModel*
///
bool q_abstractproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractProxyModel*
///
bool q_abstractproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractProxyModel*
/// @param b bool
///
bool q_abstractproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractProxyModel*
///
QThread* q_abstractproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractProxyModel*
/// @param thread QThread*
///
bool q_abstractproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractProxyModel*
/// @param interval int
///
int32_t q_abstractproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractProxyModel*
/// @param id int
///
void q_abstractproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractProxyModel*
/// @param id enum Qt__TimerId
///
void q_abstractproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractProxyModel*
///
libqt_list /* of QObject* */ q_abstractproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractProxyModel*
/// @param parent QObject*
///
void q_abstractproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractProxyModel*
/// @param filterObj QObject*
///
void q_abstractproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractProxyModel*
/// @param obj QObject*
///
void q_abstractproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractProxyModel*
/// @param name const char*
///
QVariant* q_abstractproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractProxyModel*
///
const char** q_abstractproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractProxyModel*
///
QBindingStorage* q_abstractproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractProxyModel*
///
const QBindingStorage* q_abstractproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self)
///
void q_abstractproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractProxyModel*
/// @param classname const char*
///
bool q_abstractproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractProxyModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_abstractproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractproxymodel_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_abstractproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractProxyModel*
/// @param param1 QObject*
///
void q_abstractproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QObject* param1)
///
void q_abstractproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractproxymodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, int row, int column, QModelIndex* parent)
///
void q_abstractproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractproxymodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractproxymodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, QModelIndex* child)
///
void q_abstractproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
int32_t q_abstractproxymodel_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
int32_t q_abstractproxymodel_qbase_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func(QAbstractProxyModel* self, QModelIndex* parent)
///
void q_abstractproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
int32_t q_abstractproxymodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
///
int32_t q_abstractproxymodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func(QAbstractProxyModel* self, QModelIndex* parent)
///
void q_abstractproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstractproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstractproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex** func(QAbstractProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_abstractproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_abstractproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QEvent*
///
bool q_abstractproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QEvent*
///
bool q_abstractproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QEvent* event)
///
void q_abstractproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QObject* watched, QEvent* event)
///
void q_abstractproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QTimerEvent*
///
void q_abstractproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QTimerEvent*
///
void q_abstractproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QTimerEvent* event)
///
void q_abstractproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QChildEvent*
///
void q_abstractproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QChildEvent*
///
void q_abstractproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QChildEvent* event)
///
void q_abstractproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QEvent*
///
void q_abstractproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param event QEvent*
///
void q_abstractproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QEvent* event)
///
void q_abstractproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal QMetaMethod*
///
void q_abstractproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal QMetaMethod*
///
void q_abstractproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QMetaMethod* signal)
///
void q_abstractproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal QMetaMethod*
///
void q_abstractproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal QMetaMethod*
///
void q_abstractproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QMetaMethod* signal)
///
void q_abstractproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex* func(QAbstractProxyModel* self, int row, int column)
///
void q_abstractproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstractproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstractproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex** indexes, QDataStream* stream)
///
void q_abstractproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstractproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstractproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_abstractproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstractproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstractproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstractproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstractproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func()
///
void q_abstractproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstractproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstractproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void q_abstractproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstractproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstractproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex** from, QModelIndex** to)
///
void q_abstractproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
libqt_list /* of QModelIndex* */ q_abstractproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
libqt_list /* of QModelIndex* */ q_abstractproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback QModelIndex** func()
///
void q_abstractproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
QObject* q_abstractproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
QObject* q_abstractproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback QObject* func()
///
void q_abstractproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
///
int32_t q_abstractproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
///
int32_t q_abstractproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func()
///
void q_abstractproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal const char*
///
int32_t q_abstractproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal const char*
///
int32_t q_abstractproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback int32_t func(QAbstractProxyModel* self, const char* signal)
///
void q_abstractproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal QMetaMethod*
///
bool q_abstractproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param signal QMetaMethod*
///
bool q_abstractproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractProxyModel*
/// @param callback bool func(QAbstractProxyModel* self, QMetaMethod* signal)
///
void q_abstractproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self)
///
void q_abstractproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self)
///
void q_abstractproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self)
///
void q_abstractproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractProxyModel*
/// @param callback void func(QAbstractProxyModel* self, const char* objectName)
///
void q_abstractproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dtor.QAbstractProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractProxyModel*
///
void q_abstractproxymodel_delete(void* self);

#endif
