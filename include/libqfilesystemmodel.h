#pragma once
#ifndef SRCQT6C_LIBQFILESYSTEMMODEL_H
#define SRCQT6C_LIBQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfilesystemmodel.html

/// q_filesystemmodel_new constructs a new QFileSystemModel object.
///
QFileSystemModel* q_filesystemmodel_new();

/// q_filesystemmodel_new2 constructs a new QFileSystemModel object.
///
/// @param parent QObject*
QFileSystemModel* q_filesystemmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFileSystemModel*
const QMetaObject* q_filesystemmodel_meta_object(void* self);

/// @param self QFileSystemModel*
/// @param param1 const char*
void* q_filesystemmodel_metacast(void* self, const char* param1);

/// @param self QFileSystemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_filesystemmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_filesystemmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_filesystemmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_filesystemmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPathChanged)
///
/// @param self QFileSystemModel*
/// @param newPath const char*
void q_filesystemmodel_root_path_changed(void* self, const char* newPath);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPathChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* newPath)
void q_filesystemmodel_on_root_path_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileRenamed)
///
/// @param self QFileSystemModel*
/// @param path const char*
/// @param oldName const char*
/// @param newName const char*
void q_filesystemmodel_file_renamed(void* self, const char* path, const char* oldName, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileRenamed)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* path, const char* oldName, const char* newName)
void q_filesystemmodel_on_file_renamed(void* self, void (*callback)(void*, const char*, const char*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#directoryLoaded)
///
/// @param self QFileSystemModel*
/// @param path const char*
void q_filesystemmodel_directory_loaded(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#directoryLoaded)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* path)
void q_filesystemmodel_on_directory_loaded(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_filesystemmodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(QFileSystemModel* self, int row, int column, QModelIndex* parent)
void q_filesystemmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_filesystemmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// @param self QFileSystemModel*
/// @param path const char*
QModelIndex* q_filesystemmodel_index2(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// @param self QFileSystemModel*
/// @param child QModelIndex*
QModelIndex* q_filesystemmodel_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(QFileSystemModel* self, QModelIndex* child)
void q_filesystemmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param child QModelIndex*
QModelIndex* q_filesystemmodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_filesystemmodel_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(QFileSystemModel* self, int row, int column, QModelIndex* idx)
void q_filesystemmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_filesystemmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
bool q_filesystemmodel_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* parent)
void q_filesystemmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
bool q_filesystemmodel_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* parent)
void q_filesystemmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
void q_filesystemmodel_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent)
void q_filesystemmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
void q_filesystemmodel_qbase_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
int32_t q_filesystemmodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self, QModelIndex* parent)
void q_filesystemmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
int32_t q_filesystemmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
int32_t q_filesystemmodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self, QModelIndex* parent)
void q_filesystemmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
int32_t q_filesystemmodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// @param self QFileSystemModel*
QVariant* q_filesystemmodel_my_computer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_filesystemmodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QVariant* func(QFileSystemModel* self, QModelIndex* index, int role)
void q_filesystemmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_filesystemmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_filesystemmodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role)
void q_filesystemmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_filesystemmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// @param self QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_filesystemmodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QVariant* func(QFileSystemModel* self, int section, enum Qt__Orientation orientation, int role)
void q_filesystemmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_filesystemmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_filesystemmodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self, QModelIndex* index)
void q_filesystemmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_filesystemmodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// @param self QFileSystemModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_filesystemmodel_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, int column, enum Qt__SortOrder order)
void q_filesystemmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_filesystemmodel_qbase_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
const char** q_filesystemmodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback const char** func()
void q_filesystemmodel_on_mime_types(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
const char** q_filesystemmodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// @param self QFileSystemModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_filesystemmodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback QMimeData* func(QFileSystemModel* self, QModelIndex** indexes)
void q_filesystemmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_filesystemmodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// @param self QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_filesystemmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_filesystemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// @param self QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_filesystemmodel_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func()
void q_filesystemmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_filesystemmodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// @param self QFileSystemModel*
libqt_map /* of int to char* */ q_filesystemmodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback libqt_map /* of int to char* */ func()
void q_filesystemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
libqt_map /* of int to char* */ q_filesystemmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setRootPath)
///
/// @param self QFileSystemModel*
/// @param path const char*
QModelIndex* q_filesystemmodel_set_root_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
const char* q_filesystemmodel_root_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootDirectory)
///
/// @param self QFileSystemModel*
QDir* q_filesystemmodel_root_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setIconProvider)
///
/// @param self QFileSystemModel*
/// @param provider QAbstractFileIconProvider*
void q_filesystemmodel_set_icon_provider(void* self, void* provider);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#iconProvider)
///
/// @param self QFileSystemModel*
QAbstractFileIconProvider* q_filesystemmodel_icon_provider(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setFilter)
///
/// @param self QFileSystemModel*
/// @param filters flag of enum QDir__Filter
void q_filesystemmodel_set_filter(void* self, int32_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#filter)
///
/// @param self QFileSystemModel*
///
/// @return flag of enum QDir__Filter
int32_t q_filesystemmodel_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setResolveSymlinks)
///
/// @param self QFileSystemModel*
/// @param enable bool
void q_filesystemmodel_set_resolve_symlinks(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#resolveSymlinks)
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_resolve_symlinks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setReadOnly)
///
/// @param self QFileSystemModel*
/// @param enable bool
void q_filesystemmodel_set_read_only(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#isReadOnly)
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilterDisables)
///
/// @param self QFileSystemModel*
/// @param enable bool
void q_filesystemmodel_set_name_filter_disables(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilterDisables)
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_name_filter_disables(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilters)
///
/// @param self QFileSystemModel*
/// @param filters const char**
void q_filesystemmodel_set_name_filters(void* self, const char* filters[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
const char** q_filesystemmodel_name_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// @param self QFileSystemModel*
/// @param option enum QFileSystemModel__Option
void q_filesystemmodel_set_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#testOption)
///
/// @param self QFileSystemModel*
/// @param option enum QFileSystemModel__Option
bool q_filesystemmodel_test_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOptions)
///
/// @param self QFileSystemModel*
/// @param options flag of enum QFileSystemModel__Option
void q_filesystemmodel_set_options(void* self, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#options)
///
/// @param self QFileSystemModel*
///
/// @return flag of enum QFileSystemModel__Option
int32_t q_filesystemmodel_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
const char* q_filesystemmodel_file_path(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#isDir)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
bool q_filesystemmodel_is_dir(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#size)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
long long q_filesystemmodel_size(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
const char* q_filesystemmodel_type(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#lastModified)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
QDateTime* q_filesystemmodel_last_modified(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#lastModified)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param tz QTimeZone*
QDateTime* q_filesystemmodel_last_modified2(void* self, void* index, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mkdir)
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param name const char*
QModelIndex* q_filesystemmodel_mkdir(void* self, void* parent, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rmdir)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
bool q_filesystemmodel_rmdir(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
const char* q_filesystemmodel_file_name(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileIcon)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
QIcon* q_filesystemmodel_file_icon(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#permissions)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
///
/// @return flag of enum QFileDevice__Permission
int32_t q_filesystemmodel_permissions(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileInfo)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
QFileInfo* q_filesystemmodel_file_info(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#remove)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
bool q_filesystemmodel_remove(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// @param self QFileSystemModel*
/// @param event QTimerEvent*
void q_filesystemmodel_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QTimerEvent* event)
void q_filesystemmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param event QTimerEvent*
void q_filesystemmodel_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// @param self QFileSystemModel*
/// @param event QEvent*
bool q_filesystemmodel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QEvent* event)
void q_filesystemmodel_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// Base class method implementation
///
/// @param self QFileSystemModel*
/// @param event QEvent*
bool q_filesystemmodel_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_filesystemmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_filesystemmodel_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// @param self QFileSystemModel*
/// @param path const char*
/// @param column int
QModelIndex* q_filesystemmodel_index22(void* self, const char* path, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// @param self QFileSystemModel*
/// @param role int
QVariant* q_filesystemmodel_my_computer1(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// @param self QFileSystemModel*
/// @param option enum QFileSystemModel__Option
/// @param on bool
void q_filesystemmodel_set_option2(void* self, int32_t option, bool on);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
bool q_filesystemmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QFileSystemModel*
/// @param row int
bool q_filesystemmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QFileSystemModel*
/// @param column int
bool q_filesystemmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QFileSystemModel*
/// @param row int
bool q_filesystemmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QFileSystemModel*
/// @param column int
bool q_filesystemmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_filesystemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_filesystemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
bool q_filesystemmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void q_filesystemmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
void q_filesystemmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QFileSystemModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void q_filesystemmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, enum Qt__Orientation orientation, int first, int last)
void q_filesystemmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
void q_filesystemmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
void q_filesystemmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
void q_filesystemmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
void q_filesystemmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_filesystemmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param parent QModelIndex*
bool q_filesystemmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QFileSystemModel*
/// @param column int
/// @param parent QModelIndex*
bool q_filesystemmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QFileSystemModel*
/// @param row int
/// @param parent QModelIndex*
bool q_filesystemmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QFileSystemModel*
/// @param column int
/// @param parent QModelIndex*
bool q_filesystemmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool q_filesystemmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_filesystemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void q_filesystemmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_filesystemmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QPersistentModelIndex** parents)
void q_filesystemmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_filesystemmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_filesystemmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_filesystemmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QPersistentModelIndex** parents)
void q_filesystemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_filesystemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_filesystemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
const char* q_filesystemmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFileSystemModel*
/// @param name char*
void q_filesystemmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFileSystemModel*
/// @param b bool
bool q_filesystemmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFileSystemModel*
QThread* q_filesystemmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileSystemModel*
/// @param thread QThread*
bool q_filesystemmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemModel*
/// @param interval int
int32_t q_filesystemmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileSystemModel*
/// @param id int
void q_filesystemmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileSystemModel*
/// @param id enum Qt__TimerId
void q_filesystemmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFileSystemModel*
libqt_list /* of QObject* */ q_filesystemmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFileSystemModel*
/// @param parent QObject*
void q_filesystemmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFileSystemModel*
/// @param filterObj QObject*
void q_filesystemmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFileSystemModel*
/// @param obj QObject*
void q_filesystemmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_filesystemmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileSystemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_filesystemmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_filesystemmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_filesystemmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFileSystemModel*
void q_filesystemmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFileSystemModel*
void q_filesystemmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFileSystemModel*
/// @param name const char*
/// @param value QVariant*
bool q_filesystemmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFileSystemModel*
/// @param name const char*
QVariant* q_filesystemmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileSystemModel*
const char** q_filesystemmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileSystemModel*
QBindingStorage* q_filesystemmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileSystemModel*
const QBindingStorage* q_filesystemmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
void q_filesystemmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
void q_filesystemmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFileSystemModel*
/// @param classname const char*
bool q_filesystemmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFileSystemModel*
void q_filesystemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileSystemModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_filesystemmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileSystemModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_filesystemmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_filesystemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileSystemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_filesystemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
/// @param param1 QObject*
void q_filesystemmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QObject* param1)
void q_filesystemmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_filesystemmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_filesystemmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
void q_filesystemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_filesystemmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_filesystemmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QFileSystemModel* self, QModelIndex* index)
void q_filesystemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_filesystemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_filesystemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
void q_filesystemmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
bool q_filesystemmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
bool q_filesystemmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* index)
void q_filesystemmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_filesystemmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_filesystemmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_filesystemmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_filesystemmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func()
void q_filesystemmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int row, int count, QModelIndex* parent)
void q_filesystemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int column, int count, QModelIndex* parent)
void q_filesystemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int row, int count, QModelIndex* parent)
void q_filesystemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_filesystemmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int column, int count, QModelIndex* parent)
void q_filesystemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_filesystemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_filesystemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
void q_filesystemmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_filesystemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_filesystemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
void q_filesystemmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
QModelIndex* q_filesystemmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
QModelIndex* q_filesystemmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(QFileSystemModel* self, QModelIndex* index)
void q_filesystemmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_filesystemmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex** func(QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
void q_filesystemmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
QSize* q_filesystemmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
QSize* q_filesystemmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QSize* func(QFileSystemModel* self, QModelIndex* index)
void q_filesystemmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_filesystemmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_filesystemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
void q_filesystemmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
bool q_filesystemmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func()
void q_filesystemmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_filesystemmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_filesystemmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QObject* watched, QEvent* event)
void q_filesystemmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QChildEvent*
void q_filesystemmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QChildEvent*
void q_filesystemmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QChildEvent* event)
void q_filesystemmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QEvent*
void q_filesystemmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param event QEvent*
void q_filesystemmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QEvent* event)
void q_filesystemmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
void q_filesystemmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
void q_filesystemmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QMetaMethod* signal)
void q_filesystemmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
void q_filesystemmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
void q_filesystemmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QMetaMethod* signal)
void q_filesystemmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
QModelIndex* q_filesystemmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
QModelIndex* q_filesystemmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex* func(QFileSystemModel* self, int row, int column)
void q_filesystemmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_filesystemmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_filesystemmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex** indexes, QDataStream* stream)
void q_filesystemmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_filesystemmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_filesystemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
void q_filesystemmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_filesystemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_filesystemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
void q_filesystemmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_filesystemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_filesystemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_filesystemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
void q_filesystemmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
void q_filesystemmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func()
void q_filesystemmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_filesystemmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_filesystemmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* from, QModelIndex* to)
void q_filesystemmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_filesystemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_filesystemmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex** from, QModelIndex** to)
void q_filesystemmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
libqt_list /* of QModelIndex* */ q_filesystemmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QModelIndex** func()
void q_filesystemmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
QObject* q_filesystemmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
QObject* q_filesystemmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback QObject* func()
void q_filesystemmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
int32_t q_filesystemmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
int32_t q_filesystemmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func()
void q_filesystemmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal const char*
int32_t q_filesystemmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal const char*
int32_t q_filesystemmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback int32_t func(QFileSystemModel* self, const char* signal)
void q_filesystemmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
bool q_filesystemmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param signal QMetaMethod*
bool q_filesystemmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileSystemModel*
/// @param callback bool func(QFileSystemModel* self, QMetaMethod* signal)
void q_filesystemmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* parent, int first, int last)
void q_filesystemmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
void q_filesystemmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self)
void q_filesystemmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_filesystemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_filesystemmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_filesystemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_filesystemmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileSystemModel*
/// @param callback void func(QFileSystemModel* self, const char* objectName)
void q_filesystemmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dtor.QFileSystemModel)
///
/// Delete this object from C++ memory.
///
/// @param self QFileSystemModel*
void q_filesystemmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qfilesystemmodel.html#types

typedef enum {
    QFILESYSTEMMODEL_ROLES_FILEICONROLE = 1,
    QFILESYSTEMMODEL_ROLES_FILEINFOROLE = 252,
    QFILESYSTEMMODEL_ROLES_FILEPATHROLE = 257,
    QFILESYSTEMMODEL_ROLES_FILENAMEROLE = 258,
    QFILESYSTEMMODEL_ROLES_FILEPERMISSIONS = 259
} QFileSystemModel__Roles;

typedef enum {
    QFILESYSTEMMODEL_OPTION_DONTWATCHFORCHANGES = 1,
    QFILESYSTEMMODEL_OPTION_DONTRESOLVESYMLINKS = 2,
    QFILESYSTEMMODEL_OPTION_DONTUSECUSTOMDIRECTORYICONS = 4
} QFileSystemModel__Option;

#endif
