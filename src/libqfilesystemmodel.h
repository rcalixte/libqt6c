#pragma once
#ifndef SRCQT6C_LIBQFILESYSTEMMODEL_H
#define SRCQT6C_LIBQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfilesystemmodel.html

/// q_filesystemmodel_new constructs a new QFileSystemModel object.
///
///
QFileSystemModel* q_filesystemmodel_new();

/// q_filesystemmodel_new2 constructs a new QFileSystemModel object.
///
/// ``` QObject* parent ```
QFileSystemModel* q_filesystemmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileSystemModel* self ```
const QMetaObject* q_filesystemmodel_meta_object(void* self);

/// ``` QFileSystemModel* self, const char* param1 ```
void* q_filesystemmodel_metacast(void* self, const char* param1);

/// ``` QFileSystemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemmodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, enum QMetaObject__Call, int, void*) ```
void q_filesystemmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QFileSystemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filesystemmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPathChanged)
///
/// ``` QFileSystemModel* self, const char* newPath ```
void q_filesystemmodel_root_path_changed(void* self, const char* newPath);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPathChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, const char*) ```
void q_filesystemmodel_on_root_path_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileRenamed)
///
/// ``` QFileSystemModel* self, const char* path, const char* oldName, const char* newName ```
void q_filesystemmodel_file_renamed(void* self, const char* path, const char* oldName, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileRenamed)
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, const char*, const char*, const char*) ```
void q_filesystemmodel_on_file_renamed(void* self, void (*slot)(void*, const char*, const char*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#directoryLoaded)
///
/// ``` QFileSystemModel* self, const char* path ```
void q_filesystemmodel_directory_loaded(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#directoryLoaded)
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, const char*) ```
void q_filesystemmodel_on_directory_loaded(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_filesystemmodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_filesystemmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// ``` QFileSystemModel* self, const char* path ```
QModelIndex* q_filesystemmodel_index_with_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// ``` QFileSystemModel* self, QModelIndex* child ```
QModelIndex* q_filesystemmodel_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* child ```
QModelIndex* q_filesystemmodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_filesystemmodel_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_filesystemmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_qbase_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
void q_filesystemmodel_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
void q_filesystemmodel_qbase_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// ``` QFileSystemModel* self ```
QVariant* q_filesystemmodel_my_computer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// ``` QFileSystemModel* self, QModelIndex* index, int role ```
QVariant* q_filesystemmodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QVariant* (*slot)(QFileSystemModel*, QModelIndex*, int) ```
void q_filesystemmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* index, int role ```
QVariant* q_filesystemmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// ``` QFileSystemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_filesystemmodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, QVariant*, int) ```
void q_filesystemmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_filesystemmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_filesystemmodel_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QVariant* (*slot)(QFileSystemModel*, int, enum Qt__Orientation, int) ```
void q_filesystemmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_filesystemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
int64_t q_filesystemmodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int64_t (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
int64_t q_filesystemmodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// ``` QFileSystemModel* self, int column, enum Qt__SortOrder order ```
void q_filesystemmodel_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, int, enum Qt__SortOrder) ```
void q_filesystemmodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, int column, enum Qt__SortOrder order ```
void q_filesystemmodel_qbase_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, const char** (*slot)() ```
void q_filesystemmodel_on_mime_types(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_filesystemmodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QMimeData* (*slot)(QFileSystemModel*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_filesystemmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_filesystemmodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_filesystemmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int64_t (*slot)() ```
void q_filesystemmodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// ``` QFileSystemModel* self ```
libqt_map /* of int to char* */ q_filesystemmodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_filesystemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self ```
libqt_map /* of int to char* */ q_filesystemmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setRootPath)
///
/// ``` QFileSystemModel* self, const char* path ```
QModelIndex* q_filesystemmodel_set_root_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPath)
///
/// ``` QFileSystemModel* self ```
const char* q_filesystemmodel_root_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootDirectory)
///
/// ``` QFileSystemModel* self ```
QDir* q_filesystemmodel_root_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setIconProvider)
///
/// ``` QFileSystemModel* self, QAbstractFileIconProvider* provider ```
void q_filesystemmodel_set_icon_provider(void* self, void* provider);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#iconProvider)
///
/// ``` QFileSystemModel* self ```
QAbstractFileIconProvider* q_filesystemmodel_icon_provider(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setFilter)
///
/// ``` QFileSystemModel* self, int filters ```
void q_filesystemmodel_set_filter(void* self, int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#filter)
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setResolveSymlinks)
///
/// ``` QFileSystemModel* self, bool enable ```
void q_filesystemmodel_set_resolve_symlinks(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#resolveSymlinks)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_resolve_symlinks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setReadOnly)
///
/// ``` QFileSystemModel* self, bool enable ```
void q_filesystemmodel_set_read_only(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#isReadOnly)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilterDisables)
///
/// ``` QFileSystemModel* self, bool enable ```
void q_filesystemmodel_set_name_filter_disables(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilterDisables)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_name_filter_disables(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilters)
///
/// ``` QFileSystemModel* self, const char* filters[] ```
void q_filesystemmodel_set_name_filters(void* self, const char* filters[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilters)
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_name_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// ``` QFileSystemModel* self, enum QFileSystemModel__Option option ```
void q_filesystemmodel_set_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#testOption)
///
/// ``` QFileSystemModel* self, enum QFileSystemModel__Option option ```
bool q_filesystemmodel_test_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOptions)
///
/// ``` QFileSystemModel* self, int options ```
void q_filesystemmodel_set_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#options)
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#filePath)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
const char* q_filesystemmodel_file_path(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#isDir)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_is_dir(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#size)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
long long q_filesystemmodel_size(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#type)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
const char* q_filesystemmodel_type(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#lastModified)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QDateTime* q_filesystemmodel_last_modified(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#lastModified)
///
/// ``` QFileSystemModel* self, QModelIndex* index, QTimeZone* tz ```
QDateTime* q_filesystemmodel_last_modified2(void* self, void* index, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mkdir)
///
/// ``` QFileSystemModel* self, QModelIndex* parent, const char* name ```
QModelIndex* q_filesystemmodel_mkdir(void* self, void* parent, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rmdir)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_rmdir(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileName)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
const char* q_filesystemmodel_file_name(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileIcon)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QIcon* q_filesystemmodel_file_icon(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#permissions)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
int64_t q_filesystemmodel_permissions(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileInfo)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QFileInfo* q_filesystemmodel_file_info(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#remove)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_remove(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// ``` QFileSystemModel* self, QTimerEvent* event ```
void q_filesystemmodel_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QTimerEvent*) ```
void q_filesystemmodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QTimerEvent* event ```
void q_filesystemmodel_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// ``` QFileSystemModel* self, QEvent* event ```
bool q_filesystemmodel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QEvent*) ```
void q_filesystemmodel_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// Base class method implementation
///
/// ``` QFileSystemModel* self, QEvent* event ```
bool q_filesystemmodel_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filesystemmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filesystemmodel_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// ``` QFileSystemModel* self, const char* path, int column ```
QModelIndex* q_filesystemmodel_index2(void* self, const char* path, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// ``` QFileSystemModel* self, int role ```
QVariant* q_filesystemmodel_my_computer1(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// ``` QFileSystemModel* self, enum QFileSystemModel__Option option, bool on ```
void q_filesystemmodel_set_option2(void* self, int64_t option, bool on);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QFileSystemModel* self, int row, int column ```
bool q_filesystemmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QFileSystemModel* self, int row ```
bool q_filesystemmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QFileSystemModel* self, int column ```
bool q_filesystemmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QFileSystemModel* self, int row ```
bool q_filesystemmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QFileSystemModel* self, int column ```
bool q_filesystemmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_filesystemmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_filesystemmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QFileSystemModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_filesystemmodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_filesystemmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_filesystemmodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_filesystemmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QFileSystemModel* self, int row, QModelIndex* parent ```
bool q_filesystemmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QFileSystemModel* self, int column, QModelIndex* parent ```
bool q_filesystemmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QFileSystemModel* self, int row, QModelIndex* parent ```
bool q_filesystemmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QFileSystemModel* self, int column, QModelIndex* parent ```
bool q_filesystemmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QFileSystemModel* self, QModelIndex* index, int options ```
bool q_filesystemmodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_filesystemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_filesystemmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_filesystemmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_filesystemmodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_filesystemmodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_filesystemmodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_filesystemmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_filesystemmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_filesystemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_filesystemmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileSystemModel* self ```
const char* q_filesystemmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileSystemModel* self, char* name ```
void q_filesystemmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileSystemModel* self, bool b ```
bool q_filesystemmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileSystemModel* self ```
QThread* q_filesystemmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileSystemModel* self, QThread* thread ```
bool q_filesystemmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemModel* self, int interval ```
int32_t q_filesystemmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileSystemModel* self, int id ```
void q_filesystemmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileSystemModel* self, enum Qt__TimerId id ```
void q_filesystemmodel_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileSystemModel* self ```
libqt_list /* of QObject* */ q_filesystemmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFileSystemModel* self, QObject* parent ```
void q_filesystemmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileSystemModel* self, QObject* filterObj ```
void q_filesystemmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileSystemModel* self, QObject* obj ```
void q_filesystemmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filesystemmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filesystemmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filesystemmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filesystemmodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileSystemModel* self, const char* name, QVariant* value ```
bool q_filesystemmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileSystemModel* self, const char* name ```
QVariant* q_filesystemmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileSystemModel* self ```
QBindingStorage* q_filesystemmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileSystemModel* self ```
const QBindingStorage* q_filesystemmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemModel* self, void (*slot)(QObject*) ```
void q_filesystemmodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileSystemModel* self, const char* classname ```
bool q_filesystemmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileSystemModel* self, QThread* thread, Disambiguated_t* param2 ```
bool q_filesystemmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filesystemmodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemModel* self, QObject* param1 ```
void q_filesystemmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemModel* self, void (*slot)(QObject*, QObject*) ```
void q_filesystemmodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_filesystemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_filesystemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_filesystemmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_filesystemmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_filesystemmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_map /* of int to QVariant* */ (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_filesystemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_filesystemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_filesystemmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_filesystemmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, int64_t (*slot)() ```
void q_filesystemmodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QModelIndex* q_filesystemmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QModelIndex* q_filesystemmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ (*slot)(QFileSystemModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_filesystemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QSize* q_filesystemmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QSize* q_filesystemmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QSize* (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_filesystemmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_filesystemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_filesystemmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)() ```
void q_filesystemmodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QObject* watched, QEvent* event ```
bool q_filesystemmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QObject* watched, QEvent* event ```
bool q_filesystemmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QObject*, QEvent*) ```
void q_filesystemmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QChildEvent* event ```
void q_filesystemmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QChildEvent* event ```
void q_filesystemmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QChildEvent*) ```
void q_filesystemmodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QEvent* event ```
void q_filesystemmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QEvent* event ```
void q_filesystemmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QEvent*) ```
void q_filesystemmodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QMetaMethod*) ```
void q_filesystemmodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QMetaMethod*) ```
void q_filesystemmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column ```
QModelIndex* q_filesystemmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column ```
QModelIndex* q_filesystemmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, int, int) ```
void q_filesystemmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_filesystemmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_filesystemmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, libqt_list /* of QModelIndex* */ indexes , QDataStream*) ```
void q_filesystemmodel_on_encode_data(void* self, void (*slot)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_filesystemmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_filesystemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*, QDataStream*) ```
void q_filesystemmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_filesystemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_filesystemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_filesystemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_filesystemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* from, QModelIndex* to ```
void q_filesystemmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* from, QModelIndex* to ```
void q_filesystemmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, QModelIndex*) ```
void q_filesystemmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_filesystemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_filesystemmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, libqt_list /* of QModelIndex* */ from , libqt_list /* of QModelIndex* */ to ) ```
void q_filesystemmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_filesystemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
QObject* q_filesystemmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
QObject* q_filesystemmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QObject* (*slot)() ```
void q_filesystemmodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
int32_t q_filesystemmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
int32_t q_filesystemmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, int32_t (*slot)() ```
void q_filesystemmodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, const char* signal ```
int32_t q_filesystemmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, const char* signal ```
int32_t q_filesystemmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, const char*) ```
void q_filesystemmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
bool q_filesystemmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
bool q_filesystemmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QMetaMethod*) ```
void q_filesystemmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_filesystemmodel_on_model_about_to_be_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_filesystemmodel_on_model_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileSystemModel* self, void (*slot)(QObject*, const char*) ```
void q_filesystemmodel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dtor.QFileSystemModel)
///
/// Delete this object from C++ memory.
///
/// ``` QFileSystemModel* self ```
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
