#include "libqabstractitemmodel.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqabstractproxymodel.h"

QAbstractProxyModel* q_abstractproxymodel_new() {
    return QAbstractProxyModel_New();
}

QAbstractProxyModel* q_abstractproxymodel_new2(void* parent) {
    return QAbstractProxyModel_New2((QObject*)parent);
}

const QMetaObject* q_abstractproxymodel_meta_object(const void* self) {
    return QAbstractProxyModel_MetaObject((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QAbstractProxyModel_OnMetaObject((QAbstractProxyModel*)self, (intptr_t)callback);
}

const QMetaObject* q_abstractproxymodel_super_meta_object(const void* self) {
    return QAbstractProxyModel_SuperMetaObject((QAbstractProxyModel*)self);
}

void* q_abstractproxymodel_metacast(void* self, const char* param1) {
    return QAbstractProxyModel_Metacast((QAbstractProxyModel*)self, param1);
}

void q_abstractproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAbstractProxyModel_OnMetacast((QAbstractProxyModel*)self, (intptr_t)callback);
}

void* q_abstractproxymodel_super_metacast(void* self, const char* param1) {
    return QAbstractProxyModel_SuperMetacast((QAbstractProxyModel*)self, param1);
}

int32_t q_abstractproxymodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractProxyModel_Metacall((QAbstractProxyModel*)self, param1, param2, param3);
}

void q_abstractproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAbstractProxyModel_OnMetacall((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractProxyModel_SuperMetacall((QAbstractProxyModel*)self, param1, param2, param3);
}

const char* q_abstractproxymodel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractproxymodel_set_source_model(void* self, void* sourceModel) {
    QAbstractProxyModel_SetSourceModel((QAbstractProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

void q_abstractproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnSetSourceModel((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_super_set_source_model(void* self, void* sourceModel) {
    QAbstractProxyModel_SuperSetSourceModel((QAbstractProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

QAbstractItemModel* q_abstractproxymodel_source_model(const void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

QModelIndex* q_abstractproxymodel_map_to_source(const void* self, const void* proxyIndex) {
    return QAbstractProxyModel_MapToSource((QAbstractProxyModel*)self, (QModelIndex*)proxyIndex);
}

void q_abstractproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnMapToSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_map_from_source(const void* self, const void* sourceIndex) {
    return QAbstractProxyModel_MapFromSource((QAbstractProxyModel*)self, (QModelIndex*)sourceIndex);
}

void q_abstractproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnMapFromSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_abstractproxymodel_map_selection_to_source(const void* self, const void* selection) {
    return QAbstractProxyModel_MapSelectionToSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

void q_abstractproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnMapSelectionToSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_abstractproxymodel_super_map_selection_to_source(const void* self, const void* selection) {
    return QAbstractProxyModel_SuperMapSelectionToSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

QItemSelection* q_abstractproxymodel_map_selection_from_source(const void* self, const void* selection) {
    return QAbstractProxyModel_MapSelectionFromSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

void q_abstractproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnMapSelectionFromSource((QAbstractProxyModel*)self, (intptr_t)callback);
}

QItemSelection* q_abstractproxymodel_super_map_selection_from_source(const void* self, const void* selection) {
    return QAbstractProxyModel_SuperMapSelectionFromSource((QAbstractProxyModel*)self, (QItemSelection*)selection);
}

bool q_abstractproxymodel_submit(void* self) {
    return QAbstractProxyModel_Submit((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_submit(void* self, bool (*callback)(void*)) {
    QAbstractProxyModel_OnSubmit((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_submit(void* self) {
    return QAbstractProxyModel_SuperSubmit((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_revert(void* self) {
    QAbstractProxyModel_Revert((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_revert(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_OnRevert((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_super_revert(void* self) {
    QAbstractProxyModel_SuperRevert((QAbstractProxyModel*)self);
}

QVariant* q_abstractproxymodel_data(const void* self, const void* proxyIndex, int role) {
    return QAbstractProxyModel_Data((QAbstractProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

void q_abstractproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int)) {
    QAbstractProxyModel_OnData((QAbstractProxyModel*)self, (intptr_t)callback);
}

QVariant* q_abstractproxymodel_super_data(const void* self, const void* proxyIndex, int role) {
    return QAbstractProxyModel_SuperData((QAbstractProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

QVariant* q_abstractproxymodel_header_data(const void* self, int section, int32_t orientation, int role) {
    return QAbstractProxyModel_HeaderData((QAbstractProxyModel*)self, section, orientation, role);
}

void q_abstractproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int)) {
    QAbstractProxyModel_OnHeaderData((QAbstractProxyModel*)self, (intptr_t)callback);
}

QVariant* q_abstractproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role) {
    return QAbstractProxyModel_SuperHeaderData((QAbstractProxyModel*)self, section, orientation, role);
}

libqt_map /* of int to QVariant* */ q_abstractproxymodel_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QAbstractProxyModel_ItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_abstractproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnItemData((QAbstractProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_abstractproxymodel_super_item_data(const void* self, const void* index) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QAbstractProxyModel_SuperItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

int32_t q_abstractproxymodel_flags(const void* self, const void* index) {
    return QAbstractProxyModel_Flags((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnFlags((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_super_flags(const void* self, const void* index) {
    return QAbstractProxyModel_SuperFlags((QAbstractProxyModel*)self, (QModelIndex*)index);
}

bool q_abstractproxymodel_set_data(void* self, const void* index, const void* value, int role) {
    return QAbstractProxyModel_SetData((QAbstractProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_abstractproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int)) {
    QAbstractProxyModel_OnSetData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_set_data(void* self, const void* index, const void* value, int role) {
    return QAbstractProxyModel_SuperSetData((QAbstractProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_abstractproxymodel_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_abstractproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_abstractproxymodel_set_item_data\n");
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
    bool _out = QAbstractProxyModel_SetItemData((QAbstractProxyModel*)self, (QModelIndex*)index, roles_ret);
    free(roles_ret.keys);
    free(roles_ret.values);
    return _out;
}

void q_abstractproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map /* of int to QVariant* */)) {
    QAbstractProxyModel_OnSetItemData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_set_item_data(void* self, const void* index, libqt_map /* of int to QVariant* */ roles) {
    // Convert libqt_map to QMap<int,QVariant>
    libqt_map roles_ret;
    roles_ret.len = roles.len;
    roles_ret.keys = (int*)malloc(roles_ret.len * sizeof(int));
    if (roles_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_abstractproxymodel_set_item_data\n");
        abort();
    }
    roles_ret.values = (QVariant**)malloc(roles_ret.len * sizeof(QVariant*));
    if (roles_ret.values == NULL) {
        free(roles_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_abstractproxymodel_set_item_data\n");
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
    return QAbstractProxyModel_SuperSetItemData((QAbstractProxyModel*)self, (QModelIndex*)index, roles_ret);
}

bool q_abstractproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QAbstractProxyModel_SetHeaderData((QAbstractProxyModel*)self, section, orientation, (QVariant*)value, role);
}

void q_abstractproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int)) {
    QAbstractProxyModel_OnSetHeaderData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role) {
    return QAbstractProxyModel_SuperSetHeaderData((QAbstractProxyModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_abstractproxymodel_clear_item_data(void* self, const void* index) {
    return QAbstractProxyModel_ClearItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*)) {
    QAbstractProxyModel_OnClearItemData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_clear_item_data(void* self, const void* index) {
    return QAbstractProxyModel_SuperClearItemData((QAbstractProxyModel*)self, (QModelIndex*)index);
}

QModelIndex* q_abstractproxymodel_buddy(const void* self, const void* index) {
    return QAbstractProxyModel_Buddy((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnBuddy((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_super_buddy(const void* self, const void* index) {
    return QAbstractProxyModel_SuperBuddy((QAbstractProxyModel*)self, (QModelIndex*)index);
}

bool q_abstractproxymodel_can_fetch_more(const void* self, const void* parent) {
    return QAbstractProxyModel_CanFetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnCanFetchMore((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_can_fetch_more(const void* self, const void* parent) {
    return QAbstractProxyModel_SuperCanFetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_fetch_more(void* self, const void* parent) {
    QAbstractProxyModel_FetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*)) {
    QAbstractProxyModel_OnFetchMore((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_super_fetch_more(void* self, const void* parent) {
    QAbstractProxyModel_SuperFetchMore((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_sort(void* self, int column, int32_t order) {
    QAbstractProxyModel_Sort((QAbstractProxyModel*)self, column, order);
}

void q_abstractproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QAbstractProxyModel_OnSort((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_super_sort(void* self, int column, int32_t order) {
    QAbstractProxyModel_SuperSort((QAbstractProxyModel*)self, column, order);
}

QSize* q_abstractproxymodel_span(const void* self, const void* index) {
    return QAbstractProxyModel_Span((QAbstractProxyModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnSpan((QAbstractProxyModel*)self, (intptr_t)callback);
}

QSize* q_abstractproxymodel_super_span(const void* self, const void* index) {
    return QAbstractProxyModel_SuperSpan((QAbstractProxyModel*)self, (QModelIndex*)index);
}

bool q_abstractproxymodel_has_children(const void* self, const void* parent) {
    return QAbstractProxyModel_HasChildren((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnHasChildren((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_has_children(const void* self, const void* parent) {
    return QAbstractProxyModel_SuperHasChildren((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

QModelIndex* q_abstractproxymodel_sibling(const void* self, int row, int column, const void* idx) {
    return QAbstractProxyModel_Sibling((QAbstractProxyModel*)self, row, column, (QModelIndex*)idx);
}

void q_abstractproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QAbstractProxyModel_OnSibling((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_super_sibling(const void* self, int row, int column, const void* idx) {
    return QAbstractProxyModel_SuperSibling((QAbstractProxyModel*)self, row, column, (QModelIndex*)idx);
}

QMimeData* q_abstractproxymodel_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QAbstractProxyModel_MimeData((QAbstractProxyModel*)self, indexes);
}

void q_abstractproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list /* of QModelIndex* */)) {
    QAbstractProxyModel_OnMimeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

QMimeData* q_abstractproxymodel_super_mime_data(const void* self, libqt_list /* of QModelIndex* */ indexes) {
    return QAbstractProxyModel_SuperMimeData((QAbstractProxyModel*)self, indexes);
}

bool q_abstractproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QAbstractProxyModel_CanDropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*)) {
    QAbstractProxyModel_OnCanDropMimeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QAbstractProxyModel_SuperCanDropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QAbstractProxyModel_DropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*)) {
    QAbstractProxyModel_OnDropMimeData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent) {
    return QAbstractProxyModel_SuperDropMimeData((QAbstractProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

const char** q_abstractproxymodel_mime_types(const void* self) {
    libqt_list _arr = QAbstractProxyModel_MimeTypes((QAbstractProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstractproxymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_abstractproxymodel_on_mime_types(void* self, const char** (*callback)(const void*)) {
    QAbstractProxyModel_OnMimeTypes((QAbstractProxyModel*)self, (intptr_t)callback);
}

const char** q_abstractproxymodel_super_mime_types(const void* self) {
    libqt_list _arr = QAbstractProxyModel_SuperMimeTypes((QAbstractProxyModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstractproxymodel_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t q_abstractproxymodel_supported_drag_actions(const void* self) {
    return QAbstractProxyModel_SupportedDragActions((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*)) {
    QAbstractProxyModel_OnSupportedDragActions((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_super_supported_drag_actions(const void* self) {
    return QAbstractProxyModel_SuperSupportedDragActions((QAbstractProxyModel*)self);
}

int32_t q_abstractproxymodel_supported_drop_actions(const void* self) {
    return QAbstractProxyModel_SupportedDropActions((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*)) {
    QAbstractProxyModel_OnSupportedDropActions((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_super_supported_drop_actions(const void* self) {
    return QAbstractProxyModel_SuperSupportedDropActions((QAbstractProxyModel*)self);
}

libqt_map /* of int to const char* */ q_abstractproxymodel_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QAbstractProxyModel_RoleNames((QAbstractProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_abstractproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_abstractproxymodel_role_names\n");
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

void q_abstractproxymodel_on_role_names(void* self, libqt_map /* of int to const char* */ (*callback)(const void*)) {
    QAbstractProxyModel_OnRoleNames((QAbstractProxyModel*)self, (intptr_t)callback);
}

libqt_map /* of int to const char* */ q_abstractproxymodel_super_role_names(const void* self) {
    // Convert QHash<int,QByteArray> to libqt_map
    libqt_map _out = QAbstractProxyModel_SuperRoleNames((QAbstractProxyModel*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_abstractproxymodel_role_names\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_abstractproxymodel_role_names\n");
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

QModelIndex* q_abstractproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr) {
    return QAbstractProxyModel_CreateSourceIndex((QAbstractProxyModel*)self, row, col, internalPtr);
}

const char* q_abstractproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractproxymodel_has_index(const void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_abstractproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool q_abstractproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool q_abstractproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_abstractproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_abstractproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_check_index(const void* self, const void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_abstractproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_abstractproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_abstractproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_abstractproxymodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_abstractproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_has_index3(const void* self, int row, int column, const void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_insert_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractproxymodel_insert_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_remove_row2(void* self, int row, const void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_abstractproxymodel_remove_column2(void* self, int column, const void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_abstractproxymodel_check_index2(const void* self, const void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_abstractproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list /* of int */ roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_abstractproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list /* of int */)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_abstractproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_abstractproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list /* of QPersistentModelIndex* */, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_abstractproxymodel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractproxymodel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractproxymodel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractproxymodel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractproxymodel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractproxymodel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractproxymodel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractproxymodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_abstractproxymodel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_abstractproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractproxymodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractproxymodel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_abstractproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_abstractproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractproxymodel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_abstractproxymodel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_abstractproxymodel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_abstractproxymodel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractproxymodel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractproxymodel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractproxymodel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractproxymodel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstractproxymodel_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_abstractproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractproxymodel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractproxymodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstractproxymodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_abstractproxymodel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_abstractproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_abstractproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstractproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_abstractproxymodel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_abstractproxymodel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_abstractproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_abstractproxymodel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_abstractproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_index(const void* self, int row, int column, const void* parent) {
    return QAbstractProxyModel_Index((QAbstractProxyModel*)self, row, column, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*)) {
    QAbstractProxyModel_OnIndex((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_parent(const void* self, const void* child) {
    return QAbstractProxyModel_Parent((QAbstractProxyModel*)self, (QModelIndex*)child);
}

void q_abstractproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnParent((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_row_count(const void* self, const void* parent) {
    return QAbstractProxyModel_RowCount((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnRowCount((QAbstractProxyModel*)self, (intptr_t)callback);
}

int32_t q_abstractproxymodel_column_count(const void* self, const void* parent) {
    return QAbstractProxyModel_ColumnCount((QAbstractProxyModel*)self, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*)) {
    QAbstractProxyModel_OnColumnCount((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_insert_rows(void* self, int row, int count, const void* parent) {
    return QAbstractProxyModel_InsertRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_super_insert_rows(void* self, int row, int count, const void* parent) {
    return QAbstractProxyModel_SuperInsertRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QAbstractProxyModel_OnInsertRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_insert_columns(void* self, int column, int count, const void* parent) {
    return QAbstractProxyModel_InsertColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_super_insert_columns(void* self, int column, int count, const void* parent) {
    return QAbstractProxyModel_SuperInsertColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QAbstractProxyModel_OnInsertColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_remove_rows(void* self, int row, int count, const void* parent) {
    return QAbstractProxyModel_RemoveRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_super_remove_rows(void* self, int row, int count, const void* parent) {
    return QAbstractProxyModel_SuperRemoveRows((QAbstractProxyModel*)self, row, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*)) {
    QAbstractProxyModel_OnRemoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_remove_columns(void* self, int column, int count, const void* parent) {
    return QAbstractProxyModel_RemoveColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

bool q_abstractproxymodel_super_remove_columns(void* self, int column, int count, const void* parent) {
    return QAbstractProxyModel_SuperRemoveColumns((QAbstractProxyModel*)self, column, count, (QModelIndex*)parent);
}

void q_abstractproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*)) {
    QAbstractProxyModel_OnRemoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_MoveRows((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_SuperMoveRows((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractProxyModel_OnMoveRows((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_MoveColumns((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_abstractproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild) {
    return QAbstractProxyModel_SuperMoveColumns((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_abstractproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractProxyModel_OnMoveColumns((QAbstractProxyModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_abstractproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QAbstractProxyModel_Match((QAbstractProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_abstractproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags) {
    libqt_list _arr = QAbstractProxyModel_SuperMatch((QAbstractProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_abstractproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(const void*, const void*, int, const void*, int, int32_t)) {
    QAbstractProxyModel_OnMatch((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QAbstractProxyModel_MultiData((QAbstractProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan) {
    QAbstractProxyModel_SuperMultiData((QAbstractProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_abstractproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*)) {
    QAbstractProxyModel_OnMultiData((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_reset_internal_data(void* self) {
    QAbstractProxyModel_ResetInternalData((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_super_reset_internal_data(void* self) {
    QAbstractProxyModel_SuperResetInternalData((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_on_reset_internal_data(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_OnResetInternalData((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_event(void* self, void* event) {
    return QAbstractProxyModel_Event((QAbstractProxyModel*)self, (QEvent*)event);
}

bool q_abstractproxymodel_super_event(void* self, void* event) {
    return QAbstractProxyModel_SuperEvent((QAbstractProxyModel*)self, (QEvent*)event);
}

void q_abstractproxymodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractProxyModel_OnEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

bool q_abstractproxymodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractProxyModel_EventFilter((QAbstractProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractproxymodel_super_event_filter(void* self, void* watched, void* event) {
    return QAbstractProxyModel_SuperEventFilter((QAbstractProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractProxyModel_OnEventFilter((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_timer_event(void* self, void* event) {
    QAbstractProxyModel_TimerEvent((QAbstractProxyModel*)self, (QTimerEvent*)event);
}

void q_abstractproxymodel_super_timer_event(void* self, void* event) {
    QAbstractProxyModel_SuperTimerEvent((QAbstractProxyModel*)self, (QTimerEvent*)event);
}

void q_abstractproxymodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnTimerEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_child_event(void* self, void* event) {
    QAbstractProxyModel_ChildEvent((QAbstractProxyModel*)self, (QChildEvent*)event);
}

void q_abstractproxymodel_super_child_event(void* self, void* event) {
    QAbstractProxyModel_SuperChildEvent((QAbstractProxyModel*)self, (QChildEvent*)event);
}

void q_abstractproxymodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnChildEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_custom_event(void* self, void* event) {
    QAbstractProxyModel_CustomEvent((QAbstractProxyModel*)self, (QEvent*)event);
}

void q_abstractproxymodel_super_custom_event(void* self, void* event) {
    QAbstractProxyModel_SuperCustomEvent((QAbstractProxyModel*)self, (QEvent*)event);
}

void q_abstractproxymodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractProxyModel_OnCustomEvent((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_connect_notify(void* self, const void* signal) {
    QAbstractProxyModel_ConnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_super_connect_notify(void* self, const void* signal) {
    QAbstractProxyModel_SuperConnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QAbstractProxyModel_OnConnectNotify((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_disconnect_notify(void* self, const void* signal) {
    QAbstractProxyModel_DisconnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_super_disconnect_notify(void* self, const void* signal) {
    QAbstractProxyModel_SuperDisconnectNotify((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QAbstractProxyModel_OnDisconnectNotify((QAbstractProxyModel*)self, (intptr_t)callback);
}

QModelIndex* q_abstractproxymodel_create_index(const void* self, int row, int column) {
    return QAbstractProxyModel_CreateIndex((QAbstractProxyModel*)self, row, column);
}

void q_abstractproxymodel_encode_data(const void* self, libqt_list /* of QModelIndex* */ indexes, void* stream) {
    QAbstractProxyModel_EncodeData((QAbstractProxyModel*)self, indexes, (QDataStream*)stream);
}

bool q_abstractproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream) {
    return QAbstractProxyModel_DecodeData((QAbstractProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_abstractproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last) {
    QAbstractProxyModel_BeginInsertRows((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_end_insert_rows(void* self) {
    QAbstractProxyModel_EndInsertRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last) {
    QAbstractProxyModel_BeginRemoveRows((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_end_remove_rows(void* self) {
    QAbstractProxyModel_EndRemoveRows((QAbstractProxyModel*)self);
}

bool q_abstractproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow) {
    return QAbstractProxyModel_BeginMoveRows((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_abstractproxymodel_end_move_rows(void* self) {
    QAbstractProxyModel_EndMoveRows((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last) {
    QAbstractProxyModel_BeginInsertColumns((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_end_insert_columns(void* self) {
    QAbstractProxyModel_EndInsertColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last) {
    QAbstractProxyModel_BeginRemoveColumns((QAbstractProxyModel*)self, (QModelIndex*)parent, first, last);
}

void q_abstractproxymodel_end_remove_columns(void* self) {
    QAbstractProxyModel_EndRemoveColumns((QAbstractProxyModel*)self);
}

bool q_abstractproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn) {
    return QAbstractProxyModel_BeginMoveColumns((QAbstractProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_abstractproxymodel_end_move_columns(void* self) {
    QAbstractProxyModel_EndMoveColumns((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_begin_reset_model(void* self) {
    QAbstractProxyModel_BeginResetModel((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_end_reset_model(void* self) {
    QAbstractProxyModel_EndResetModel((QAbstractProxyModel*)self);
}

void q_abstractproxymodel_change_persistent_index(void* self, const void* from, const void* to) {
    QAbstractProxyModel_ChangePersistentIndex((QAbstractProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_abstractproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QAbstractProxyModel_ChangePersistentIndexList((QAbstractProxyModel*)self, from, to);
}

libqt_list /* of QModelIndex* */ q_abstractproxymodel_persistent_index_list(const void* self) {
    libqt_list _arr = QAbstractProxyModel_PersistentIndexList((QAbstractProxyModel*)self);
    return _arr;
}

QObject* q_abstractproxymodel_sender(const void* self) {
    return QAbstractProxyModel_Sender((QAbstractProxyModel*)self);
}

int32_t q_abstractproxymodel_sender_signal_index(const void* self) {
    return QAbstractProxyModel_SenderSignalIndex((QAbstractProxyModel*)self);
}

int32_t q_abstractproxymodel_receivers(const void* self, const char* signal) {
    return QAbstractProxyModel_Receivers((QAbstractProxyModel*)self, signal);
}

bool q_abstractproxymodel_is_signal_connected(const void* self, const void* signal) {
    return QAbstractProxyModel_IsSignalConnected((QAbstractProxyModel*)self, (QMetaMethod*)signal);
}

void q_abstractproxymodel_on_source_model_changed(void* self, void (*callback)(void*)) {
    QAbstractProxyModel_Connect_SourceModelChanged((QAbstractProxyModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_abstractproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractproxymodel_delete(void* self) {
    QAbstractProxyModel_Delete((QAbstractProxyModel*)(self));
}
