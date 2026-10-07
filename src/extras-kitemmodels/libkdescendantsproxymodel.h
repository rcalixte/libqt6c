#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKDESCENDANTSPROXYMODEL_H
#define EXTRAS_KITEMMODELS_LIBKDESCENDANTSPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html)

/// k_descendantsproxymodel_new constructs a new KDescendantsProxyModel object.
///
KDescendantsProxyModel* k_descendantsproxymodel_new();

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html)

/// k_descendantsproxymodel_new2 constructs a new KDescendantsProxyModel object.
///
/// @param parent QObject*
///
KDescendantsProxyModel* k_descendantsproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KDescendantsProxyModel*
///
const QMetaObject* k_descendantsproxymodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback const QMetaObject* func(const KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
///
const QMetaObject* k_descendantsproxymodel_super_meta_object(const void* self);

/// @param self KDescendantsProxyModel*
/// @param param1 const char*
///
void* k_descendantsproxymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback void* func(KDescendantsProxyModel* self, const char* param1)
///
void k_descendantsproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param param1 const char*
///
void* k_descendantsproxymodel_super_metacast(void* self, const char* param1);

/// @param self KDescendantsProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_descendantsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_descendantsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_descendantsproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_descendantsproxymodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setSourceModel)
///
/// @param self KDescendantsProxyModel*
/// @param model QAbstractItemModel*
///
void k_descendantsproxymodel_set_source_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QAbstractItemModel* model)
///
void k_descendantsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param model QAbstractItemModel*
///
void k_descendantsproxymodel_super_set_source_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setDisplayAncestorData)
///
/// @param self KDescendantsProxyModel*
/// @param display bool
///
void k_descendantsproxymodel_set_display_ancestor_data(void* self, bool display);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#displayAncestorData)
///
/// @param self const KDescendantsProxyModel*
///
bool k_descendantsproxymodel_display_ancestor_data(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setAncestorSeparator)
///
/// @param self KDescendantsProxyModel*
/// @param separator const char*
///
void k_descendantsproxymodel_set_ancestor_separator(void* self, const char* separator);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#ancestorSeparator)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDescendantsProxyModel*
///
const char* k_descendantsproxymodel_ancestor_separator(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapFromSource)
///
/// @param self const KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(const KDescendantsProxyModel* self, QModelIndex* sourceIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_super_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapToSource)
///
/// @param self const KDescendantsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(const KDescendantsProxyModel* self, QModelIndex* proxyIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_super_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#flags)
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_descendantsproxymodel_flags(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(const KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_descendantsproxymodel_super_flags(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#data)
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_descendantsproxymodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QVariant* func(const KDescendantsProxyModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_descendantsproxymodel_super_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#rowCount)
///
/// @param self const KDescendantsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_descendantsproxymodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(const KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_descendantsproxymodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#headerData)
///
/// @param self const KDescendantsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_descendantsproxymodel_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QVariant* func(const KDescendantsProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_descendantsproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeData)
///
/// @param self const KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_descendantsproxymodel_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QMimeData* func(const KDescendantsProxyModel* self, libqt_list of QModelIndex* indexes)
///
void k_descendantsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_descendantsproxymodel_super_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KDescendantsProxyModel*
///
const char** k_descendantsproxymodel_mime_types(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback const char** func(const KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_mime_types(void* self, const char** (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
///
const char** k_descendantsproxymodel_super_mime_types(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#hasChildren)
///
/// @param self const KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_has_children(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(const KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_has_children(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#index)
///
/// @param self const KDescendantsProxyModel*
/// @param param1 int
/// @param param2 int
/// @param parent QModelIndex*
///
QModelIndex* k_descendantsproxymodel_index(const void* self, int param1, int param2, const void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(const KDescendantsProxyModel* self, int param1, int param2, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param param1 int
/// @param param2 int
/// @param parent QModelIndex*
///
QModelIndex* k_descendantsproxymodel_super_index(const void* self, int param1, int param2, const void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#parent)
///
/// @param self const KDescendantsProxyModel*
/// @param param1 QModelIndex*
///
QModelIndex* k_descendantsproxymodel_parent(const void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(const KDescendantsProxyModel* self, QModelIndex* param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param param1 QModelIndex*
///
QModelIndex* k_descendantsproxymodel_super_parent(const void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#columnCount)
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
int32_t k_descendantsproxymodel_column_count(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(const KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
int32_t k_descendantsproxymodel_super_column_count(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const KDescendantsProxyModel*
///
/// @return libqt_map of int to const char*
///
libqt_map k_descendantsproxymodel_role_names(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback libqt_map of int to const char* func(const KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_role_names(void* self, libqt_map (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
///
/// @return libqt_map of int to const char*
///
libqt_map k_descendantsproxymodel_super_role_names(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setExpandsByDefault)
///
/// @param self KDescendantsProxyModel*
/// @param expand bool
///
void k_descendantsproxymodel_set_expands_by_default(void* self, bool expand);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#expandsByDefault)
///
/// @param self const KDescendantsProxyModel*
///
bool k_descendantsproxymodel_expands_by_default(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#isSourceIndexExpanded)
///
/// @param self const KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
bool k_descendantsproxymodel_is_source_index_expanded(const void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#isSourceIndexVisible)
///
/// @param self const KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
bool k_descendantsproxymodel_is_source_index_visible(const void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#expandSourceIndex)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
void k_descendantsproxymodel_expand_source_index(void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#collapseSourceIndex)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
void k_descendantsproxymodel_collapse_source_index(void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#supportedDropActions)
///
/// @param self const KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_supported_drop_actions(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(const KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_super_supported_drop_actions(const void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#match)
///
/// @param self const KDescendantsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#match)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback libqt_list of QModelIndex* func(const KDescendantsProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_descendantsproxymodel_on_match(void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#match)
///
/// Base class method implementation
///
/// @param self const KDescendantsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceModelChanged)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_source_model_changed(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceModelChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#displayAncestorDataChanged)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_display_ancestor_data_changed(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#displayAncestorDataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_display_ancestor_data_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#ancestorSeparatorChanged)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_ancestor_separator_changed(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#ancestorSeparatorChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_ancestor_separator_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#expandsByDefaultChanged)
///
/// @param self KDescendantsProxyModel*
/// @param expands bool
///
void k_descendantsproxymodel_expands_by_default_changed(void* self, bool expands);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#expandsByDefaultChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, bool expands)
///
void k_descendantsproxymodel_on_expands_by_default_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceIndexExpanded)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
void k_descendantsproxymodel_source_index_expanded(void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceIndexExpanded)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceIndex)
///
void k_descendantsproxymodel_on_source_index_expanded(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceIndexCollapsed)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
void k_descendantsproxymodel_source_index_collapsed(void* self, const void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceIndexCollapsed)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceIndex)
///
void k_descendantsproxymodel_on_source_index_collapsed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_descendantsproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_descendantsproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self const KDescendantsProxyModel*
///
QAbstractItemModel* k_descendantsproxymodel_source_model(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param column int
///
bool k_descendantsproxymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KDescendantsProxyModel*
/// @param row int
///
bool k_descendantsproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KDescendantsProxyModel*
/// @param column int
///
bool k_descendantsproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KDescendantsProxyModel*
/// @param row int
///
bool k_descendantsproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KDescendantsProxyModel*
/// @param column int
///
bool k_descendantsproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_descendantsproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_descendantsproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
bool k_descendantsproxymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_descendantsproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_descendantsproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_descendantsproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_descendantsproxymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_descendantsproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_descendantsproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_descendantsproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_descendantsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_descendantsproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_descendantsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_descendantsproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_descendantsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_descendantsproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_descendantsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDescendantsProxyModel*
///
const char* k_descendantsproxymodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDescendantsProxyModel*
/// @param name const char*
///
void k_descendantsproxymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KDescendantsProxyModel*
///
bool k_descendantsproxymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KDescendantsProxyModel*
///
bool k_descendantsproxymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KDescendantsProxyModel*
///
bool k_descendantsproxymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KDescendantsProxyModel*
///
bool k_descendantsproxymodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDescendantsProxyModel*
/// @param b bool
///
bool k_descendantsproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KDescendantsProxyModel*
///
QThread* k_descendantsproxymodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDescendantsProxyModel*
/// @param thread QThread*
///
bool k_descendantsproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDescendantsProxyModel*
/// @param interval int
///
int32_t k_descendantsproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDescendantsProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t k_descendantsproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDescendantsProxyModel*
/// @param id int
///
void k_descendantsproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDescendantsProxyModel*
/// @param id enum Qt__TimerId
///
void k_descendantsproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KDescendantsProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_descendantsproxymodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDescendantsProxyModel*
/// @param parent QObject*
///
void k_descendantsproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDescendantsProxyModel*
/// @param filterObj QObject*
///
void k_descendantsproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDescendantsProxyModel*
/// @param obj QObject*
///
void k_descendantsproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_descendantsproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_descendantsproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KDescendantsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_descendantsproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_descendantsproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_descendantsproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDescendantsProxyModel*
///
bool k_descendantsproxymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDescendantsProxyModel*
/// @param receiver QObject*
///
bool k_descendantsproxymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_descendantsproxymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KDescendantsProxyModel*
///
void k_descendantsproxymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KDescendantsProxyModel*
///
void k_descendantsproxymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDescendantsProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_descendantsproxymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KDescendantsProxyModel*
/// @param name const char*
///
QVariant* k_descendantsproxymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KDescendantsProxyModel*
///
const char** k_descendantsproxymodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDescendantsProxyModel*
///
QBindingStorage* k_descendantsproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KDescendantsProxyModel*
///
const QBindingStorage* k_descendantsproxymodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KDescendantsProxyModel*
/// @param classname const char*
///
bool k_descendantsproxymodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDescendantsProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_descendantsproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDescendantsProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_descendantsproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_descendantsproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_descendantsproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KDescendantsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_descendantsproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDescendantsProxyModel*
/// @param signal const char*
///
bool k_descendantsproxymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDescendantsProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_descendantsproxymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDescendantsProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_descendantsproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KDescendantsProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_descendantsproxymodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDescendantsProxyModel*
/// @param param1 QObject*
///
void k_descendantsproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QObject* param1)
///
void k_descendantsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_map_selection_to_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_super_map_selection_to_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QItemSelection* func(KDescendantsProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_map_selection_from_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_super_map_selection_from_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QItemSelection* func(KDescendantsProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_super_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_revert(void* self, void (*callback)(void*));

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
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_descendantsproxymodel_item_data(const void* self, const void* index);

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
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_descendantsproxymodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback libqt_map of int to QVariant* func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_item_data(void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_descendantsproxymodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_descendantsproxymodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_descendantsproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_descendantsproxymodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_descendantsproxymodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_descendantsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_descendantsproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_descendantsproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_descendantsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
bool k_descendantsproxymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
bool k_descendantsproxymodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_descendantsproxymodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_descendantsproxymodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
void k_descendantsproxymodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
void k_descendantsproxymodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_descendantsproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_descendantsproxymodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, int column, enum Qt__SortOrder order)
///
void k_descendantsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
QSize* k_descendantsproxymodel_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
///
QSize* k_descendantsproxymodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QSize* func(KDescendantsProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_descendantsproxymodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_descendantsproxymodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_descendantsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_descendantsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_descendantsproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_descendantsproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_descendantsproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_descendantsproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_descendantsproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_descendantsproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_descendantsproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_descendantsproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_descendantsproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QEvent*
///
bool k_descendantsproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QEvent*
///
bool k_descendantsproxymodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QEvent* event)
///
void k_descendantsproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_descendantsproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_descendantsproxymodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QObject* watched, QEvent* event)
///
void k_descendantsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QTimerEvent*
///
void k_descendantsproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QTimerEvent*
///
void k_descendantsproxymodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QTimerEvent* event)
///
void k_descendantsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QChildEvent*
///
void k_descendantsproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QChildEvent*
///
void k_descendantsproxymodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QChildEvent* event)
///
void k_descendantsproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QEvent*
///
void k_descendantsproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param event QEvent*
///
void k_descendantsproxymodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QEvent* event)
///
void k_descendantsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
void k_descendantsproxymodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
void k_descendantsproxymodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QMetaMethod* signal)
///
void k_descendantsproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
void k_descendantsproxymodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
void k_descendantsproxymodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QMetaMethod* signal)
///
void k_descendantsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_descendantsproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_descendantsproxymodel_super_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, int row, int col, void* internalPtr)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(const void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_descendantsproxymodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_descendantsproxymodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_descendantsproxymodel_on_create_index(void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_descendantsproxymodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_descendantsproxymodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_descendantsproxymodel_on_encode_data(void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_descendantsproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_descendantsproxymodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_descendantsproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_descendantsproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_descendantsproxymodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_descendantsproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_descendantsproxymodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_descendantsproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_descendantsproxymodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_descendantsproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_descendantsproxymodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_descendantsproxymodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_descendantsproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_descendantsproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_descendantsproxymodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_descendantsproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback libqt_list of QModelIndex* func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_persistent_index_list(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
QObject* k_descendantsproxymodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
QObject* k_descendantsproxymodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QObject* func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
int32_t k_descendantsproxymodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
///
int32_t k_descendantsproxymodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param signal const char*
///
int32_t k_descendantsproxymodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param signal const char*
///
int32_t k_descendantsproxymodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self, const char* signal)
///
void k_descendantsproxymodel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
bool k_descendantsproxymodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
bool k_descendantsproxymodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QMetaMethod* signal)
///
void k_descendantsproxymodel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self)
///
void k_descendantsproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_descendantsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_descendantsproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_descendantsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_descendantsproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, const char* objectName)
///
void k_descendantsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#dtor.KDescendantsProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#public-types)

typedef enum {
    KDESCENDANTSPROXYMODEL_ADDITIONALROLES_LEVELROLE = 344080282,
    KDESCENDANTSPROXYMODEL_ADDITIONALROLES_EXPANDABLEROLE = 480810157,
    KDESCENDANTSPROXYMODEL_ADDITIONALROLES_EXPANDEDROLE = 507592100,
    KDESCENDANTSPROXYMODEL_ADDITIONALROLES_HASSIBLINGSROLE = 372493836
} KDescendantsProxyModel__AdditionalRoles;

#endif
