#pragma once
#ifndef SRC_EXTRAS_KITEMMODELS_QT6C_LIBKDESCENDANTSPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELS_QT6C_LIBKDESCENDANTSPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self KDescendantsProxyModel*
///
const QMetaObject* k_descendantsproxymodel_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback const QMetaObject* func()
///
void k_descendantsproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
///
const QMetaObject* k_descendantsproxymodel_qbase_meta_object(void* self);

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
void* k_descendantsproxymodel_qbase_metacast(void* self, const char* param1);

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
int32_t k_descendantsproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
void k_descendantsproxymodel_qbase_set_source_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setDisplayAncestorData)
///
/// @param self KDescendantsProxyModel*
/// @param display bool
///
void k_descendantsproxymodel_set_display_ancestor_data(void* self, bool display);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#displayAncestorData)
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_display_ancestor_data(void* self);

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
/// @param self KDescendantsProxyModel*
///
const char* k_descendantsproxymodel_ancestor_separator(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapFromSource)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, QModelIndex* sourceIndex)
///
void k_descendantsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapToSource)
///
/// @param self KDescendantsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, QModelIndex* proxyIndex)
///
void k_descendantsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_descendantsproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#flags)
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_descendantsproxymodel_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_descendantsproxymodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#data)
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_descendantsproxymodel_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QVariant* func(KDescendantsProxyModel* self, QModelIndex* index, int role)
///
void k_descendantsproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_descendantsproxymodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#rowCount)
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_descendantsproxymodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_descendantsproxymodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#headerData)
///
/// @param self KDescendantsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_descendantsproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QVariant* func(KDescendantsProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_descendantsproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_descendantsproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeData)
///
/// @param self KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_descendantsproxymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QMimeData* func(KDescendantsProxyModel* self, QModelIndex** indexes)
///
void k_descendantsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_descendantsproxymodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDescendantsProxyModel*
///
const char** k_descendantsproxymodel_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback const char** func()
///
void k_descendantsproxymodel_on_mime_types(void* self, const char** (*callback)());

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
///
const char** k_descendantsproxymodel_qbase_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#hasChildren)
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_qbase_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#index)
///
/// @param self KDescendantsProxyModel*
/// @param param1 int
/// @param param2 int
/// @param parent QModelIndex*
///
QModelIndex* k_descendantsproxymodel_index(void* self, int param1, int param2, void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, int param1, int param2, QModelIndex* parent)
///
void k_descendantsproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param param1 int
/// @param param2 int
/// @param parent QModelIndex*
///
QModelIndex* k_descendantsproxymodel_qbase_index(void* self, int param1, int param2, void* parent);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#parent)
///
/// @param self KDescendantsProxyModel*
/// @param param1 QModelIndex*
///
QModelIndex* k_descendantsproxymodel_parent(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, QModelIndex* param1)
///
void k_descendantsproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param param1 QModelIndex*
///
QModelIndex* k_descendantsproxymodel_qbase_parent(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#columnCount)
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
int32_t k_descendantsproxymodel_column_count(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
int32_t k_descendantsproxymodel_qbase_column_count(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#roleNames)
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
/// @param self KDescendantsProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_descendantsproxymodel_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback libqt_map of int to char* func()
///
void k_descendantsproxymodel_on_role_names(void* self, libqt_map (*callback)());

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_descendantsproxymodel_qbase_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#setExpandsByDefault)
///
/// @param self KDescendantsProxyModel*
/// @param expand bool
///
void k_descendantsproxymodel_set_expands_by_default(void* self, bool expand);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#expandsByDefault)
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_expands_by_default(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#isSourceIndexExpanded)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
bool k_descendantsproxymodel_is_source_index_expanded(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#isSourceIndexVisible)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
bool k_descendantsproxymodel_is_source_index_visible(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#expandSourceIndex)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
void k_descendantsproxymodel_expand_source_index(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#collapseSourceIndex)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
void k_descendantsproxymodel_collapse_source_index(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#supportedDropActions)
///
/// @param self KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_supported_drop_actions(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func()
///
void k_descendantsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_qbase_supported_drop_actions(void* self);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#match)
///
/// @param self KDescendantsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#match)
///
/// Allows for overriding the related default method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex** func(KDescendantsProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_descendantsproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#match)
///
/// Base class method implementation
///
/// @param self KDescendantsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

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
void k_descendantsproxymodel_source_index_expanded(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceIndexExpanded)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceIndex)
///
void k_descendantsproxymodel_on_source_index_expanded(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceIndexCollapsed)
///
/// @param self KDescendantsProxyModel*
/// @param sourceIndex QModelIndex*
///
void k_descendantsproxymodel_source_index_collapsed(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/kdescendantsproxymodel.html#sourceIndexCollapsed)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceIndex)
///
void k_descendantsproxymodel_on_source_index_collapsed(void* self, void (*callback)(void*, void*));

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
/// @param self KDescendantsProxyModel*
///
QAbstractItemModel* k_descendantsproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
///
bool k_descendantsproxymodel_has_index(void* self, int row, int column);

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
bool k_descendantsproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

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
bool k_descendantsproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
bool k_descendantsproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_descendantsproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_descendantsproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

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
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KDescendantsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_descendantsproxymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_descendantsproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* )
///
void k_descendantsproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_descendantsproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QPersistentModelIndex** parents)
///
void k_descendantsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_descendantsproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_descendantsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_descendantsproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QPersistentModelIndex** parents)
///
void k_descendantsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_descendantsproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_descendantsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDescendantsProxyModel*
///
const char* k_descendantsproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDescendantsProxyModel*
/// @param name char*
///
void k_descendantsproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_signals_blocked(void* self);

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
/// @param self KDescendantsProxyModel*
///
QThread* k_descendantsproxymodel_thread(void* self);

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
/// @param self KDescendantsProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_descendantsproxymodel_children(void* self);

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
QMetaObject__Connection* k_descendantsproxymodel_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_descendantsproxymodel_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDescendantsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_descendantsproxymodel_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_descendantsproxymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_descendantsproxymodel_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDescendantsProxyModel*
///
bool k_descendantsproxymodel_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDescendantsProxyModel*
/// @param receiver QObject*
///
bool k_descendantsproxymodel_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_descendantsproxymodel_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDescendantsProxyModel*
///
void k_descendantsproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDescendantsProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_descendantsproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDescendantsProxyModel*
/// @param name const char*
///
QVariant* k_descendantsproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDescendantsProxyModel*
///
const char** k_descendantsproxymodel_dynamic_property_names(void* self);

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
/// @param self KDescendantsProxyModel*
///
const QBindingStorage* k_descendantsproxymodel_binding_storage2(void* self);

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
/// @param self KDescendantsProxyModel*
/// @param classname const char*
///
bool k_descendantsproxymodel_inherits(void* self, const char* classname);

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
QMetaObject__Connection* k_descendantsproxymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_descendantsproxymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDescendantsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_descendantsproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDescendantsProxyModel*
/// @param signal const char*
///
bool k_descendantsproxymodel_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDescendantsProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_descendantsproxymodel_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDescendantsProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_descendantsproxymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDescendantsProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_descendantsproxymodel_disconnect23(void* self, void* receiver, const char* member);

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
/// @param self KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_map_selection_to_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_qbase_map_selection_to_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QItemSelection* func(KDescendantsProxyModel* self, QItemSelection* selection)
///
void k_descendantsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_map_selection_from_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_descendantsproxymodel_qbase_map_selection_from_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QItemSelection* func(KDescendantsProxyModel* self, QItemSelection* selection)
///
void k_descendantsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

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
bool k_descendantsproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func()
///
void k_descendantsproxymodel_on_submit(void* self, bool (*callback)());

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
void k_descendantsproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_revert(void* self, void (*callback)());

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
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_descendantsproxymodel_item_data(void* self, void* index);

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
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_descendantsproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback libqt_map of int to QVariant* func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

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
bool k_descendantsproxymodel_set_data(void* self, void* index, void* value, int role);

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
bool k_descendantsproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_descendantsproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

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
bool k_descendantsproxymodel_set_item_data(void* self, void* index, libqt_map roles);

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
bool k_descendantsproxymodel_qbase_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* index, libqt_map of int to QVariant*)
///
void k_descendantsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

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
bool k_descendantsproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

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
bool k_descendantsproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_descendantsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
bool k_descendantsproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
bool k_descendantsproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_descendantsproxymodel_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_descendantsproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
bool k_descendantsproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
void k_descendantsproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param parent QModelIndex*
///
void k_descendantsproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent)
///
void k_descendantsproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

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
void k_descendantsproxymodel_qbase_sort(void* self, int column, int32_t order);

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
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
QSize* k_descendantsproxymodel_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
///
QSize* k_descendantsproxymodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QSize* func(KDescendantsProxyModel* self, QModelIndex* index)
///
void k_descendantsproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_descendantsproxymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_descendantsproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, int row, int column, QModelIndex* idx)
///
void k_descendantsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
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
bool k_descendantsproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
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
bool k_descendantsproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_descendantsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

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
bool k_descendantsproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

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
bool k_descendantsproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_descendantsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_descendantsproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func()
///
void k_descendantsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

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
bool k_descendantsproxymodel_insert_rows(void* self, int row, int count, void* parent);

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
bool k_descendantsproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_descendantsproxymodel_insert_columns(void* self, int column, int count, void* parent);

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
bool k_descendantsproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_descendantsproxymodel_remove_rows(void* self, int row, int count, void* parent);

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
bool k_descendantsproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_descendantsproxymodel_remove_columns(void* self, int column, int count, void* parent);

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
bool k_descendantsproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_descendantsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool k_descendantsproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

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
bool k_descendantsproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_descendantsproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
bool k_descendantsproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

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
bool k_descendantsproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_descendantsproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_descendantsproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_descendantsproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_descendantsproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

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
void k_descendantsproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_reset_internal_data(void* self, void (*callback)());

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
bool k_descendantsproxymodel_qbase_event(void* self, void* event);

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
bool k_descendantsproxymodel_qbase_event_filter(void* self, void* watched, void* event);

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
void k_descendantsproxymodel_qbase_timer_event(void* self, void* event);

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
void k_descendantsproxymodel_qbase_child_event(void* self, void* event);

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
void k_descendantsproxymodel_qbase_custom_event(void* self, void* event);

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
void k_descendantsproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
void k_descendantsproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QMetaMethod* signal)
///
void k_descendantsproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
void k_descendantsproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
void k_descendantsproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QMetaMethod* signal)
///
void k_descendantsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_descendantsproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_descendantsproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, int row, int col, void* internalPtr)
///
void k_descendantsproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_descendantsproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_descendantsproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex* func(KDescendantsProxyModel* self, int row, int column)
///
void k_descendantsproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_descendantsproxymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_descendantsproxymodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex** indexes, QDataStream* stream)
///
void k_descendantsproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

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
bool k_descendantsproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

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
bool k_descendantsproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_descendantsproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

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
void k_descendantsproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

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
void k_descendantsproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

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
void k_descendantsproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_end_insert_rows(void* self, void (*callback)());

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
void k_descendantsproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

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
void k_descendantsproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

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
void k_descendantsproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_end_remove_rows(void* self, void (*callback)());

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
bool k_descendantsproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

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
bool k_descendantsproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_descendantsproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void k_descendantsproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_end_move_rows(void* self, void (*callback)());

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
void k_descendantsproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

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
void k_descendantsproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

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
void k_descendantsproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_end_insert_columns(void* self, void (*callback)());

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
void k_descendantsproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

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
void k_descendantsproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

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
void k_descendantsproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_end_remove_columns(void* self, void (*callback)());

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
bool k_descendantsproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

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
bool k_descendantsproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_descendantsproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void k_descendantsproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_end_move_columns(void* self, void (*callback)());

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
void k_descendantsproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_begin_reset_model(void* self, void (*callback)());

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
void k_descendantsproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func()
///
void k_descendantsproxymodel_on_end_reset_model(void* self, void (*callback)());

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
void k_descendantsproxymodel_change_persistent_index(void* self, void* from, void* to);

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
void k_descendantsproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_descendantsproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

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
void k_descendantsproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);

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
void k_descendantsproxymodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex** from, QModelIndex** to)
///
void k_descendantsproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_descendantsproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QModelIndex** func()
///
void k_descendantsproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
QObject* k_descendantsproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
QObject* k_descendantsproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback QObject* func()
///
void k_descendantsproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
int32_t k_descendantsproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
///
int32_t k_descendantsproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func()
///
void k_descendantsproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal const char*
///
int32_t k_descendantsproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal const char*
///
int32_t k_descendantsproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback int32_t func(KDescendantsProxyModel* self, const char* signal)
///
void k_descendantsproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
bool k_descendantsproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param signal QMetaMethod*
///
bool k_descendantsproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDescendantsProxyModel*
/// @param callback bool func(KDescendantsProxyModel* self, QMetaMethod* signal)
///
void k_descendantsproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_descendantsproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

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
void k_descendantsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_descendantsproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_descendantsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDescendantsProxyModel*
/// @param callback void func(KDescendantsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_descendantsproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

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
