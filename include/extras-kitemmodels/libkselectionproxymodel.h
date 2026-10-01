#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKSELECTIONPROXYMODEL_H
#define EXTRAS_KITEMMODELS_LIBKSELECTIONPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html)

/// k_selectionproxymodel_new constructs a new KSelectionProxyModel object.
///
/// @param selectionModel QItemSelectionModel*
///
KSelectionProxyModel* k_selectionproxymodel_new(void* selectionModel);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html)

/// k_selectionproxymodel_new2 constructs a new KSelectionProxyModel object.
///
KSelectionProxyModel* k_selectionproxymodel_new2();

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html)

/// k_selectionproxymodel_new3 constructs a new KSelectionProxyModel object.
///
/// @param selectionModel QItemSelectionModel*
/// @param parent QObject*
///
KSelectionProxyModel* k_selectionproxymodel_new3(void* selectionModel, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KSelectionProxyModel*
///
const QMetaObject* k_selectionproxymodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback const QMetaObject* func(const KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
///
const QMetaObject* k_selectionproxymodel_super_meta_object(const void* self);

/// @param self KSelectionProxyModel*
/// @param param1 const char*
///
void* k_selectionproxymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KSelectionProxyModel*
/// @param callback void* func(KSelectionProxyModel* self, const char* param1)
///
void k_selectionproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KSelectionProxyModel*
/// @param param1 const char*
///
void* k_selectionproxymodel_super_metacast(void* self, const char* param1);

/// @param self KSelectionProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_selectionproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSelectionProxyModel*
/// @param callback int32_t func(KSelectionProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_selectionproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSelectionProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_selectionproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_selectionproxymodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#setSourceModel)
///
/// @param self KSelectionProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_selectionproxymodel_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QAbstractItemModel* sourceModel)
///
void k_selectionproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self KSelectionProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_selectionproxymodel_super_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#selectionModel)
///
/// @param self const KSelectionProxyModel*
///
QItemSelectionModel* k_selectionproxymodel_selection_model(const void* self);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#setSelectionModel)
///
/// @param self KSelectionProxyModel*
/// @param selectionModel QItemSelectionModel*
///
void k_selectionproxymodel_set_selection_model(void* self, void* selectionModel);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#setFilterBehavior)
///
/// @param self KSelectionProxyModel*
/// @param behavior enum KSelectionProxyModel__FilterBehavior
///
void k_selectionproxymodel_set_filter_behavior(void* self, int32_t behavior);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#filterBehavior)
///
/// @param self const KSelectionProxyModel*
///
/// @return enum KSelectionProxyModel__FilterBehavior
///
int32_t k_selectionproxymodel_filter_behavior(const void* self);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapFromSource)
///
/// @param self const KSelectionProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_selectionproxymodel_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(const KSelectionProxyModel* self, QModelIndex* sourceIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_map_from_source(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_selectionproxymodel_super_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapToSource)
///
/// @param self const KSelectionProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_selectionproxymodel_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(const KSelectionProxyModel* self, QModelIndex* proxyIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_map_to_source(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_selectionproxymodel_super_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapSelectionFromSource)
///
/// @param self const KSelectionProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_selectionproxymodel_map_selection_from_source(const void* self, const void* selection);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapSelectionFromSource)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QItemSelection* func(const KSelectionProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_map_selection_from_source(const void* self, QItemSelection* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapSelectionFromSource)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_selectionproxymodel_super_map_selection_from_source(const void* self, const void* selection);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapSelectionToSource)
///
/// @param self const KSelectionProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_selectionproxymodel_map_selection_to_source(const void* self, const void* selection);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapSelectionToSource)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QItemSelection* func(const KSelectionProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_map_selection_to_source(const void* self, QItemSelection* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mapSelectionToSource)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_selectionproxymodel_super_map_selection_to_source(const void* self, const void* selection);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#flags)
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_selectionproxymodel_flags(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback int32_t func(const KSelectionProxyModel* self, QModelIndex* index)
///
void k_selectionproxymodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_selectionproxymodel_super_flags(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#data)
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_selectionproxymodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QVariant* func(const KSelectionProxyModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_selectionproxymodel_super_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#rowCount)
///
/// @param self const KSelectionProxyModel*
/// @param parent QModelIndex*
///
int32_t k_selectionproxymodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback int32_t func(const KSelectionProxyModel* self, QModelIndex* parent)
///
void k_selectionproxymodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param parent QModelIndex*
///
int32_t k_selectionproxymodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#headerData)
///
/// @param self const KSelectionProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_selectionproxymodel_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QVariant* func(const KSelectionProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_selectionproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mimeData)
///
/// @param self const KSelectionProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_selectionproxymodel_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QMimeData* func(const KSelectionProxyModel* self, libqt_list of QModelIndex* indexes)
///
void k_selectionproxymodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_selectionproxymodel_super_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSelectionProxyModel*
///
const char** k_selectionproxymodel_mime_types(const void* self);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback const char** func(const KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_mime_types(const void* self, const char** (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
///
const char** k_selectionproxymodel_super_mime_types(const void* self);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#supportedDropActions)
///
/// @param self const KSelectionProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_selectionproxymodel_supported_drop_actions(const void* self);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback int32_t func(const KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_selectionproxymodel_super_supported_drop_actions(const void* self);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#dropMimeData)
///
/// @param self KSelectionProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_selectionproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self KSelectionProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#hasChildren)
///
/// @param self const KSelectionProxyModel*
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_has_children(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback bool func(const KSelectionProxyModel* self, QModelIndex* parent)
///
void k_selectionproxymodel_on_has_children(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_has_children(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#index)
///
/// @param self const KSelectionProxyModel*
/// @param param1 int
/// @param param2 int
/// @param param3 QModelIndex*
///
QModelIndex* k_selectionproxymodel_index(const void* self, int param1, int param2, const void* param3);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(const KSelectionProxyModel* self, int param1, int param2, QModelIndex* param3)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param param1 int
/// @param param2 int
/// @param param3 QModelIndex*
///
QModelIndex* k_selectionproxymodel_super_index(const void* self, int param1, int param2, const void* param3);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#parent)
///
/// @param self const KSelectionProxyModel*
/// @param param1 QModelIndex*
///
QModelIndex* k_selectionproxymodel_parent(const void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(const KSelectionProxyModel* self, QModelIndex* param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param param1 QModelIndex*
///
QModelIndex* k_selectionproxymodel_super_parent(const void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#columnCount)
///
/// @param self const KSelectionProxyModel*
/// @param param1 QModelIndex*
///
int32_t k_selectionproxymodel_column_count(const void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback int32_t func(const KSelectionProxyModel* self, QModelIndex* param1)
///
void k_selectionproxymodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param param1 QModelIndex*
///
int32_t k_selectionproxymodel_super_column_count(const void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#match)
///
/// @param self const KSelectionProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_selectionproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#match)
///
/// Allows for overriding the related default method
///
/// @param self const KSelectionProxyModel*
/// @param callback libqt_list of QModelIndex* func(const KSelectionProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_selectionproxymodel_on_match(const void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#match)
///
/// Base class method implementation
///
/// @param self const KSelectionProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_selectionproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#sourceRootIndexes)
///
/// @param self const KSelectionProxyModel*
///
/// @return libqt_list of QPersistentModelIndex*
///
libqt_list k_selectionproxymodel_source_root_indexes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_selectionproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_selectionproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self const KSelectionProxyModel*
///
QAbstractItemModel* k_selectionproxymodel_source_model(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param column int
///
bool k_selectionproxymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KSelectionProxyModel*
/// @param row int
///
bool k_selectionproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KSelectionProxyModel*
/// @param column int
///
bool k_selectionproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KSelectionProxyModel*
/// @param row int
///
bool k_selectionproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KSelectionProxyModel*
/// @param column int
///
bool k_selectionproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_selectionproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_selectionproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
bool k_selectionproxymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KSelectionProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_selectionproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_selectionproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KSelectionProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_selectionproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_selectionproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_selectionproxymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KSelectionProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_selectionproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_selectionproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KSelectionProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_selectionproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_selectionproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KSelectionProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_selectionproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_selectionproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KSelectionProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_selectionproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_selectionproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KSelectionProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_selectionproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_selectionproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSelectionProxyModel*
///
const char* k_selectionproxymodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSelectionProxyModel*
/// @param name const char*
///
void k_selectionproxymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KSelectionProxyModel*
///
bool k_selectionproxymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KSelectionProxyModel*
///
bool k_selectionproxymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KSelectionProxyModel*
///
bool k_selectionproxymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KSelectionProxyModel*
///
bool k_selectionproxymodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSelectionProxyModel*
/// @param b bool
///
bool k_selectionproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KSelectionProxyModel*
///
QThread* k_selectionproxymodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSelectionProxyModel*
/// @param thread QThread*
///
bool k_selectionproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectionProxyModel*
/// @param interval int
///
int32_t k_selectionproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectionProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t k_selectionproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelectionProxyModel*
/// @param id int
///
void k_selectionproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelectionProxyModel*
/// @param id enum Qt__TimerId
///
void k_selectionproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KSelectionProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_selectionproxymodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSelectionProxyModel*
/// @param parent QObject*
///
void k_selectionproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSelectionProxyModel*
/// @param filterObj QObject*
///
void k_selectionproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSelectionProxyModel*
/// @param obj QObject*
///
void k_selectionproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_selectionproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_selectionproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KSelectionProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_selectionproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_selectionproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_selectionproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSelectionProxyModel*
///
bool k_selectionproxymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSelectionProxyModel*
/// @param receiver QObject*
///
bool k_selectionproxymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_selectionproxymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KSelectionProxyModel*
///
void k_selectionproxymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KSelectionProxyModel*
///
void k_selectionproxymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSelectionProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_selectionproxymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KSelectionProxyModel*
/// @param name const char*
///
QVariant* k_selectionproxymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSelectionProxyModel*
///
const char** k_selectionproxymodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSelectionProxyModel*
///
QBindingStorage* k_selectionproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KSelectionProxyModel*
///
const QBindingStorage* k_selectionproxymodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KSelectionProxyModel*
/// @param classname const char*
///
bool k_selectionproxymodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectionProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_selectionproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectionProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_selectionproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_selectionproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_selectionproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KSelectionProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_selectionproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSelectionProxyModel*
/// @param signal const char*
///
bool k_selectionproxymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSelectionProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_selectionproxymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSelectionProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_selectionproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSelectionProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_selectionproxymodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionProxyModel*
/// @param param1 QObject*
///
void k_selectionproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QObject* param1)
///
void k_selectionproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
bool k_selectionproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
bool k_selectionproxymodel_super_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_revert(void* self, void (*callback)(void*));

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
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_selectionproxymodel_item_data(const void* self, const void* index);

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
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_selectionproxymodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback libqt_map of int to QVariant* func(KSelectionProxyModel* self, QModelIndex* index)
///
void k_selectionproxymodel_on_item_data(const void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_selectionproxymodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_selectionproxymodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_selectionproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_selectionproxymodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_selectionproxymodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_selectionproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_selectionproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_selectionproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_selectionproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param index QModelIndex*
///
bool k_selectionproxymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param index QModelIndex*
///
bool k_selectionproxymodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* index)
///
void k_selectionproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_selectionproxymodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_selectionproxymodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(KSelectionProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* parent)
///
void k_selectionproxymodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
///
void k_selectionproxymodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
///
void k_selectionproxymodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent)
///
void k_selectionproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_selectionproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_selectionproxymodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, int column, enum Qt__SortOrder order)
///
void k_selectionproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
QSize* k_selectionproxymodel_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
///
QSize* k_selectionproxymodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback QSize* func(KSelectionProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_span(const void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_selectionproxymodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_selectionproxymodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(KSelectionProxyModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_selectionproxymodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_selectionproxymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_selectionproxymodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback int32_t func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*));

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
/// @param self const KSelectionProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_selectionproxymodel_role_names(const void* self);

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
/// @param self const KSelectionProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_selectionproxymodel_super_role_names(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback libqt_map of int to char* func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_role_names(const void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_selectionproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_selectionproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_selectionproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_selectionproxymodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_selectionproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_selectionproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_selectionproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_selectionproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_selectionproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_selectionproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_selectionproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_selectionproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_selectionproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_selectionproxymodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QEvent*
///
bool k_selectionproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QEvent*
///
bool k_selectionproxymodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QEvent* event)
///
void k_selectionproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_selectionproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_selectionproxymodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QObject* watched, QEvent* event)
///
void k_selectionproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QTimerEvent*
///
void k_selectionproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QTimerEvent*
///
void k_selectionproxymodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QTimerEvent* event)
///
void k_selectionproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QChildEvent*
///
void k_selectionproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QChildEvent*
///
void k_selectionproxymodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QChildEvent* event)
///
void k_selectionproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QEvent*
///
void k_selectionproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param event QEvent*
///
void k_selectionproxymodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QEvent* event)
///
void k_selectionproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param signal QMetaMethod*
///
void k_selectionproxymodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param signal QMetaMethod*
///
void k_selectionproxymodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QMetaMethod* signal)
///
void k_selectionproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param signal QMetaMethod*
///
void k_selectionproxymodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param signal QMetaMethod*
///
void k_selectionproxymodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QMetaMethod* signal)
///
void k_selectionproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_selectionproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_selectionproxymodel_super_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(KSelectionProxyModel* self, int row, int col, void* internalPtr)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_create_source_index(const void* self, QModelIndex* (*callback)(const void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_selectionproxymodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_selectionproxymodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback QModelIndex* func(KSelectionProxyModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_selectionproxymodel_on_create_index(const void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_selectionproxymodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_selectionproxymodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_selectionproxymodel_on_encode_data(const void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_selectionproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_selectionproxymodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_selectionproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_selectionproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_selectionproxymodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_selectionproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_selectionproxymodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_selectionproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_selectionproxymodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_selectionproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_selectionproxymodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_selectionproxymodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_selectionproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_selectionproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_selectionproxymodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_selectionproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_selectionproxymodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_selectionproxymodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback libqt_list of QModelIndex* func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_persistent_index_list(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
QObject* k_selectionproxymodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
QObject* k_selectionproxymodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback QObject* func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
int32_t k_selectionproxymodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
///
int32_t k_selectionproxymodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback int32_t func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param signal const char*
///
int32_t k_selectionproxymodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param signal const char*
///
int32_t k_selectionproxymodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback int32_t func(KSelectionProxyModel* self, const char* signal)
///
void k_selectionproxymodel_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param signal QMetaMethod*
///
bool k_selectionproxymodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param signal QMetaMethod*
///
bool k_selectionproxymodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSelectionProxyModel*
/// @param callback bool func(KSelectionProxyModel* self, QMetaMethod* signal)
///
void k_selectionproxymodel_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#rootIndexAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* removeRootIndex)
///
void k_selectionproxymodel_on_root_index_about_to_be_removed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#rootIndexAdded)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* newIndex)
///
void k_selectionproxymodel_on_root_index_added(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#rootSelectionAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QItemSelection* selection)
///
void k_selectionproxymodel_on_root_selection_about_to_be_removed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#rootSelectionAdded)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QItemSelection* selection)
///
void k_selectionproxymodel_on_root_selection_added(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#selectionModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_selection_model_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#filterBehaviorChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_filter_behavior_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_selectionproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self)
///
void k_selectionproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_selectionproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_selectionproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_selectionproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_selectionproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionProxyModel*
/// @param callback void func(KSelectionProxyModel* self, const char* objectName)
///
void k_selectionproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#dtor.KSelectionProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KSelectionProxyModel*
///
void k_selectionproxymodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/kselectionproxymodel.html#public-types)

typedef enum {
    KSELECTIONPROXYMODEL_FILTERBEHAVIOR_SUBTREES = 0,
    KSELECTIONPROXYMODEL_FILTERBEHAVIOR_SUBTREEROOTS = 1,
    KSELECTIONPROXYMODEL_FILTERBEHAVIOR_SUBTREESWITHOUTROOTS = 2,
    KSELECTIONPROXYMODEL_FILTERBEHAVIOR_EXACTSELECTION = 3,
    KSELECTIONPROXYMODEL_FILTERBEHAVIOR_CHILDRENOFEXACTSELECTION = 4,
    KSELECTIONPROXYMODEL_FILTERBEHAVIOR_INVALIDBEHAVIOR = 5
} KSelectionProxyModel__FilterBehavior;

#endif
