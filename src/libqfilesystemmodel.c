#include "libqabstractfileiconprovider.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqdatetime.hpp"
#include "libqdir.hpp"
#include "libqfileinfo.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqtimezone.hpp"
#include "libqvariant.hpp"
#include "libqfilesystemmodel.hpp"
#include "libqfilesystemmodel.h"

QFileSystemModel* q_filesystemmodel_new() {
    return QFileSystemModel_new();
}

QFileSystemModel* q_filesystemmodel_new2(void* parent) {
    return QFileSystemModel_new2((QObject*)parent);
}

const QMetaObject* q_filesystemmodel_meta_object(void* self) {
    return QFileSystemModel_MetaObject((QFileSystemModel*)self);
}

void q_filesystemmodel_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QFileSystemModel_OnMetaObject((QFileSystemModel*)self, (intptr_t)callback);
}

const QMetaObject* q_filesystemmodel_super_meta_object(void* self) {
    return QFileSystemModel_SuperMetaObject((QFileSystemModel*)self);
}

void* q_filesystemmodel_metacast(void* self, const char* param1) {
    return QFileSystemModel_Metacast((QFileSystemModel*)self, param1);
}

void q_filesystemmodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QFileSystemModel_OnMetacast((QFileSystemModel*)self, (intptr_t)callback);
}

void* q_filesystemmodel_super_metacast(void* self, const char* param1) {
    return QFileSystemModel_SuperMetacast((QFileSystemModel*)self, param1);
}

int32_t q_filesystemmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFileSystemModel_Metacall((QFileSystemModel*)self, param1, param2, param3);
}

void q_filesystemmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFileSystemModel_OnMetacall((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFileSystemModel_SuperMetacall((QFileSystemModel*)self, param1, param2, param3);
}

const char* q_filesystemmodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filesystemmodel_root_path_changed(void* self, const char* newPath) {
    QFileSystemModel_RootPathChanged((QFileSystemModel*)self, qstring(newPath));
}

void q_filesystemmodel_on_root_path_changed(void* self, void (*callback)(void*, const char*)) {
    QFileSystemModel_Connect_RootPathChanged((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_file_renamed(void* self, const char* path, const char* oldName, const char* newName) {
    QFileSystemModel_FileRenamed((QFileSystemModel*)self, qstring(path), qstring(oldName), qstring(newName));
}

void q_filesystemmodel_on_file_renamed(void* self, void (*callback)(void*, const char*, const char*, const char*)) {
    QFileSystemModel_Connect_FileRenamed((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_directory_loaded(void* self, const char* path) {
    QFileSystemModel_DirectoryLoaded((QFileSystemModel*)self, qstring(path));
}

void q_filesystemmodel_on_directory_loaded(void* self, void (*callback)(void*, const char*)) {
    QFileSystemModel_Connect_DirectoryLoaded((QFileSystemModel*)self, (intptr_t)callback);
}

QModelIndex* q_filesystemmodel_index(void* self, int row, int column, void* parent) {
    return QFileSystemModel_Index((QFileSystemModel*)self, row, column, (QModelIndex*)parent);
}

void q_filesystemmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QFileSystemModel_OnIndex((QFileSystemModel*)self, (intptr_t)callback);
}

QModelIndex* q_filesystemmodel_super_index(void* self, int row, int column, void* parent) {
    return QFileSystemModel_SuperIndex((QFileSystemModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_filesystemmodel_index2(void* self, const char* path) {
    return QFileSystemModel_Index2((QFileSystemModel*)self, qstring(path));
}

QModelIndex* q_filesystemmodel_parent(void* self, void* child) {
    return QFileSystemModel_Parent((QFileSystemModel*)self, (QModelIndex*)child);
}

void q_filesystemmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QFileSystemModel_OnParent((QFileSystemModel*)self, (intptr_t)callback);
}

QModelIndex* q_filesystemmodel_super_parent(void* self, void* child) {
    return QFileSystemModel_SuperParent((QFileSystemModel*)self, (QModelIndex*)child);
}

QModelIndex* q_filesystemmodel_sibling(void* self, int row, int column, void* idx) {
    return QFileSystemModel_Sibling((QFileSystemModel*)self, row, column, (QModelIndex*)idx);
}

void q_filesystemmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QFileSystemModel_OnSibling((QFileSystemModel*)self, (intptr_t)callback);
}

QModelIndex* q_filesystemmodel_super_sibling(void* self, int row, int column, void* idx) {
    return QFileSystemModel_SuperSibling((QFileSystemModel*)self, row, column, (QModelIndex*)idx);
}

bool q_filesystemmodel_has_children(void* self, void* parent) {
    return QFileSystemModel_HasChildren((QFileSystemModel*)self, (QModelIndex*)parent);
}

void q_filesystemmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QFileSystemModel_OnHasChildren((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_super_has_children(void* self, void* parent) {
    return QFileSystemModel_SuperHasChildren((QFileSystemModel*)self, (QModelIndex*)parent);
}

bool q_filesystemmodel_can_fetch_more(void* self, void* parent) {
    return QFileSystemModel_CanFetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

void q_filesystemmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QFileSystemModel_OnCanFetchMore((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_super_can_fetch_more(void* self, void* parent) {
    return QFileSystemModel_SuperCanFetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

void q_filesystemmodel_fetch_more(void* self, void* parent) {
    QFileSystemModel_FetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

void q_filesystemmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QFileSystemModel_OnFetchMore((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_super_fetch_more(void* self, void* parent) {
    QFileSystemModel_SuperFetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

int32_t q_filesystemmodel_row_count(void* self, void* parent) {
    return QFileSystemModel_RowCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

void q_filesystemmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QFileSystemModel_OnRowCount((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_super_row_count(void* self, void* parent) {
    return QFileSystemModel_SuperRowCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

int32_t q_filesystemmodel_column_count(void* self, void* parent) {
    return QFileSystemModel_ColumnCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

void q_filesystemmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QFileSystemModel_OnColumnCount((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_super_column_count(void* self, void* parent) {
    return QFileSystemModel_SuperColumnCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

QVariant* q_filesystemmodel_my_computer(void* self) {
    return QFileSystemModel_MyComputer((QFileSystemModel*)self);
}

QVariant* q_filesystemmodel_data(void* self, void* index, int role) {
    return QFileSystemModel_Data((QFileSystemModel*)self, (QModelIndex*)index, role);
}

void q_filesystemmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QFileSystemModel_OnData((QFileSystemModel*)self, (intptr_t)callback);
}

QVariant* q_filesystemmodel_super_data(void* self, void* index, int role) {
    return QFileSystemModel_SuperData((QFileSystemModel*)self, (QModelIndex*)index, role);
}

bool q_filesystemmodel_set_data(void* self, void* index, void* value, int role) {
    return QFileSystemModel_SetData((QFileSystemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_filesystemmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QFileSystemModel_OnSetData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_super_set_data(void* self, void* index, void* value, int role) {
    return QFileSystemModel_SuperSetData((QFileSystemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

QVariant* q_filesystemmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QFileSystemModel_HeaderData((QFileSystemModel*)self, section, orientation, role);
}

void q_filesystemmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QFileSystemModel_OnHeaderData((QFileSystemModel*)self, (intptr_t)callback);
}

QVariant* q_filesystemmodel_super_header_data(void* self, int section, int32_t orientation, int role) {
    return QFileSystemModel_SuperHeaderData((QFileSystemModel*)self, section, orientation, role);
}

int32_t q_filesystemmodel_flags(void* self, void* index) {
    return QFileSystemModel_Flags((QFileSystemModel*)self, (QModelIndex*)index);
}

void q_filesystemmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QFileSystemModel_OnFlags((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_super_flags(void* self, void* index) {
    return QFileSystemModel_SuperFlags((QFileSystemModel*)self, (QModelIndex*)index);
}

void q_filesystemmodel_sort(void* self, int column, int32_t order) {
    QFileSystemModel_Sort((QFileSystemModel*)self, column, order);
}

void q_filesystemmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QFileSystemModel_OnSort((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_super_sort(void* self, int column, int32_t order) {
    QFileSystemModel_SuperSort((QFileSystemModel*)self, column, order);
}

const char** q_filesystemmodel_mime_types(void* self) {
    libqt_list _arr = QFileSystemModel_MimeTypes((QFileSystemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filesystemmodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_filesystemmodel_on_mime_types(void* self, const char** (*callback)()) {
    QFileSystemModel_OnMimeTypes((QFileSystemModel*)self, (intptr_t)callback);
}

const char** q_filesystemmodel_super_mime_types(void* self) {
    libqt_list _arr = QFileSystemModel_SuperMimeTypes((QFileSystemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filesystemmodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QMimeData* q_filesystemmodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QFileSystemModel_MimeData((QFileSystemModel*)self, indexes);
}

void q_filesystemmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list /* of QModelIndex* */)) {
    QFileSystemModel_OnMimeData((QFileSystemModel*)self, (intptr_t)callback);
}

QMimeData* q_filesystemmodel_super_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QFileSystemModel_SuperMimeData((QFileSystemModel*)self, indexes);
}

bool q_filesystemmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QFileSystemModel_DropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_filesystemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QFileSystemModel_OnDropMimeData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_super_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QFileSystemModel_SuperDropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

int32_t q_filesystemmodel_supported_drop_actions(void* self) {
    return QFileSystemModel_SupportedDropActions((QFileSystemModel*)self);
}

void q_filesystemmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QFileSystemModel_OnSupportedDropActions((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_super_supported_drop_actions(void* self) {
    return QFileSystemModel_SuperSupportedDropActions((QFileSystemModel*)self);
}

libqt_map /* of int to char* */ q_filesystemmodel_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QFileSystemModel_RoleNames((QFileSystemModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_filesystemmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_filesystemmodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

void q_filesystemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QFileSystemModel_OnRoleNames((QFileSystemModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_filesystemmodel_super_role_names(void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QFileSystemModel_SuperRoleNames((QFileSystemModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_filesystemmodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_filesystemmodel_role_names\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

QModelIndex* q_filesystemmodel_set_root_path(void* self, const char* path) {
    return QFileSystemModel_SetRootPath((QFileSystemModel*)self, qstring(path));
}

const char* q_filesystemmodel_root_path(void* self) {
    libqt_string _str = QFileSystemModel_RootPath((QFileSystemModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDir* q_filesystemmodel_root_directory(void* self) {
    return QFileSystemModel_RootDirectory((QFileSystemModel*)self);
}

void q_filesystemmodel_set_icon_provider(void* self, void* provider) {
    QFileSystemModel_SetIconProvider((QFileSystemModel*)self, (QAbstractFileIconProvider*)provider);
}

QAbstractFileIconProvider* q_filesystemmodel_icon_provider(void* self) {
    return QFileSystemModel_IconProvider((QFileSystemModel*)self);
}

void q_filesystemmodel_set_filter(void* self, int32_t filters) {
    QFileSystemModel_SetFilter((QFileSystemModel*)self, filters);
}

int32_t q_filesystemmodel_filter(void* self) {
    return QFileSystemModel_Filter((QFileSystemModel*)self);
}

void q_filesystemmodel_set_resolve_symlinks(void* self, bool enable) {
    QFileSystemModel_SetResolveSymlinks((QFileSystemModel*)self, enable);
}

bool q_filesystemmodel_resolve_symlinks(void* self) {
    return QFileSystemModel_ResolveSymlinks((QFileSystemModel*)self);
}

void q_filesystemmodel_set_read_only(void* self, bool enable) {
    QFileSystemModel_SetReadOnly((QFileSystemModel*)self, enable);
}

bool q_filesystemmodel_is_read_only(void* self) {
    return QFileSystemModel_IsReadOnly((QFileSystemModel*)self);
}

void q_filesystemmodel_set_name_filter_disables(void* self, bool enable) {
    QFileSystemModel_SetNameFilterDisables((QFileSystemModel*)self, enable);
}

bool q_filesystemmodel_name_filter_disables(void* self) {
    return QFileSystemModel_NameFilterDisables((QFileSystemModel*)self);
}

void q_filesystemmodel_set_name_filters(void* self, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filesystemmodel_set_name_filters\n");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    QFileSystemModel_SetNameFilters((QFileSystemModel*)self, filters_list);
    free(filters_qstr);
}

const char** q_filesystemmodel_name_filters(void* self) {
    libqt_list _arr = QFileSystemModel_NameFilters((QFileSystemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filesystemmodel_name_filters\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_filesystemmodel_set_option(void* self, int32_t option) {
    QFileSystemModel_SetOption((QFileSystemModel*)self, option);
}

bool q_filesystemmodel_test_option(void* self, int32_t option) {
    return QFileSystemModel_TestOption((QFileSystemModel*)self, option);
}

void q_filesystemmodel_set_options(void* self, int32_t options) {
    QFileSystemModel_SetOptions((QFileSystemModel*)self, options);
}

int32_t q_filesystemmodel_options(void* self) {
    return QFileSystemModel_Options((QFileSystemModel*)self);
}

const char* q_filesystemmodel_file_path(void* self, void* index) {
    libqt_string _str = QFileSystemModel_FilePath((QFileSystemModel*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_filesystemmodel_is_dir(void* self, void* index) {
    return QFileSystemModel_IsDir((QFileSystemModel*)self, (QModelIndex*)index);
}

long long q_filesystemmodel_size(void* self, void* index) {
    return QFileSystemModel_Size((QFileSystemModel*)self, (QModelIndex*)index);
}

const char* q_filesystemmodel_type(void* self, void* index) {
    libqt_string _str = QFileSystemModel_Type((QFileSystemModel*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_filesystemmodel_last_modified(void* self, void* index) {
    return QFileSystemModel_LastModified((QFileSystemModel*)self, (QModelIndex*)index);
}

QDateTime* q_filesystemmodel_last_modified2(void* self, void* index, void* tz) {
    return QFileSystemModel_LastModified2((QFileSystemModel*)self, (QModelIndex*)index, (QTimeZone*)tz);
}

QModelIndex* q_filesystemmodel_mkdir(void* self, void* parent, const char* name) {
    return QFileSystemModel_Mkdir((QFileSystemModel*)self, (QModelIndex*)parent, qstring(name));
}

bool q_filesystemmodel_rmdir(void* self, void* index) {
    return QFileSystemModel_Rmdir((QFileSystemModel*)self, (QModelIndex*)index);
}

const char* q_filesystemmodel_file_name(void* self, void* index) {
    libqt_string _str = QFileSystemModel_FileName((QFileSystemModel*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* q_filesystemmodel_file_icon(void* self, void* index) {
    return QFileSystemModel_FileIcon((QFileSystemModel*)self, (QModelIndex*)index);
}

int32_t q_filesystemmodel_permissions(void* self, void* index) {
    return QFileSystemModel_Permissions((QFileSystemModel*)self, (QModelIndex*)index);
}

QFileInfo* q_filesystemmodel_file_info(void* self, void* index) {
    return QFileSystemModel_FileInfo((QFileSystemModel*)self, (QModelIndex*)index);
}

bool q_filesystemmodel_remove(void* self, void* index) {
    return QFileSystemModel_Remove((QFileSystemModel*)self, (QModelIndex*)index);
}

void q_filesystemmodel_timer_event(void* self, void* event) {
    QFileSystemModel_TimerEvent((QFileSystemModel*)self, (QTimerEvent*)event);
}

void q_filesystemmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFileSystemModel_OnTimerEvent((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_super_timer_event(void* self, void* event) {
    QFileSystemModel_SuperTimerEvent((QFileSystemModel*)self, (QTimerEvent*)event);
}

bool q_filesystemmodel_event(void* self, void* event) {
    return QFileSystemModel_Event((QFileSystemModel*)self, (QEvent*)event);
}

void q_filesystemmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QFileSystemModel_OnEvent((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_super_event(void* self, void* event) {
    return QFileSystemModel_SuperEvent((QFileSystemModel*)self, (QEvent*)event);
}

const char* q_filesystemmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_filesystemmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* q_filesystemmodel_index22(void* self, const char* path, int column) {
    return QFileSystemModel_Index22((QFileSystemModel*)self, qstring(path), column);
}

QVariant* q_filesystemmodel_my_computer1(void* self, int role) {
    return QFileSystemModel_MyComputer1((QFileSystemModel*)self, role);
}

void q_filesystemmodel_set_option2(void* self, int32_t option, bool on) {
    QFileSystemModel_SetOption2((QFileSystemModel*)self, option, on);
}

bool q_filesystemmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_filesystemmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_filesystemmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_filesystemmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_filesystemmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_filesystemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_filesystemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_filesystemmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_filesystemmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_filesystemmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_filesystemmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_filesystemmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_filesystemmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_filesystemmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_filesystemmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_filesystemmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_filesystemmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_filesystemmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_filesystemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_filesystemmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_filesystemmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_filesystemmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_filesystemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_filesystemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_filesystemmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_filesystemmodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_filesystemmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_filesystemmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_filesystemmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_filesystemmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_filesystemmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_filesystemmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_filesystemmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_filesystemmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_filesystemmodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_filesystemmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_filesystemmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_filesystemmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_filesystemmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_filesystemmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_filesystemmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_filesystemmodel_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_filesystemmodel_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_filesystemmodel_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_filesystemmodel_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_filesystemmodel_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_filesystemmodel_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_filesystemmodel_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_filesystemmodel_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_filesystemmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_filesystemmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_filesystemmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_filesystemmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_filesystemmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_filesystemmodel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_filesystemmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_filesystemmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_filesystemmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_filesystemmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_filesystemmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_filesystemmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_filesystemmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_filesystemmodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_filesystemmodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_filesystemmodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_filesystemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_filesystemmodel_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_filesystemmodel_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_filesystemmodel_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_filesystemmodel_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_filesystemmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_filesystemmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_filesystemmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QFileSystemModel_SetHeaderData((QFileSystemModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_filesystemmodel_super_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QFileSystemModel_SuperSetHeaderData((QFileSystemModel*)self, section, orientation, (QVariant*)value, role);
}

void q_filesystemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QFileSystemModel_OnSetHeaderData((QFileSystemModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_filesystemmodel_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QFileSystemModel_ItemData((QFileSystemModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

libqt_map /* of int to QVariant* */ q_filesystemmodel_super_item_data(void* self, void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QFileSystemModel_SuperItemData((QFileSystemModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_filesystemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QFileSystemModel_OnItemData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_filesystemmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_filesystemmodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = QFileSystemModel_SetItemData((QFileSystemModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

bool q_filesystemmodel_super_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_filesystemmodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_filesystemmodel_set_item_data\n");
        abort();
    }
    int* roles_karr = (int*)roles.keys;
    int* roles_kdest = (int*)roles_ret.keys;
    QVariant** roles_varr = (QVariant**)roles.values;
    QVariant** roles_vdest = (QVariant**)roles_ret.values;
    for (size_t i = 0; i < roles_ret.len; ++i) {
        roles_kdest[i] = roles_karr[i];
        roles_vdest[i] = roles_varr[i];
    }
    bool _out = QFileSystemModel_SuperSetItemData((QFileSystemModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_filesystemmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QFileSystemModel_OnSetItemData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_clear_item_data(void* self, void* index) {
    return QFileSystemModel_ClearItemData((QFileSystemModel*)self, (QModelIndex*)index);
}

bool q_filesystemmodel_super_clear_item_data(void* self, void* index) {
    return QFileSystemModel_SuperClearItemData((QFileSystemModel*)self, (QModelIndex*)index);
}

void q_filesystemmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QFileSystemModel_OnClearItemData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QFileSystemModel_CanDropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_filesystemmodel_super_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QFileSystemModel_SuperCanDropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_filesystemmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QFileSystemModel_OnCanDropMimeData((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_supported_drag_actions(void* self) {
    return QFileSystemModel_SupportedDragActions((QFileSystemModel*)self);
}

int32_t q_filesystemmodel_super_supported_drag_actions(void* self) {
    return QFileSystemModel_SuperSupportedDragActions((QFileSystemModel*)self);
}

void q_filesystemmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QFileSystemModel_OnSupportedDragActions((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_InsertRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_filesystemmodel_super_insert_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_SuperInsertRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

void q_filesystemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QFileSystemModel_OnInsertRows((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_InsertColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

bool q_filesystemmodel_super_insert_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_SuperInsertColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

void q_filesystemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QFileSystemModel_OnInsertColumns((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_RemoveRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_filesystemmodel_super_remove_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_SuperRemoveRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

void q_filesystemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QFileSystemModel_OnRemoveRows((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_RemoveColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

bool q_filesystemmodel_super_remove_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_SuperRemoveColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

void q_filesystemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QFileSystemModel_OnRemoveColumns((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_MoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_filesystemmodel_super_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_SuperMoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_filesystemmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnMoveRows((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_MoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_filesystemmodel_super_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_SuperMoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_filesystemmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnMoveColumns((QFileSystemModel*)self, (intptr_t)callback);
}

QModelIndex* q_filesystemmodel_buddy(void* self, void* index) {
    return QFileSystemModel_Buddy((QFileSystemModel*)self, (QModelIndex*)index);
}

QModelIndex* q_filesystemmodel_super_buddy(void* self, void* index) {
    return QFileSystemModel_SuperBuddy((QFileSystemModel*)self, (QModelIndex*)index);
}

void q_filesystemmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QFileSystemModel_OnBuddy((QFileSystemModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_filesystemmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QFileSystemModel_Match((QFileSystemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_filesystemmodel_super_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QFileSystemModel_SuperMatch((QFileSystemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_filesystemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int32_t)) {
    QFileSystemModel_OnMatch((QFileSystemModel*)self, (intptr_t)callback);
}

QSize* q_filesystemmodel_span(void* self, void* index) {
    return QFileSystemModel_Span((QFileSystemModel*)self, (QModelIndex*)index);
}

QSize* q_filesystemmodel_super_span(void* self, void* index) {
    return QFileSystemModel_SuperSpan((QFileSystemModel*)self, (QModelIndex*)index);
}

void q_filesystemmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QFileSystemModel_OnSpan((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QFileSystemModel_MultiData((QFileSystemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_filesystemmodel_super_multi_data(void* self, void* index, void* roleDataSpan) {
    QFileSystemModel_SuperMultiData((QFileSystemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_filesystemmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QFileSystemModel_OnMultiData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_submit(void* self) {
    return QFileSystemModel_Submit((QFileSystemModel*)self);
}

bool q_filesystemmodel_super_submit(void* self) {
    return QFileSystemModel_SuperSubmit((QFileSystemModel*)self);
}

void q_filesystemmodel_on_submit(void* self, bool (*callback)()) {
    QFileSystemModel_OnSubmit((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_revert(void* self) {
    QFileSystemModel_Revert((QFileSystemModel*)self);
}

void q_filesystemmodel_super_revert(void* self) {
    QFileSystemModel_SuperRevert((QFileSystemModel*)self);
}

void q_filesystemmodel_on_revert(void* self, void (*callback)()) {
    QFileSystemModel_OnRevert((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_reset_internal_data(void* self) {
    QFileSystemModel_ResetInternalData((QFileSystemModel*)self);
}

void q_filesystemmodel_super_reset_internal_data(void* self) {
    QFileSystemModel_SuperResetInternalData((QFileSystemModel*)self);
}

void q_filesystemmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QFileSystemModel_OnResetInternalData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_event_filter(void* self, void* watched, void* event) {
    return QFileSystemModel_EventFilter((QFileSystemModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_filesystemmodel_super_event_filter(void* self, void* watched, void* event) {
    return QFileSystemModel_SuperEventFilter((QFileSystemModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_filesystemmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFileSystemModel_OnEventFilter((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_child_event(void* self, void* event) {
    QFileSystemModel_ChildEvent((QFileSystemModel*)self, (QChildEvent*)event);
}

void q_filesystemmodel_super_child_event(void* self, void* event) {
    QFileSystemModel_SuperChildEvent((QFileSystemModel*)self, (QChildEvent*)event);
}

void q_filesystemmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFileSystemModel_OnChildEvent((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_custom_event(void* self, void* event) {
    QFileSystemModel_CustomEvent((QFileSystemModel*)self, (QEvent*)event);
}

void q_filesystemmodel_super_custom_event(void* self, void* event) {
    QFileSystemModel_SuperCustomEvent((QFileSystemModel*)self, (QEvent*)event);
}

void q_filesystemmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFileSystemModel_OnCustomEvent((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_connect_notify(void* self, void* signal) {
    QFileSystemModel_ConnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

void q_filesystemmodel_super_connect_notify(void* self, void* signal) {
    QFileSystemModel_SuperConnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

void q_filesystemmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFileSystemModel_OnConnectNotify((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_disconnect_notify(void* self, void* signal) {
    QFileSystemModel_DisconnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

void q_filesystemmodel_super_disconnect_notify(void* self, void* signal) {
    QFileSystemModel_SuperDisconnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

void q_filesystemmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFileSystemModel_OnDisconnectNotify((QFileSystemModel*)self, (intptr_t)callback);
}

QModelIndex* q_filesystemmodel_create_index(void* self, int row, int column) {
    return QFileSystemModel_CreateIndex((QFileSystemModel*)self, row, column);
}

QModelIndex* q_filesystemmodel_super_create_index(void* self, int row, int column) {
    return QFileSystemModel_SuperCreateIndex((QFileSystemModel*)self, row, column);
}

void q_filesystemmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QFileSystemModel_OnCreateIndex((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QFileSystemModel_EncodeData((QFileSystemModel*)self, indexes, (QDataStream*)stream);
}

void q_filesystemmodel_super_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QFileSystemModel_SuperEncodeData((QFileSystemModel*)self, indexes, (QDataStream*)stream);
}

void q_filesystemmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, void*)) {
    QFileSystemModel_OnEncodeData((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QFileSystemModel_DecodeData((QFileSystemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_filesystemmodel_super_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QFileSystemModel_SuperDecodeData((QFileSystemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_filesystemmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QFileSystemModel_OnDecodeData((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginInsertRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_super_begin_insert_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_SuperBeginInsertRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginInsertRows((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_end_insert_rows(void* self) {
    QFileSystemModel_EndInsertRows((QFileSystemModel*)self);
}

void q_filesystemmodel_super_end_insert_rows(void* self) {
    QFileSystemModel_SuperEndInsertRows((QFileSystemModel*)self);
}

void q_filesystemmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QFileSystemModel_OnEndInsertRows((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginRemoveRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_super_begin_remove_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_SuperBeginRemoveRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginRemoveRows((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_end_remove_rows(void* self) {
    QFileSystemModel_EndRemoveRows((QFileSystemModel*)self);
}

void q_filesystemmodel_super_end_remove_rows(void* self) {
    QFileSystemModel_SuperEndRemoveRows((QFileSystemModel*)self);
}

void q_filesystemmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QFileSystemModel_OnEndRemoveRows((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QFileSystemModel_BeginMoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_filesystemmodel_super_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QFileSystemModel_SuperBeginMoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_filesystemmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnBeginMoveRows((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_end_move_rows(void* self) {
    QFileSystemModel_EndMoveRows((QFileSystemModel*)self);
}

void q_filesystemmodel_super_end_move_rows(void* self) {
    QFileSystemModel_SuperEndMoveRows((QFileSystemModel*)self);
}

void q_filesystemmodel_on_end_move_rows(void* self, void (*callback)()) {
    QFileSystemModel_OnEndMoveRows((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginInsertColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_super_begin_insert_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_SuperBeginInsertColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginInsertColumns((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_end_insert_columns(void* self) {
    QFileSystemModel_EndInsertColumns((QFileSystemModel*)self);
}

void q_filesystemmodel_super_end_insert_columns(void* self) {
    QFileSystemModel_SuperEndInsertColumns((QFileSystemModel*)self);
}

void q_filesystemmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QFileSystemModel_OnEndInsertColumns((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginRemoveColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_super_begin_remove_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_SuperBeginRemoveColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

void q_filesystemmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginRemoveColumns((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_end_remove_columns(void* self) {
    QFileSystemModel_EndRemoveColumns((QFileSystemModel*)self);
}

void q_filesystemmodel_super_end_remove_columns(void* self) {
    QFileSystemModel_SuperEndRemoveColumns((QFileSystemModel*)self);
}

void q_filesystemmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QFileSystemModel_OnEndRemoveColumns((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QFileSystemModel_BeginMoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_filesystemmodel_super_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QFileSystemModel_SuperBeginMoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_filesystemmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnBeginMoveColumns((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_end_move_columns(void* self) {
    QFileSystemModel_EndMoveColumns((QFileSystemModel*)self);
}

void q_filesystemmodel_super_end_move_columns(void* self) {
    QFileSystemModel_SuperEndMoveColumns((QFileSystemModel*)self);
}

void q_filesystemmodel_on_end_move_columns(void* self, void (*callback)()) {
    QFileSystemModel_OnEndMoveColumns((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_begin_reset_model(void* self) {
    QFileSystemModel_BeginResetModel((QFileSystemModel*)self);
}

void q_filesystemmodel_super_begin_reset_model(void* self) {
    QFileSystemModel_SuperBeginResetModel((QFileSystemModel*)self);
}

void q_filesystemmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QFileSystemModel_OnBeginResetModel((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_end_reset_model(void* self) {
    QFileSystemModel_EndResetModel((QFileSystemModel*)self);
}

void q_filesystemmodel_super_end_reset_model(void* self) {
    QFileSystemModel_SuperEndResetModel((QFileSystemModel*)self);
}

void q_filesystemmodel_on_end_reset_model(void* self, void (*callback)()) {
    QFileSystemModel_OnEndResetModel((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_change_persistent_index(void* self, void* from, void* to) {
    QFileSystemModel_ChangePersistentIndex((QFileSystemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_filesystemmodel_super_change_persistent_index(void* self, void* from, void* to) {
    QFileSystemModel_SuperChangePersistentIndex((QFileSystemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_filesystemmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QFileSystemModel_OnChangePersistentIndex((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QFileSystemModel_ChangePersistentIndexList((QFileSystemModel*)self, from, to);
}

void q_filesystemmodel_super_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QFileSystemModel_SuperChangePersistentIndexList((QFileSystemModel*)self, from, to);
}

void q_filesystemmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)) {
    QFileSystemModel_OnChangePersistentIndexList((QFileSystemModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_filesystemmodel_persistent_index_list(void* self) {
    libqt_list _arr = QFileSystemModel_PersistentIndexList((QFileSystemModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_filesystemmodel_super_persistent_index_list(void* self) {
    libqt_list _arr = QFileSystemModel_SuperPersistentIndexList((QFileSystemModel*)self);
    return _arr;
}

void q_filesystemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QFileSystemModel_OnPersistentIndexList((QFileSystemModel*)self, (intptr_t)callback);
}

QObject* q_filesystemmodel_sender(void* self) {
    return QFileSystemModel_Sender((QFileSystemModel*)self);
}

QObject* q_filesystemmodel_super_sender(void* self) {
    return QFileSystemModel_SuperSender((QFileSystemModel*)self);
}

void q_filesystemmodel_on_sender(void* self, QObject* (*callback)()) {
    QFileSystemModel_OnSender((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_sender_signal_index(void* self) {
    return QFileSystemModel_SenderSignalIndex((QFileSystemModel*)self);
}

int32_t q_filesystemmodel_super_sender_signal_index(void* self) {
    return QFileSystemModel_SuperSenderSignalIndex((QFileSystemModel*)self);
}

void q_filesystemmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFileSystemModel_OnSenderSignalIndex((QFileSystemModel*)self, (intptr_t)callback);
}

int32_t q_filesystemmodel_receivers(void* self, const char* signal) {
    return QFileSystemModel_Receivers((QFileSystemModel*)self, signal);
}

int32_t q_filesystemmodel_super_receivers(void* self, const char* signal) {
    return QFileSystemModel_SuperReceivers((QFileSystemModel*)self, signal);
}

void q_filesystemmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFileSystemModel_OnReceivers((QFileSystemModel*)self, (intptr_t)callback);
}

bool q_filesystemmodel_is_signal_connected(void* self, void* signal) {
    return QFileSystemModel_IsSignalConnected((QFileSystemModel*)self, (QMetaMethod*)signal);
}

bool q_filesystemmodel_super_is_signal_connected(void* self, void* signal) {
    return QFileSystemModel_SuperIsSignalConnected((QFileSystemModel*)self, (QMetaMethod*)signal);
}

void q_filesystemmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFileSystemModel_OnIsSignalConnected((QFileSystemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_filesystemmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_filesystemmodel_delete(void* self) {
    QFileSystemModel_Delete((QFileSystemModel*)(self));
}
