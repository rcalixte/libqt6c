#pragma once
#ifndef LIBQFILESYSTEMMODEL_H
#define LIBQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html)

/// q_filesystemmodel_new constructs a new QFileSystemModel object.
///
QFileSystemModel* q_filesystemmodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html)

/// q_filesystemmodel_new2 constructs a new QFileSystemModel object.
///
/// @param parent QObject*
///
QFileSystemModel* q_filesystemmodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QFileSystemModel*
///
const QMetaObject* q_filesystemmodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback const QMetaObject* func(const QFileSystemModel* self)
///
void q_filesystemmodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
///
const QMetaObject* q_filesystemmodel_super_meta_object(const void* self);

/// @param self QFileSystemModel*
/// @param param1 const char*
///
void* q_filesystemmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback void* func(QFileSystemModel* self, const char* param1)
///
void q_filesystemmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param param1 const char*
///
void* q_filesystemmodel_super_metacast(void* self, const char* param1);

/// @param self QFileSystemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_filesystemmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_filesystemmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_filesystemmodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_filesystemmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPathChanged)
///
/// @param self QFileSystemModel*
/// @param newPath const char*
///
void q_filesystemmodel_root_path_changed(void* self, const char* newPath);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPathChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* newPath)
///
void q_filesystemmodel_on_root_path_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileRenamed)
///
/// @param self QFileSystemModel*
/// @param path const char*
/// @param oldName const char*
/// @param newName const char*
///
void q_filesystemmodel_file_renamed(void* self, const char* path, const char* oldName, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileRenamed)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* path, const char* oldName, const char* newName)
///
void q_filesystemmodel_on_file_renamed(void* self, void (*callback)(void*, const char*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#directoryLoaded)
///
/// @param self QFileSystemModel*
/// @param path const char*
///
void q_filesystemmodel_directory_loaded(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#directoryLoaded)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* path)
///
void q_filesystemmodel_on_directory_loaded(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_filesystemmodel_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(const QFileSystemModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_filesystemmodel_super_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// @param self const QFileSystemModel*
/// @param path const char*
///
QModelIndex* q_filesystemmodel_index2(const void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// @param self const QFileSystemModel*
/// @param child QModelIndex*
///
QModelIndex* q_filesystemmodel_parent(const void* self, const void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(const QFileSystemModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param child QModelIndex*
///
QModelIndex* q_filesystemmodel_super_parent(const void* self, const void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_filesystemmodel_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(const QFileSystemModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_filesystemmodel_super_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
bool q_filesystemmodel_has_children(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(const QFileSystemModel* self, QModelIndex* parent)
///
void q_filesystemmodel_on_has_children(void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_has_children(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
bool q_filesystemmodel_can_fetch_more(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(const QFileSystemModel* self, QModelIndex* parent)
///
void q_filesystemmodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_can_fetch_more(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
///
void q_filesystemmodel_fetch_more(void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent)
///
void q_filesystemmodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
///
void q_filesystemmodel_super_fetch_more(void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
int32_t q_filesystemmodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(const QFileSystemModel* self, QModelIndex* parent)
///
void q_filesystemmodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
int32_t q_filesystemmodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
int32_t q_filesystemmodel_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(const QFileSystemModel* self, QModelIndex* parent)
///
void q_filesystemmodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param parent QModelIndex*
///
int32_t q_filesystemmodel_super_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// @param self const QFileSystemModel*
///
QVariant* q_filesystemmodel_my_computer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_filesystemmodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QVariant* func(const QFileSystemModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_filesystemmodel_super_data(const void* self, const void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_filesystemmodel_set_data(void* self, const void* index, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_filesystemmodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_filesystemmodel_super_set_data(void* self, const void* index, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// @param self const QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_filesystemmodel_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QVariant* func(const QFileSystemModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_filesystemmodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_filesystemmodel_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(const QFileSystemModel* self, QModelIndex* index)
///
void q_filesystemmodel_on_flags(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_filesystemmodel_super_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// @param self QFileSystemModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_filesystemmodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, int column, enum Qt__SortOrder order)
///
void q_filesystemmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_filesystemmodel_super_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QFileSystemModel*
///
const char** q_filesystemmodel_mime_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback const char** func(const QFileSystemModel* self)
///
void q_filesystemmodel_on_mime_types(void* self, const char** (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
///
const char** q_filesystemmodel_super_mime_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// @param self const QFileSystemModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_filesystemmodel_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QMimeData* func(const QFileSystemModel* self, libqt_list of QModelIndex* indexes)
///
void q_filesystemmodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_filesystemmodel_super_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// @param self QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_filesystemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// @param self const QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_filesystemmodel_supported_drop_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(const QFileSystemModel* self)
///
void q_filesystemmodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_filesystemmodel_super_supported_drop_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
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
/// @param self const QFileSystemModel*
///
/// @return libqt_map of int to const char*
///
libqt_map q_filesystemmodel_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback libqt_map of int to const char* func(const QFileSystemModel* self)
///
void q_filesystemmodel_on_role_names(void* self, libqt_map (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self const QFileSystemModel*
///
/// @return libqt_map of int to const char*
///
libqt_map q_filesystemmodel_super_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setRootPath)
///
/// @param self QFileSystemModel*
/// @param path const char*
///
QModelIndex* q_filesystemmodel_set_root_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileSystemModel*
///
const char* q_filesystemmodel_root_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootDirectory)
///
/// @param self const QFileSystemModel*
///
QDir* q_filesystemmodel_root_directory(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setIconProvider)
///
/// @param self QFileSystemModel*
/// @param provider QAbstractFileIconProvider*
///
void q_filesystemmodel_set_icon_provider(void* self, void* provider);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#iconProvider)
///
/// @param self const QFileSystemModel*
///
QAbstractFileIconProvider* q_filesystemmodel_icon_provider(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setFilter)
///
/// @param self QFileSystemModel*
/// @param filters flag of enum QDir__Filter
///
void q_filesystemmodel_set_filter(void* self, int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#filter)
///
/// @param self const QFileSystemModel*
///
/// @return flag of enum QDir__Filter
///
int32_t q_filesystemmodel_filter(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setResolveSymlinks)
///
/// @param self QFileSystemModel*
/// @param enable bool
///
void q_filesystemmodel_set_resolve_symlinks(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#resolveSymlinks)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_resolve_symlinks(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setReadOnly)
///
/// @param self QFileSystemModel*
/// @param enable bool
///
void q_filesystemmodel_set_read_only(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#isReadOnly)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_is_read_only(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilterDisables)
///
/// @param self QFileSystemModel*
/// @param enable bool
///
void q_filesystemmodel_set_name_filter_disables(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilterDisables)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_name_filter_disables(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilters)
///
/// @param self QFileSystemModel*
/// @param filters const char**
///
void q_filesystemmodel_set_name_filters(void* self, const char* filters[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilters)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QFileSystemModel*
///
const char** q_filesystemmodel_name_filters(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// @param self QFileSystemModel*
/// @param option enum QFileSystemModel__Option
///
void q_filesystemmodel_set_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#testOption)
///
/// @param self const QFileSystemModel*
/// @param option enum QFileSystemModel__Option
///
bool q_filesystemmodel_test_option(const void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOptions)
///
/// @param self QFileSystemModel*
/// @param options flag of enum QFileSystemModel__Option
///
void q_filesystemmodel_set_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#options)
///
/// @param self const QFileSystemModel*
///
/// @return flag of enum QFileSystemModel__Option
///
int32_t q_filesystemmodel_options(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
const char* q_filesystemmodel_file_path(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#isDir)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
bool q_filesystemmodel_is_dir(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#size)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
int64_t q_filesystemmodel_size(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#type)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
const char* q_filesystemmodel_type(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#lastModified)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
QDateTime* q_filesystemmodel_last_modified(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#lastModified)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
/// @param tz QTimeZone*
///
QDateTime* q_filesystemmodel_last_modified2(const void* self, const void* index, const void* tz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#mkdir)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param name const char*
///
QModelIndex* q_filesystemmodel_mkdir(void* self, const void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#rmdir)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
///
bool q_filesystemmodel_rmdir(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
const char* q_filesystemmodel_file_name(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileIcon)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
QIcon* q_filesystemmodel_file_icon(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#permissions)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_filesystemmodel_permissions(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileInfo)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
QFileInfo* q_filesystemmodel_file_info(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#remove)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
///
bool q_filesystemmodel_remove(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// @param self QFileSystemModel*
/// @param event QTimerEvent*
///
void q_filesystemmodel_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QTimerEvent* event)
///
void q_filesystemmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param event QTimerEvent*
///
void q_filesystemmodel_super_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// @param self QFileSystemModel*
/// @param event QEvent*
///
bool q_filesystemmodel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QEvent* event)
///
void q_filesystemmodel_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param event QEvent*
///
bool q_filesystemmodel_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_filesystemmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_filesystemmodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// @param self const QFileSystemModel*
/// @param path const char*
/// @param column int
///
QModelIndex* q_filesystemmodel_index22(const void* self, const char* path, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// @param self const QFileSystemModel*
/// @param role int
///
QVariant* q_filesystemmodel_my_computer1(const void* self, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// @param self QFileSystemModel*
/// @param option enum QFileSystemModel__Option
/// @param on bool
///
void q_filesystemmodel_set_option2(void* self, int32_t option, bool on);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
///
bool q_filesystemmodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QFileSystemModel*
/// @param row int
///
bool q_filesystemmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QFileSystemModel*
/// @param column int
///
bool q_filesystemmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QFileSystemModel*
/// @param row int
///
bool q_filesystemmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QFileSystemModel*
/// @param column int
///
bool q_filesystemmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_filesystemmodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_filesystemmodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
bool q_filesystemmodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_filesystemmodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_filesystemmodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QFileSystemModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_filesystemmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_filesystemmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QFileSystemModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QFileSystemModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_filesystemmodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_filesystemmodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_filesystemmodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_filesystemmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_filesystemmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_filesystemmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_filesystemmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_filesystemmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_filesystemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_filesystemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_filesystemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileSystemModel*
///
const char* q_filesystemmodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFileSystemModel*
/// @param name const char*
///
void q_filesystemmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFileSystemModel*
/// @param b bool
///
bool q_filesystemmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QFileSystemModel*
///
QThread* q_filesystemmodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileSystemModel*
/// @param thread QThread*
///
bool q_filesystemmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemModel*
/// @param interval int
///
int32_t q_filesystemmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemModel*
/// @param time int64_t of nanoseconds
///
int32_t q_filesystemmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileSystemModel*
/// @param id int
///
void q_filesystemmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileSystemModel*
/// @param id enum Qt__TimerId
///
void q_filesystemmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QFileSystemModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_filesystemmodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFileSystemModel*
/// @param parent QObject*
///
void q_filesystemmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFileSystemModel*
/// @param filterObj QObject*
///
void q_filesystemmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFileSystemModel*
/// @param obj QObject*
///
void q_filesystemmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_filesystemmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_filesystemmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFileSystemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_filesystemmodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_filesystemmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_filesystemmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFileSystemModel*
///
bool q_filesystemmodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFileSystemModel*
/// @param receiver QObject*
///
bool q_filesystemmodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_filesystemmodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QFileSystemModel*
///
void q_filesystemmodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QFileSystemModel*
///
void q_filesystemmodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFileSystemModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_filesystemmodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QFileSystemModel*
/// @param name const char*
///
QVariant* q_filesystemmodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QFileSystemModel*
///
const char** q_filesystemmodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileSystemModel*
///
QBindingStorage* q_filesystemmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QFileSystemModel*
///
const QBindingStorage* q_filesystemmodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QFileSystemModel*
/// @param classname const char*
///
bool q_filesystemmodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_filesystemmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_filesystemmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_filesystemmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_filesystemmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFileSystemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_filesystemmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFileSystemModel*
/// @param signal const char*
///
bool q_filesystemmodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFileSystemModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_filesystemmodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFileSystemModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_filesystemmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFileSystemModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_filesystemmodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
/// @param param1 QObject*
///
void q_filesystemmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QObject* param1)
///
void q_filesystemmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_filesystemmodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_filesystemmodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_filesystemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
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
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_filesystemmodel_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
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
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_filesystemmodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback libqt_map of int to QVariant* func(QFileSystemModel* self, QModelIndex* index)
///
void q_filesystemmodel_on_item_data(void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_filesystemmodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_filesystemmodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_filesystemmodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
///
bool q_filesystemmodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
///
bool q_filesystemmodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* index)
///
void q_filesystemmodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_filesystemmodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_filesystemmodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_filesystemmodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self)
///
void q_filesystemmodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int row, int count, QModelIndex* parent)
///
void q_filesystemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int column, int count, QModelIndex* parent)
///
void q_filesystemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int row, int count, QModelIndex* parent)
///
void q_filesystemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_filesystemmodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int column, int count, QModelIndex* parent)
///
void q_filesystemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_filesystemmodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_filesystemmodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_filesystemmodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_filesystemmodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_filesystemmodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_filesystemmodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
QModelIndex* q_filesystemmodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
QModelIndex* q_filesystemmodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(QFileSystemModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_filesystemmodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_filesystemmodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback libqt_list of QModelIndex* func(QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_filesystemmodel_on_match(void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
QSize* q_filesystemmodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
///
QSize* q_filesystemmodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QSize* func(QFileSystemModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_span(void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_filesystemmodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_filesystemmodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_filesystemmodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
bool q_filesystemmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
bool q_filesystemmodel_super_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self)
///
void q_filesystemmodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_filesystemmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_filesystemmodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QObject* watched, QEvent* event)
///
void q_filesystemmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QChildEvent*
///
void q_filesystemmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QChildEvent*
///
void q_filesystemmodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QChildEvent* event)
///
void q_filesystemmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QEvent*
///
void q_filesystemmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QEvent*
///
void q_filesystemmodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QEvent* event)
///
void q_filesystemmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
///
void q_filesystemmodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
///
void q_filesystemmodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QMetaMethod* signal)
///
void q_filesystemmodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
///
void q_filesystemmodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
///
void q_filesystemmodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QMetaMethod* signal)
///
void q_filesystemmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
///
QModelIndex* q_filesystemmodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param row int
/// @param column int
///
QModelIndex* q_filesystemmodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(QFileSystemModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_filesystemmodel_on_create_index(void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_filesystemmodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_filesystemmodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_filesystemmodel_on_encode_data(void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_filesystemmodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_filesystemmodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_filesystemmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_filesystemmodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_filesystemmodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_filesystemmodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_filesystemmodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_filesystemmodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_filesystemmodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_filesystemmodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_filesystemmodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_filesystemmodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* from, QModelIndex* to)
///
void q_filesystemmodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_filesystemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_filesystemmodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void q_filesystemmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_filesystemmodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_filesystemmodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback libqt_list of QModelIndex* func(QFileSystemModel* self)
///
void q_filesystemmodel_on_persistent_index_list(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
///
QObject* q_filesystemmodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
///
QObject* q_filesystemmodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QObject* func(QFileSystemModel* self)
///
void q_filesystemmodel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
///
int32_t q_filesystemmodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
///
int32_t q_filesystemmodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self)
///
void q_filesystemmodel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param signal const char*
///
int32_t q_filesystemmodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param signal const char*
///
int32_t q_filesystemmodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self, const char* signal)
///
void q_filesystemmodel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param signal QMetaMethod*
///
bool q_filesystemmodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileSystemModel*
/// @param signal QMetaMethod*
///
bool q_filesystemmodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QMetaMethod* signal)
///
void q_filesystemmodel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
///
void q_filesystemmodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
///
void q_filesystemmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_filesystemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_filesystemmodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_filesystemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_filesystemmodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* objectName)
///
void q_filesystemmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#dtor.QFileSystemModel)
///
/// Delete this object from C++ memory.
///
/// @param self QFileSystemModel*
///
void q_filesystemmodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#public-types)

typedef enum {
    QFILESYSTEMMODEL_ROLES_FILEICONROLE = 1,
    QFILESYSTEMMODEL_ROLES_FILEINFOROLE = 252,
    QFILESYSTEMMODEL_ROLES_FILEPATHROLE = 257,
    QFILESYSTEMMODEL_ROLES_FILENAMEROLE = 258,
    QFILESYSTEMMODEL_ROLES_FILEPERMISSIONS = 259
} QFileSystemModel__Roles;

/// [Upstream resources](https://doc.qt.io/qt-6/qfilesystemmodel.html#public-types)

typedef enum {
    QFILESYSTEMMODEL_OPTION_DONTWATCHFORCHANGES = 1,
    QFILESYSTEMMODEL_OPTION_DONTRESOLVESYMLINKS = 2,
    QFILESYSTEMMODEL_OPTION_DONTUSECUSTOMDIRECTORYICONS = 4
} QFileSystemModel__Option;

#endif
