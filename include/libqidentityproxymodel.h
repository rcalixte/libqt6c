#pragma once
#ifndef LIBQIDENTITYPROXYMODEL_H
#define LIBQIDENTITYPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html)

/// q_identityproxymodel_new constructs a new QIdentityProxyModel object.
///
QIdentityProxyModel* q_identityproxymodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html)

/// q_identityproxymodel_new2 constructs a new QIdentityProxyModel object.
///
/// @param parent QObject*
///
QIdentityProxyModel* q_identityproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QIdentityProxyModel*
///
const QMetaObject* q_identityproxymodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback const QMetaObject* func(const QIdentityProxyModel* self)
///
void q_identityproxymodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
///
const QMetaObject* q_identityproxymodel_super_meta_object(const void* self);

/// @param self QIdentityProxyModel*
/// @param param1 const char*
///
void* q_identityproxymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback void* func(QIdentityProxyModel* self, const char* param1)
///
void q_identityproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param param1 const char*
///
void* q_identityproxymodel_super_metacast(void* self, const char* param1);

/// @param self QIdentityProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_identityproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback int32_t func(QIdentityProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_identityproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_identityproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_identityproxymodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
int32_t q_identityproxymodel_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback int32_t func(const QIdentityProxyModel* self, QModelIndex* parent)
///
void q_identityproxymodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
int32_t q_identityproxymodel_super_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_identityproxymodel_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_identityproxymodel_super_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// @param self const QIdentityProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* q_identityproxymodel_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(const QIdentityProxyModel* self, QModelIndex* sourceIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_map_from_source(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* q_identityproxymodel_super_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// @param self const QIdentityProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* q_identityproxymodel_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(const QIdentityProxyModel* self, QModelIndex* proxyIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_map_to_source(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* q_identityproxymodel_super_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// @param self const QIdentityProxyModel*
/// @param child QModelIndex*
///
QModelIndex* q_identityproxymodel_parent(const void* self, const void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(const QIdentityProxyModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param child QModelIndex*
///
QModelIndex* q_identityproxymodel_super_parent(const void* self, const void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
int32_t q_identityproxymodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback int32_t func(const QIdentityProxyModel* self, QModelIndex* parent)
///
void q_identityproxymodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
int32_t q_identityproxymodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// @param self const QIdentityProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_identityproxymodel_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QVariant* func(const QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_identityproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// @param self QIdentityProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_identityproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_identityproxymodel_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_identityproxymodel_super_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// @param self const QIdentityProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_identityproxymodel_map_selection_from_source(const void* self, const void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QItemSelection* func(const QIdentityProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_map_selection_from_source(const void* self, QItemSelection* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_identityproxymodel_super_map_selection_from_source(const void* self, const void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// @param self const QIdentityProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_identityproxymodel_map_selection_to_source(const void* self, const void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback QItemSelection* func(const QIdentityProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_map_selection_to_source(const void* self, QItemSelection* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_identityproxymodel_super_map_selection_to_source(const void* self, const void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// @param self const QIdentityProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_identityproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Allows for overriding the related default method
///
/// @param self const QIdentityProxyModel*
/// @param callback libqt_list of QModelIndex* func(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_identityproxymodel_on_match(const void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Base class method implementation
///
/// @param self const QIdentityProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_identityproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// @param self QIdentityProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void q_identityproxymodel_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QAbstractItemModel* sourceModel)
///
void q_identityproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void q_identityproxymodel_super_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, int column, int count, QModelIndex* parent)
///
void q_identityproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_insert_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, int row, int count, QModelIndex* parent)
///
void q_identityproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, int column, int count, QModelIndex* parent)
///
void q_identityproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_remove_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, int row, int count, QModelIndex* parent)
///
void q_identityproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_identityproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_identityproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_identityproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_identityproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_identityproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Base class method implementation
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_identityproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceLayoutChanges)
///
/// @param self const QIdentityProxyModel*
///
bool q_identityproxymodel_handle_source_layout_changes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceDataChanges)
///
/// @param self const QIdentityProxyModel*
///
bool q_identityproxymodel_handle_source_data_changes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// @param self QIdentityProxyModel*
/// @param handleSourceLayoutChanges bool
///
void q_identityproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges);

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// @param self QIdentityProxyModel*
/// @param handleSourceDataChanges bool
///
void q_identityproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_identityproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_identityproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self const QIdentityProxyModel*
///
QAbstractItemModel* q_identityproxymodel_source_model(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
///
bool q_identityproxymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QIdentityProxyModel*
/// @param row int
///
bool q_identityproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QIdentityProxyModel*
/// @param column int
///
bool q_identityproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QIdentityProxyModel*
/// @param row int
///
bool q_identityproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QIdentityProxyModel*
/// @param column int
///
bool q_identityproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_identityproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_identityproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
bool q_identityproxymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QIdentityProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_identityproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_identityproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QIdentityProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_identityproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_identityproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_identityproxymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QIdentityProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_identityproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_identityproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QIdentityProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_identityproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_identityproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QIdentityProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_identityproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_identityproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QIdentityProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_identityproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_identityproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QIdentityProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_identityproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_identityproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QIdentityProxyModel*
///
const char* q_identityproxymodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QIdentityProxyModel*
/// @param name const char*
///
void q_identityproxymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QIdentityProxyModel*
///
bool q_identityproxymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QIdentityProxyModel*
///
bool q_identityproxymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QIdentityProxyModel*
///
bool q_identityproxymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QIdentityProxyModel*
///
bool q_identityproxymodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QIdentityProxyModel*
/// @param b bool
///
bool q_identityproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QIdentityProxyModel*
///
QThread* q_identityproxymodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QIdentityProxyModel*
/// @param thread QThread*
///
bool q_identityproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIdentityProxyModel*
/// @param interval int
///
int32_t q_identityproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIdentityProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t q_identityproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIdentityProxyModel*
/// @param id int
///
void q_identityproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIdentityProxyModel*
/// @param id enum Qt__TimerId
///
void q_identityproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QIdentityProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_identityproxymodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QIdentityProxyModel*
/// @param parent QObject*
///
void q_identityproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QIdentityProxyModel*
/// @param filterObj QObject*
///
void q_identityproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QIdentityProxyModel*
/// @param obj QObject*
///
void q_identityproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_identityproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_identityproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QIdentityProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_identityproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_identityproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_identityproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIdentityProxyModel*
///
bool q_identityproxymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIdentityProxyModel*
/// @param receiver QObject*
///
bool q_identityproxymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_identityproxymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QIdentityProxyModel*
///
void q_identityproxymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QIdentityProxyModel*
///
void q_identityproxymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QIdentityProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_identityproxymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QIdentityProxyModel*
/// @param name const char*
///
QVariant* q_identityproxymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QIdentityProxyModel*
///
const char** q_identityproxymodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QIdentityProxyModel*
///
QBindingStorage* q_identityproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QIdentityProxyModel*
///
const QBindingStorage* q_identityproxymodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QIdentityProxyModel*
/// @param classname const char*
///
bool q_identityproxymodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIdentityProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_identityproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIdentityProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_identityproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_identityproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_identityproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QIdentityProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_identityproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIdentityProxyModel*
/// @param signal const char*
///
bool q_identityproxymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIdentityProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_identityproxymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIdentityProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_identityproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIdentityProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_identityproxymodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIdentityProxyModel*
/// @param param1 QObject*
///
void q_identityproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QObject* param1)
///
void q_identityproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
bool q_identityproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
bool q_identityproxymodel_super_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* q_identityproxymodel_data(const void* self, const void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* q_identityproxymodel_super_data(const void* self, const void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback QVariant* func(QIdentityProxyModel* self, QModelIndex* proxyIndex, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int));

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
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_identityproxymodel_item_data(const void* self, const void* index);

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
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_identityproxymodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback libqt_map of int to QVariant* func(QIdentityProxyModel* self, QModelIndex* index)
///
void q_identityproxymodel_on_item_data(const void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_identityproxymodel_flags(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_identityproxymodel_super_flags(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback int32_t func(QIdentityProxyModel* self, QModelIndex* index)
///
void q_identityproxymodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_identityproxymodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_identityproxymodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_identityproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_identityproxymodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_identityproxymodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_identityproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_identityproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_identityproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_identityproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param index QModelIndex*
///
bool q_identityproxymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param index QModelIndex*
///
bool q_identityproxymodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* index)
///
void q_identityproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_identityproxymodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_identityproxymodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(QIdentityProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
bool q_identityproxymodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* parent)
///
void q_identityproxymodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
///
void q_identityproxymodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
///
void q_identityproxymodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent)
///
void q_identityproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_identityproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_identityproxymodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, int column, enum Qt__SortOrder order)
///
void q_identityproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
QSize* q_identityproxymodel_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
///
QSize* q_identityproxymodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback QSize* func(QIdentityProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_span(const void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
bool q_identityproxymodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_has_children(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* parent)
///
void q_identityproxymodel_on_has_children(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_identityproxymodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_identityproxymodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback QMimeData* func(QIdentityProxyModel* self, libqt_list of QModelIndex* indexes)
///
void q_identityproxymodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_identityproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_identityproxymodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
const char** q_identityproxymodel_mime_types(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
const char** q_identityproxymodel_super_mime_types(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback const char** func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_mime_types(const void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_identityproxymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_identityproxymodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback int32_t func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_identityproxymodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_identityproxymodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback int32_t func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*));

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
/// @param self const QIdentityProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_identityproxymodel_role_names(const void* self);

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
/// @param self const QIdentityProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_identityproxymodel_super_role_names(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback libqt_map of int to char* func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_role_names(const void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_identityproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_identityproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_identityproxymodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QEvent*
///
bool q_identityproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QEvent*
///
bool q_identityproxymodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QEvent* event)
///
void q_identityproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_identityproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_identityproxymodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QObject* watched, QEvent* event)
///
void q_identityproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QTimerEvent*
///
void q_identityproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QTimerEvent*
///
void q_identityproxymodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QTimerEvent* event)
///
void q_identityproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QChildEvent*
///
void q_identityproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QChildEvent*
///
void q_identityproxymodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QChildEvent* event)
///
void q_identityproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QEvent*
///
void q_identityproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param event QEvent*
///
void q_identityproxymodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QEvent* event)
///
void q_identityproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param signal QMetaMethod*
///
void q_identityproxymodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param signal QMetaMethod*
///
void q_identityproxymodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QMetaMethod* signal)
///
void q_identityproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param signal QMetaMethod*
///
void q_identityproxymodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param signal QMetaMethod*
///
void q_identityproxymodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QMetaMethod* signal)
///
void q_identityproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* q_identityproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* q_identityproxymodel_super_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(QIdentityProxyModel* self, int row, int col, void* internalPtr)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_create_source_index(const void* self, QModelIndex* (*callback)(const void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* q_identityproxymodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* q_identityproxymodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback QModelIndex* func(QIdentityProxyModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_identityproxymodel_on_create_index(const void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_identityproxymodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_identityproxymodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_identityproxymodel_on_encode_data(const void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_identityproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_identityproxymodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_identityproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_identityproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_identityproxymodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_identityproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_identityproxymodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_identityproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_identityproxymodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_identityproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_identityproxymodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_identityproxymodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void q_identityproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_identityproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_identityproxymodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void q_identityproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_identityproxymodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_identityproxymodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback libqt_list of QModelIndex* func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_persistent_index_list(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
QObject* q_identityproxymodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
QObject* q_identityproxymodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback QObject* func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
int32_t q_identityproxymodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
///
int32_t q_identityproxymodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback int32_t func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param signal const char*
///
int32_t q_identityproxymodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param signal const char*
///
int32_t q_identityproxymodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback int32_t func(QIdentityProxyModel* self, const char* signal)
///
void q_identityproxymodel_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param signal QMetaMethod*
///
bool q_identityproxymodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param signal QMetaMethod*
///
bool q_identityproxymodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIdentityProxyModel*
/// @param callback bool func(QIdentityProxyModel* self, QMetaMethod* signal)
///
void q_identityproxymodel_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_identityproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self)
///
void q_identityproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_identityproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_identityproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_identityproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_identityproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QIdentityProxyModel*
/// @param callback void func(QIdentityProxyModel* self, const char* objectName)
///
void q_identityproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dtor.QIdentityProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self QIdentityProxyModel*
///
void q_identityproxymodel_delete(void* self);

#endif
